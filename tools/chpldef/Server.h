/*
 * Copyright 2020-2023 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CHPL_TOOLS_CHPLDEF_SERVER_H
#define CHPL_TOOLS_CHPLDEF_SERVER_H

#include "Format.h"
#include "Logger.h"
#include "IterAdapter.h"
#include "Message.h"
#include "misc.h"
#include "TextRegistry.h"
#include "Transport.h"
#include "chpl/framework/Context.h"
#include "chpl/framework/ErrorBase.h"
#include "chpl/framework/UniqueString.h"
#include "chpl/uast/AstNode.h"
#include "llvm/ADT/Optional.h"
#include "llvm/Support/JSON.h"
#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <thread>
#include <unordered_map>

namespace chpldef {

namespace events { class ResolveModules; }

class Server {
public:
  static constexpr auto NAME = "chpldef";
  static constexpr auto VERSION = "0.0.0";
  static constexpr int DEFAULT_GC_FREQUENCY = 64;

  enum State {
    UNINITIALIZED,      /** Client has not sent 'Initialize' yet. */
    SETUP,              /** We have responded to 'Initialize'. */
    READY,              /** Client has sent us 'Initialized'. */
    SHUTDOWN            /** Client has sent us 'Shutdown'. */
  };

  /** The server will invoke this handler before sending a message. */
  class SentMessageInterceptor {
  public:
    virtual void handle(const Message* msg) = 0;
    virtual ~SentMessageInterceptor() = default;
  };

  /** This can be used to configure a server when creating it. */
  struct Configuration {
    std::string logFile;
    Logger::Level logLevel = Logger::OFF;
    std::string chplHome;
    int garbageCollectionFrequency = DEFAULT_GC_FREQUENCY;
    chpl::owned<Transport> transport = nullptr;
    chpl::owned<SentMessageInterceptor> sentMessageInterceptor = nullptr;
    bool useBriefErrors = false; 
    bool warnUnstable = false;
    bool enableStandardLibrary = false;
    bool compilerDebugTrace = false;
  };

  /** This error handler is installed into the Chapel frontend. This handler
      associates all currently reported errors with a Chapel context
      revision number. The first time an error is reported during a different
      revision number, all errors currently stored in the handler are
      invalidated and removed from the handler. This is because the Chapel
      context should re-report any still relevant errors when its revision
      is bumped.

      Additionally, this error handler stores all errors associated with a
      given URI in reported order. This makes it convenient to implement
      either push or pull diagnostics. */
  class ErrorHandler : public chpl::Context::ErrorHandler {
  public:
    using Error = chpl::ErrorBase;
    using ErrorList = std::vector<chpl::owned<Error>>;
    using ErrorPtrList = std::vector<const Error*>;
    using UriToErrorMap = std::unordered_map<std::string, ErrorPtrList>;
    using iter = ConstIterAdapter<std::string, UriToErrorMap, IterMode::KEY>;
  private:
    ErrorList errors_;
    Server* ctx_ = nullptr;
    int64_t revisionReported_ = -1;
    UriToErrorMap uriToErrors_;

  public:
    ErrorHandler(Server* ctx) : ctx_(ctx) {}
   ~ErrorHandler() = default;

    /** Begin iterating over the different URIs in this error handler. */
    inline iter begin() const { return iter(uriToErrors_.begin()); }

    /** Stop iterating over the different URIs in this error handler. */
    inline iter end() const { return iter(uriToErrors_.end()); }

    /** This is called by the Chapel context to report an error. */
    virtual void report(chpl::Context* chapel, const Error* err) override;

    /** Get all errors in the order reported by the Chapel context. */
    inline const ErrorList& allErrorsInReportOrder() const { return errors_; }

    /** Get all errors for a given URI, or 'nullptr' if none were found. */
    inline const ErrorPtrList* errorsForUri(const std::string& uri) const {
      auto it = uriToErrors_.find(uri);
      return it != uriToErrors_.end() ? &it->second : nullptr;
    }

    /** Get the total number of errors that were reported. */
    inline size_t numErrors() const { return errors_.size(); }

    /** Get the number of errors reported for a given URI. */
    inline size_t numErrorsForUri(const std::string& uri) {
      return errorsForUri(uri) ? errorsForUri(uri)->size() : 0;
    }

    /** Returns 'true' if no errors were reported. */
    inline bool isEmpty() const { return numErrors() == 0; }

    /** Return the revision errors were reported. */
    inline int64_t revisionReported() const { return revisionReported_; }
  };

  /** The server runs an event during each cycle of the event loop. */
  class Event {
  public:
    enum When {
      NEVER             = 0,
      ALWAYS            = 1,  /** Run at every possible trigger point. */
      LOOP_START        = 2,  /** Start of server loop iteration. */
      PRIOR_HANDLE      = 4,  /** Before a message is handled. */
      AFTER_HANDLE      = 8,  /** After a message is handled. */
    };

  private:
    const char* name_ = nullptr;
    int mask_ = 0;

  public:
    Event(const char* name, int mask) : name_(name), mask_(mask) {}
    virtual ~Event() = default;

    inline const char* name() const { return name_; }
    inline int mask() const { return mask_; }

    /** By default, events will not run until server state is 'READY'. */
    static bool defaultCanRun(const Server* ctx, MessageTag tag, When when);

    /** The base class calls the static 'defaultCanRun' above. */
    virtual bool
    canRun(const Server* ctx, MessageTag tag, When when) const;

    /** Run the event at the current stage, indicated by 'when'. */
    virtual void run(Server* ctx, const Message* msg, When when) = 0;
  };



  /** Note that below we list the compiler instance before the server
      configuration so that the server initializer can use the config
      to help initialize the compiler. */
private:
  State state_ = UNINITIALIZED;
  Logger logger_;
  // Take this by owned pointer because of deleted move constructor.
  chpl::owned<chpl::Context> chapel_ = nullptr;
  Configuration config_;
  TextRegistry textRegistry_;
  int64_t revision_ = 0;
  ErrorHandler* errorHandler_ = nullptr;
  std::queue<chpl::owned<Message>> messages_;
  std::unordered_map<std::string, chpl::owned<Message>> idToOutboundRequest_;
  std::vector<chpl::owned<Event>> events_;
  Transport* transport_ = nullptr;
  SentMessageInterceptor* sentMessageInterceptor_ = nullptr;

  inline bool
  isLogLevel(Logger::Level level) const { return logger_.level() == level; }
  inline chpl::Context* chapelPtr() const { return chapel_.get(); }

  chpl::owned<chpl::Context>
  createCompilerContext(const Configuration& config) const;
  bool shouldGarbageCollect() const;
  bool shouldPrepareToGarbageCollect() const;
  void doRegisterEssentialEvents();
  void doRunEvents(Event::When when, MessageTag tag, const Message* msg);
  chpl::owned<Message> dequeueOneMessage();
  void sendMessage(const Message* msg);

protected:
  /** Use this pattern to minimize outside mutation of server state. */
  friend chpldef::Initialize;
  friend chpldef::Initialized;
  friend chpldef::Shutdown;
  friend chpldef::DidOpen;
  friend chpldef::events::ResolveModules;

  inline void setState(State state) { state_ = state; }
  inline TextRegistry& mutableTextRegistry() { return textRegistry_; }

public:
  Server(Configuration config);
  Server(const Server& other) = delete;
  Server(Server&& other) = default;
 ~Server() = default;

  /** Event order matters, and events can be registered more than once. */
  void registerEvent(chpl::owned<Event> event);

  /** Enqueue a message to be worked on by the server. */
  virtual void enqueue(chpl::owned<Message> msg);

  /** Handling depends on the behavior of the message. There are four modes:
      a message can either be a notification or a request, and it can either
      be incoming (client-to-server) or outbound (server-to-client).

      For incoming requests, if the parameters of the request are unpacked,
      then they are used to compute a result. The state of the message is
      updated with the computation results. The message can then be packed
      into JSON so that the results can be sent to the client.

      For incoming notifications, if the parameters of the notification
      are unpacked, then they are used to compute a state change within
      the server. Notifications do not compute a result, and no response
      is returned to the client.

      For outbound requests, the server will input parameters to create the
      request. The request is then packed into JSON and sent to the
      client. The client is expected to send a separate response to the
      server with an ID that matches the originating request. When the
      response is received, it is given to the originating request. The
      result contained in the response is used to compute a state change
      within the server.

      Outbound notifications function similiarly to outbound requests,
      except that the server does not expect a response from the client
      (and none can be sent).

      This method returns 'true' if the handled message was the 'Exit'
      message. This indicates that the server should cease execution.
  */
  virtual bool handle(chpl::owned<Message> msg);

  /** Run the server main loop until exit. Return value is exit code. */
  int run();

  /** Run the server main loop for 'n' iterations. If 'n' is '0' then the
      server loop will run forever. */
  opt<int> run(size_t n);

  /** Get a handle to the current transport layer. */
  inline Transport* transport() { return transport_; }

  inline const ErrorHandler* errorHandler() const { return errorHandler_; }

  inline State state() const { return state_; }

  inline int64_t revision() const { return revision_; }

  inline const chpl::Context* chapel() const { return chapelPtr(); }

  inline const TextRegistry& textRegistry() const { return textRegistry_; }

  inline int garbageCollectionFrequency() const {
    return config_.garbageCollectionFrequency;
  }

  inline const Configuration& config() const { return config_; }

  void setLogger(Logger&& logger);
  inline Logger& logger() { return logger_; }
  inline bool isLogMessage() const { return isLogLevel(Logger::MESSAGES); }
  inline bool isLogVerbose() const { return isLogLevel(Logger::VERBOSE); }
  inline bool isLogTrace() const { return isLogLevel(Logger::TRACE); }

  CHPLDEF_PFMT(2, 3, void message(const char* fmt, ...));
  CHPLDEF_PFMT(2, 3, void verbose(const char* fmt, ...));
  CHPLDEF_PFMT(2, 3, void trace(const char* fmt, ...));

  void sleep(int msec);

  enum WithChapelConfig {
    CHPL_NO_MASK         = 0,
    CHPL_BUMP_REVISION   = 1,
  };

private:
  inline void withChapelPrelude(WithChapelConfig c) {
    auto chapel = chapelPtr();
    if (shouldGarbageCollect()) chapel->collectGarbage();
    if (c & CHPL_BUMP_REVISION) {
      chapel->advanceToNextRevision(shouldPrepareToGarbageCollect());
      ++revision_;
    }
  }

public:
  /** Execute code with controlled access to the Chapel context. */
  template <typename F, typename ...Ns>
  auto withChapel(WithChapelConfig c, F&& f, Ns&&... ns)
  -> decltype(f(chapelPtr(), std::forward<Ns>(ns)...)) {
    withChapelPrelude(c);
    return f(chapelPtr(), std::forward<Ns>(ns)...);
  }

  /** Execute code with controlled access to the Chapel context. */
  template <typename F, typename ...Ns>
  auto withChapel(F&& f, Ns&&... ns)
  -> decltype(f(chapelPtr(), std::forward<Ns>(ns)...)) {

    // Calling 'withChapel' leads to infinite instantiation under GCC...
    withChapelPrelude(CHPL_NO_MASK);
    return f(chapelPtr(), std::forward<Ns>(ns)...);
  }

  template <typename T>
  std::string fmt(const T& t, Format::Detail dt=Format::DEFAULT) {
    Format f(this, dt);
    f.write(t);
    return f.read();
  }
};

} // end namespace 'chpldef'

#endif
