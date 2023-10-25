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

#ifndef CHPL_TOOLS_CHPLDEF_TESTCLIENT_H
#define CHPL_TOOLS_CHPLDEF_TESTCLIENT_H

#include "compiler-gadgets.h"
#include "events.h"
#include "Format.h"
#include "IterAdapter.h"
#include "Logger.h"
#include "Message.h"
#include "misc.h"
#include "protocol-types.h"
#include "Server.h"
#include "Transport.h"
#include <ostream>
#include <queue>
#include <utility>
#include <vector>

using namespace chpldef;

/** Install this error handler in the Chapel context when you need to record
    errors that are emitted during a run. */
class AggregateErrorHandler : public chpl::Context::ErrorHandler {
public:
  using Error = chpl::ErrorBase;
  using iter = ConstIterAdapter<chpl::owned<Error>,
                                std::vector<chpl::owned<Error>>,
                                IterMode::CONTENTS>;
private:
  std::vector<chpl::owned<Error>> errors_;
public:
  AggregateErrorHandler() = default;
 ~AggregateErrorHandler() = default;
  inline iter begin() const { return iter(errors_.begin()); }
  inline iter end() const { return iter(errors_.end()); }
  virtual void report(chpl::Context* chapel, const Error* e) final override;
  inline size_t numErrors() const { return errors_.size(); }
  inline const Error* error(int i) {
    return (0 <= i && i < numErrors()) ? errors_[i].get() : nullptr;
  }
};

/** This 'TestClient' simulates a LSP client, but issues direct calls to
    server functionality rather than by sending JSON over some sort of
    transport layer as a normal client would (also, usually the client
    operates as a separate process - here for the sake of unit testing
    the client and server operate in the same process). This client should
    be used to test most language server queries.
*/
class TestClient {
public:
  /** Intercepts server-sent messages so the client can inspect them. */
  class SentMessageInterceptor : public Server::SentMessageInterceptor {
    chpl::owned<Message> last_ = nullptr;
  public:
    SentMessageInterceptor() = default;
    virtual ~SentMessageInterceptor() = default;
    virtual void handle(const Message* msg) final override;
    chpl::owned<Message> take();
  };

private:
  Server server_;
  Server* ctx_ = &server_;
  int64_t messageIdCounter_ = 0;
  std::map<std::string, int64_t> uriToVersion_;
  std::ostream& dbg_ = ctx_->transport() ? std::cerr : std::cout;
  SentMessageInterceptor* interceptor_ = nullptr;

  TestClient(Server server, SentMessageInterceptor* interceptor)
    : server_(std::move(server)),
      interceptor_(interceptor) {}

  static Server createServerInstance(chpl::owned<SentMessageInterceptor> t);
  static chpl::Context createChapelCompilerInstance();
  static AggregateErrorHandler* installErrorHandler(chpl::Context* chapel);
  int64_t bumpVersionForUri(const std::string& uri);
  void receiveMessage(const Message* msg);

public:
 ~TestClient() = default;

  /** Create a new instance of a test client. */
  static TestClient create();

  /** Get the current message ID counter. */
  inline int64_t messageIdCounter() const { return messageIdCounter_; }

  /** Get a const handle to the serve instance embedded in the client. */
  inline const Server& server() const { return server_; }

  /** Get a handle to a stream suitable for printing debug infos. */
  inline std::ostream& dbg() { return dbg_; }

  /** For requests, prepare a new ID number embedded in JSON. */
  JsonValue createUniqueMessageId();

  /** Send the 'Initialize' message to the server. */
  opt<InitializeResult> sendInitialize();

  /** Send the 'Initialized' message to the server. */
  void sendInitialized();

  /** Send the 'Shutdown' message to the server. */
  void sendShutdown();

  /** Send the 'Exit' message to the server. */
  void sendExit();

  /** Complete the initialization handshake. After this call the server will
      be in the 'READY' state and can accept any message. */
  void advanceServerToReady();

  /** Send a 'DidOpen' notification. */
  void sendDidOpen(const std::string& uri, const std::string& text);

  /** A mention represents a text range the client is interested in. */
  struct Mention {
    using AstTag = chpl::uast::asttags::AstTag;
    AstTag tag;
    bool isCallBaseExpression = false;
    std::string symbol;
    Location source;
    Location target;

    std::string toString() const;
  };

  /** Collect locations the client is interested in using a separate
      instance of the Chapel compiler. The way mentions are mapped to
      target locations depends on the target. Calls are mapped linearly
      (where call N of 'foo' maps to overload N of 'foo') in order to
      simulate overloading. Every other declaration is mapped by name.
  */
  static std::vector<Mention>
  collectMentions(const std::string& uri, const std::string& text);

  /** Collect diagnostic messages, if any, that occurred as a result of
      resolving the given program. The messages are computed by running
      a separate instance of the Chapel compiler. */
  static std::map<std::string, std::vector<Diagnostic>>
  collectDiagnosticMessages(const std::string& uri, const std::string& text);

  /** Collect line lengths within the file using a separate instance
      of the Chapel compiler. */
  static std::vector<uint64_t>
  collectLineLengthsInSource(const std::string& text);

  /** Send a 'Declaration' message. May return a 'Location'. */
  opt<Location> sendDeclaration(const std::string& uri, Position cursor);

  /** For testing/debugging purposes. */
  static void breakpoint();
};

#endif
