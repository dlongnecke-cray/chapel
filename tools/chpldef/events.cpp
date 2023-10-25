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

#include "compiler-gadgets.h"
#include "events.h"
#include "Server.h"
#include "Transport.h"

namespace chpldef {
namespace events {

/** Always run this - we need to be reading messages. */
bool ReadMessage::canRun(const Server* ctx, MessageTag tag, When when) const {
  return true;
}

void ReadMessage::run(Server* ctx, const Message* msg, When when) {
  CHPL_ASSERT(!msg && when == Event::LOOP_START);

  ctx->message("Attempting to read message...\n");
  auto ts = ctx->transport();

  if (ts == nullptr) {
    ctx->message("Giving up because no transport was found!\n");
    return;
  }

  JsonValue json(nullptr);

  // TODO: This operation blocks. We'd like non-blocking IO. There are a
  // few ways to accomplish this. Ideally we find some sort of high-level,
  // non-blocking "transport" abstraction that we can use.
  //
  //    -- LLVM might offer transport layer APIs
  //    -- LLVM might offer non-blocking IO
  //    -- C++ futures might be useful here, but we need to be able to
  //       control which thread runs the future and its lifetime (to
  //       make sure that the thread reading e.g., stdin is reliably
  //       closed...).
  //    -- We can do it ourselves using C++ threads, CVs, and locks, and
  //       wrap it up in a neat little function that populates a queue
  //       of messages for the context.
  auto status = ts->readJson(ctx, json);
  CHPL_ASSERT(status == Transport::OK);

  if (ctx->isLogTrace()) {
    ctx->trace("Incoming JSON is %s\n", jsonToString(json).c_str());
  }

  // Create a message from the incoming JSON...
  auto work = Message::create(ctx, std::move(json));
  CHPL_ASSERT(work.get());

  // Add the message to the work queue.
  ctx->enqueue(std::move(work));
}

bool ResolveModules::canRun(const Server* ctx, MessageTag tag,
                            When when) const {
  CHPL_ASSERT(when = AFTER_HANDLE);
  if (!Event::canRun(ctx, tag, when)) return false;
  if (!Message::isSynchronizationMessage(tag)) return false;
  int64_t rev = ctx->textRegistry().latestRevisionAnyUriResolved();
  return rev < ctx->revision();
}

void ResolveModules::run(Server* ctx, const Message* msg, When when) {
  CHPL_ASSERT(!msg && when == AFTER_HANDLE);

  auto tr = ctx->mutableTextRegistry();
  const int64_t rev = ctx->revision();
  int numResolved = 0;

  for (const auto& uri : tr) {
    if (!tr.isOpen(uri)) continue;

    // Loop through and resolve each top-level module.
    ctx->withChapel([&](auto chapel) {
      auto& br = parseFromUri(chapel, uri);

      for (auto ast : br.topLevelExpressions()) {
        if (auto mod = ast->toModule()) {
          auto& rr = chpl::resolution::resolveModule(chapel, mod->id());
          std::ignore = rr;
          ctx->trace("Resolved '%s' at '%s'\n", ctx->fmt(mod).c_str(),
                     uri.c_str());
        }
      }
    });

    tr.setLastRevisionResolved(uri, rev);
    numResolved++;
  }

  // Revision for all files
  if (numResolved) {
    for (auto& uri : tr) {
      if (tr.isOpen(uri)) CHPL_ASSERT(tr.lastRevisionResolved(uri) == rev);
    }
  }
}

bool PreparePublishDiagnostics::canRun(const Server* ctx, MessageTag tag,
                                       When when) const {
  if (!Event::defaultCanRun(ctx, tag, when)) return false;
  return ctx->errorHandler()->revisionReported() > lastRevisionPrepared_;
}

void PreparePublishDiagnostics::run(Server* ctx, const Message* msg,
                                    When when) {
  auto handler = ctx->errorHandler();
  CHPL_ASSERT(!handler->isEmpty());

  for (auto& uri : *handler) {
    std::vector<Diagnostic> diags;

    for (auto e : *handler->errorsForUri(uri)) {
      ctx->withChapel([&](auto chapel) {
        Diagnostic d(chapel, e, ctx->config().useBriefErrors);
        diags.push_back(std::move(d));
      });

      int64_t ver = ctx->textRegistry().version(uri);
      PublishDiagnosticsParams p;
      p.uri = uri;
      p.version = ver;
      p.diagnostics = std::move(diags);
      auto msg = PublishDiagnostics::create(std::move(p));
      ctx->enqueue(std::move(msg));
    }
  }
}

} // end namespace 'events'
} // end namespace 'chpldef'
