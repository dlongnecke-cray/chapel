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

#include "Message.h"
#include "Server.h"
#include "chpl/parsing/parsing-queries.h"

namespace chpldef {

template<>
DidOpen::ComputeResult DidOpen::compute(Server* ctx, ComputeParams p) {
  TextRegistry& tr = ctx->mutableTextRegistry();
  auto& tdi = p.textDocument;
  auto& uri = tdi.uri;

  if (tr.isOpen(uri)) {
    CHPLDEF_TODO();
    return {};
  }

  // Open the entry.
  tr.open(uri);

  CHPL_ASSERT(tdi.version > tr.version(uri));

  // NOTE: I think we always have to bump the revision here. This is
  // because the file may have been implicitly parsed from disk as a result
  // of resolving a use/import. The contents are considered to have changed
  // and the "truth of the file's contents" are determined by the client as
  // long as it has the file open. Cannot implicitly read from disk, so
  // have to bump the revision to ensure correctness.
  ctx->withChapel(Server::CHPL_BUMP_REVISION, [&](auto chapel) {
    chpl::parsing::setFileText(chapel, uri, std::move(tdi.text));
    auto& fc = chpl::parsing::fileText(chapel, uri);
    CHPL_ASSERT(!fc.error());
    tr.setVersion(uri, tdi.version);
    tr.setLastRevisionUpdated(uri, ctx->revision());
    CHPL_ASSERT(tr.isOpen(uri));
  });

  return {};
}

template<>
DidChange::ComputeResult DidChange::compute(Server* ctx, ComputeParams p) {
  CHPLDEF_TODO();
  return {};
}

template<>
DidSave::ComputeResult DidSave::compute(Server* ctx, ComputeParams p) {
  CHPLDEF_TODO();
  return {};
}

template<>
DidClose::ComputeResult DidClose::compute(Server* ctx, ComputeParams p) {
  CHPLDEF_TODO();
  return {};
}

} // end namespace 'chpldef'
