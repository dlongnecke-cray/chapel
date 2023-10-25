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

#include "./TestClient.h"
#include <sstream>

void TestClient::breakpoint() {}

void TestClient::SentMessageInterceptor::handle(const Message* msg) {
  auto clone = msg->clone();
  std::swap(last_, clone);
}

chpl::owned<Message> TestClient::SentMessageInterceptor::take() {
  chpl::owned<Message> ret = nullptr;
  std::swap(last_, ret);
  return ret;
}

Server
TestClient::createServerInstance(chpl::owned<SentMessageInterceptor> t) {
  Server::Configuration conf;
  conf.sentMessageInterceptor = std::move(t);
  conf.transport = nullptr;
  return { std::move(conf) };
}

chpl::Context TestClient::createChapelCompilerInstance() {
  chpl::Context::Configuration conf;
  return { std::move(conf) };
}

TestClient TestClient::create() {
  auto interceptor = chpl::toOwned(new TestClient::SentMessageInterceptor());
  auto ptr = interceptor.get();
  auto server = createServerInstance(std::move(interceptor));
  return { std::move(server), ptr };
}

int64_t TestClient::bumpVersionForUri(const std::string& uri) {
  auto it = uriToVersion_.find(uri);
  if (it != uriToVersion_.end()) return it->second++;
  uriToVersion_[uri] = 0;
  return 0;
}

JsonValue TestClient::createUniqueMessageId() {
  return messageIdCounter_++;
}

opt<InitializeResult> TestClient::sendInitialize() {
  Initialize::Params p;
  auto msg = Initialize::create(std::move(p), createUniqueMessageId());
  msg->handle(ctx_);
  if (auto r = msg->result()) return *r;
  return {};
}

void TestClient::sendInitialized() {
  Initialized::Params p;
  auto msg = Initialized::create(std::move(p), createUniqueMessageId());
  msg->handle(ctx_);
}

void TestClient::sendExit() {
  CHPLDEF_TODO();
}

void TestClient::sendShutdown() {
  CHPLDEF_TODO();
}

void TestClient::advanceServerToReady() {
  if (ctx_->state() == Server::UNINITIALIZED) {
    std::ignore = sendInitialize();
    CHPL_ASSERT(ctx_->state() == Server::SETUP);
  }

  if (ctx_->state() == Server::SETUP) {
    sendInitialized();
    CHPL_ASSERT(ctx_->state() == Server::READY);
  }
}

void TestClient::sendDidOpen(const std::string& uri,
                             const std::string& text) {
  auto ver = bumpVersionForUri(uri);
  TextDocumentItem tdi { uri, "chapel", ver, text };
  DidOpen::Params p { std::move(tdi) };
  auto msg = DidOpen::create(std::move(p), nullptr);
  msg->handle(ctx_);
}

static std::string mentionSymbol(const chpl::uast::AstNode* ast) {
  if (auto x = ast->toIdentifier()) return x->name().c_str();
  if (auto x = ast->toDot()) return x->field().c_str();
  CHPLDEF_TODO();
  return {};
}

static Location
locationFromAst(chpl::Context* chapel, const chpl::uast::AstNode* ast) {
  CHPL_ASSERT(ast);
  auto loc = chpl::parsing::locateAst(chapel, ast);
  return Location(std::move(loc));
}

static void
doCollectMentions(chpl::Context* chapel,
                  const chpl::uast::AstNode* ast,
                  std::vector<const chpl::uast::NamedDecl*>& decls,
                  std::vector<TestClient::Mention>& mentions) {
  if (auto decl = ast->toNamedDecl()) {
    decls.push_back(decl);
  } else if (ast->isIdentifier() || ast->isDot()) {
    TestClient::Mention m;
    m.tag = ast->tag();
    m.symbol = mentionSymbol(ast);
    bool isBaseExpr = parentCallIfBaseExpression(chapel, ast) != nullptr;
    m.isCallBaseExpression = isBaseExpr;
    m.source = locationFromAst(chapel, ast);
    mentions.push_back(std::move(m));
  }

  const bool canRecurse = !ast->isFunction();
  if (!canRecurse) return;

  for (auto child : ast->children()) {
    doCollectMentions(chapel, child, decls, mentions);
  }
}

static void
doFixupMentionTargets(chpl::Context* chapel,
                      std::vector<const chpl::uast::NamedDecl*>& decls,
                      std::vector<TestClient::Mention>& mentions) {
  std::map<std::string, std::vector<const chpl::uast::NamedDecl*>> nameToDecls;
  std::map<std::string, size_t> functionMentionIdx;

  for (auto& nd : decls) {
    auto name = nd->name().c_str();
    auto& v = nameToDecls[name];
    v.push_back(nd);
    if (!nd->isFunction()) CHPL_ASSERT(v.size() == 1);
  }

  for (size_t i = 0; i < mentions.size(); i++) {
    auto& m = mentions[i];
    auto& name = m.symbol;

    // Get the declaration(s) with the name 'name'.
    auto it = nameToDecls.find(name);
    CHPL_ASSERT(it != nameToDecls.end());
    auto& v = it->second;

    const chpl::uast::NamedDecl* nd = nullptr;

    // Calls map linearly in order to simulate overloading.
    if (m.isCallBaseExpression) {
      auto& idx = functionMentionIdx[name];
      CHPL_ASSERT(v.size() >= 1);
      CHPL_ASSERT(idx < v.size());
      nd = v[idx++];

    // Everything else just maps by name.
    } else {
      CHPL_ASSERT(v.size() == 1);
      nd = v[0];
    }

    CHPL_ASSERT(nd);
    m.target = locationFromAst(chapel, nd);
  }
}

std::vector<TestClient::Mention>
TestClient::collectMentions(const std::string& uri,
                            const std::string& text) {
  auto chapelContext = createChapelCompilerInstance();
  auto chapel = &chapelContext;
  std::vector<TestClient::Mention> ret;
  std::vector<const chpl::uast::NamedDecl*> decls;

  // Set the file text and parse the file.
  auto ustr = chpl::UniqueString::get(chapel, uri);
  chpl::parsing::setFileText(chapel, ustr, text);
  auto& br = parseFromUri(chapel, uri);

  for (auto ast : br.topLevelExpressions()) {
    doCollectMentions(chapel, ast, decls, ret);
  }

  // Fixing up the targets allows tests to write decls out of order.
  doFixupMentionTargets(chapel, decls, ret);

  return ret;
}

std::vector<uint64_t>
TestClient::collectLineLengthsInSource(const std::string& text) {
  std::vector<uint64_t> ret;
  uint64_t character = 0;
  for (auto c : text) {
    if (c == '\n') {
      ret.push_back(character);
      character = 0;
    } else {
      character += 1;
    }
  }
  return ret;
}

opt<Location>
TestClient::sendDeclaration(const std::string& uri, Position cursor) {
  TextDocumentIdentifier tdi(uri);
  Declaration::Params p;
  p.textDocument = std::move(tdi);
  p.position = std::move(cursor);

  // Create and handle the message directly rather than enqueue it for
  // processing by the server main loop.
  auto msg = Declaration::create(std::move(p), createUniqueMessageId());
  msg->handle(ctx_);

  // TODO: This is absurd, we need to flatten 'DeclarationResult'.
  if (auto r = msg->result()) {
    if (auto& res = r->result) {
      if (auto p = std::get_if<LocationArray>(&(*res))) {
        auto& arr = *p;
        CHPL_ASSERT(arr.size() <= 1);
        if (arr.size() == 1) return arr[0];
        return {};
      }
    }
  }
  return {};
}

std::string TestClient::Mention::toString() const {
  std::stringstream ss;
  ss << chpl::uast::asttags::tagToString(tag) << " " << symbol << " (";
  ss << source.range.start.line << ":" << source.range.start.character;
  ss << "-";
  ss << source.range.end.line << ":" << source.range.end.character;
  ss << " -> ";
  ss << target.range.start.line << ":" << target.range.start.character;
  ss << "-";
  ss << target.range.end.line << ":" << target.range.end.character;
  ss << ")";
  return ss.str();
}

std::map<std::string, std::vector<Diagnostic>>
TestClient::collectDiagnosticMessages(const std::string& uri,
                                      const std::string& text) {
  auto chapelContext = createChapelCompilerInstance();
  auto chapel = &chapelContext;
  auto handler = installErrorHandler(chapel);

  auto ustr = chpl::UniqueString::get(chapel, uri);
  chpl::parsing::setFileText(chapel, ustr, text);
  auto& br = parseFromUri(chapel, uri);

  for (auto ast : br.topLevelExpressions()) {
    if (auto mod = ast->toModule()) {
      // TODO: Is this sufficient to report all errors?
      std::ignore = chpl::resolution::resolveModule(chapel, mod->id());
    }
  }

  std::map<std::string, std::vector<Diagnostic>> ret;
  for (const chpl::owned<chpl::ErrorBase>& e : *handler) {
    assert(e.get());
    auto loc = e->location(chapel);
    auto uri = std::string(loc.path().c_str());
    Diagnostic d(chapel, e.get());
    ret[uri].push_back(std::move(d));
  }

  return ret;
}

void AggregateErrorHandler::
report(chpl::Context* chapel, const chpl::ErrorBase* e) {
  errors_.push_back(e->clone());
}

AggregateErrorHandler*
TestClient::installErrorHandler(chpl::Context* chapel) {
  auto handler = chpl::toOwned(new AggregateErrorHandler());
  auto ret = handler.get();
  chapel->installErrorHandler(std::move(handler));
  return ret;
}
