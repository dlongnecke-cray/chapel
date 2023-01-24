/*
 * Copyright 2020-2022 Hewlett Packard Enterprise Development LP
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

#ifndef CHPL_LIB_PARSING_ANTLR_ANTLR_TO_AST_VISITOR_H
#define CHPL_LIB_PARSING_ANTLR_ANTLR_TO_AST_VISITOR_H

#include "chpl/framework/Context.h"
#include "chpl/framework/ErrorMessage.h"
#include "chpl/parsing/parser-stats.h"
#include "chpl/uast/AstNode.h"
#include "chpl/uast/all-uast.h"

#include "./ChapelParserVisitor.h"

#include <cstdlib>
#include <cstring>
#include <iostream>

namespace {

using namespace chpl::parsing;
using namespace chpl::uast;

class AntlrToAstVisitor : public ChapelParserVisitor {
private:
  using SharedAstList = chpl::shared<AstList>;
  using ANY = std::any;
  using P = ChapelParser;

  struct DeclarationData {
    bool empty;
  };

  Builder* builder_;
  chpl::Context* ctx_;
  ParserStats* parserStats_;
  SharedAstList topLevelStatements_;
  DeclarationData declData_;
  bool isDeclDataSet_;

  static SharedAstList toAstList(std::any a) {
    try {
      auto ret = std::any_cast<SharedAstLista);
      return ret;
    } catch (const std::bad_any_cast& e) {
      return nullptr;
    }
    return nullptr;
  }

  // TODO: Merge and shuffle around comments as needed.
  static void merge(SharedAstList keep, SharedAstList consume) {
    for (auto& ast : consume) keep.push_back(std::move(ast));
    consume.clear();
  }

  static UniqueString
  makeUniqueString(P::IdentDefContext* ctx) {
    
  }

  static AstList
  makeAstListFromStatements(std::vector<P::StatementContext*>&& s) {

  }

  Decl::Visibility visibility() const {

  }

  ANY visitStart(P::StartContext* ctx) override {
    for (auto s : ctx->statement()) {
      auto list = toAstList(this->visit(s));
      assert(list);
      merge(topLevelStatements_, list);
    }
    return nullptr;
  }

  ANY visitPragma(P::PragmaContext* ctx) override {
    return nullptr;
  }

  ANY visitStatement(P::StatementContext* ctx) override {
    return nullptr;
  }

  ANY visitDeprecation(P::DeprecationContext* ctx) override {
    return nullptr;
  }

  ANY visitAccess(P::AccessContext* ctx) override {
    return nullptr;
  }

  ANY visitDeclaration(P::DeclarationContext* ctx) override {
    return nullptr;
  }

  ANY visitModule(P::ModuleContext* ctx) override {
    auto loc = makeLocation(ctx);
    auto attributes = realizeStoredAttributes(loc);
    auto vis = visibility();
    auto name = makeUniqueString(ctx->identDef());
    auto kind = Module::DEFAULT_MODULE_KIND;
    if (ctx->TPROTOTYPE()) kind = Module::PROTOTYPE;
    auto body = makeAstListFromStatements(ctx->statement());
    auto node = Module::build(builder_, loc, std::move(attributes),
                              vis,
                              name,
                              kind,
                              std::move(body));
    return node.release();
  }

  ANY visitRoutine(P::RoutineContext* ctx) override {
    return nullptr;
  }

  ANY visitVariable(P::VariableContext* ctx) override {
    return nullptr;
  }

  ANY visitReturn(P::ReturnContext* ctx) override {
    return nullptr;
  }

  ANY visitYield(P::YieldContext* ctx) override {
    return nullptr;
  }

  ANY visitEmpty(P::EmptyContext* ctx) override {
    return nullptr;
  }

  ANY visitBlock(P::BlockContext* ctx) override {
    return nullptr;
  }

  ANY visitIdentDef(P::IdentDefContext* ctx) override {
    return nullptr;
  }

  ANY visitRoutineOpen(P::RoutineOpenContext* ctx) override {
    return nullptr;
  }

  ANY visitReceiverIntent(P::ReceiverIntentContext* ctx) override {
    return nullptr;
  }

  ANY visitRoutineIdent(P::RoutineIdentContext* ctx) override {
    return nullptr;
  }

  ANY visitSignature(P::SignatureContext* ctx) override {
    return nullptr;
  }

  ANY visitRoutineBody(P::RoutineBodyContext* ctx) override {
    return nullptr;
  }

  ANY visitVariableOpen(P::VariableOpenContext* ctx) override {
    return nullptr;
  }

  ANY visitVariableComponent(P::VariableComponentContext* ctx) override {
    return nullptr;
  }

  ANY visitExpr(P::ExprContext* ctx) override {
    return nullptr;
  }

  ANY visitFormalList(P::FormalListContext* ctx) override {
    return nullptr;
  }

  ANY visitReturnIntent(P::ReturnIntentContext* ctx) override {
    return nullptr;
  }

  ANY visitReturnType(P::ReturnTypeContext* ctx) override {
    return nullptr;
  }

  ANY visitTypeExpr(P::TypeExprContext* ctx) override {
    return nullptr;
  }

  ANY visitInitExpr(P::InitExprContext* ctx) override {
    return nullptr;
  }

  ANY visitIdentUse(P::IdentUseContext* ctx) override {
    return nullptr;
  }

  ANY visitFormal(P::FormalContext* ctx) override {
    return nullptr;
  }

  ANY visitPrimary(P::PrimaryContext* ctx) override {
    return nullptr;
  }

  ANY visitTuple(P::TupleContext* ctx) override {
    return nullptr;
  }

  ANY visitCall(P::CallContext* ctx) override {
    return nullptr;
  }

  ANY visitOperator(P::OperatorContext* ctx) override {
    return nullptr;
  }

  ANY visitNew(P::NewContext* ctx) override {
    return nullptr;
  }

  ANY visitReduceOrScan(P::ReduceOrScanContext* ctx) override {
    return nullptr;
  }

  ANY visitLoopExpr(P::LoopExprContext* ctx) override {
    return nullptr;
  }

  ANY visitNamedFormal(P::NamedFormalContext* ctx) override {
    return nullptr;
  }

  ANY visitLiteral(P::LiteralContext* ctx) override {
    return nullptr;
  }

  ANY visitCallBaseExpr(P::CallBaseExprContext* ctx) override {
    return nullptr;
  }

  ANY visitActualList(P::ActualListContext* ctx) override {
    return nullptr;
  }

  ANY visitZip(P::ZipContext* ctx) override {
    return nullptr;
  }

  ANY visitReduceScanOp(P::ReduceScanOpContext* ctx) override {
    return nullptr;
  }

  ANY visitFormalIntent(P::FormalIntentContext* ctx) override {
    return nullptr;
  }

  ANY visitFormalTypeExpr(P::FormalTypeExprContext* ctx) override {
    return nullptr;
  }

  ANY visitActual(P::ActualContext* ctx) override {
    return nullptr;
  }

  ANY visitQueryExpr(P::QueryExprContext* ctx) override {
    return nullptr;
  }

  ANY visitTryExpr(P::TryExprContext* ctx) override {
    return nullptr;
  }

  /*
  ANY visitExpr(P::ExprContext* ctx) override {
    return nullptr;
  }
  */

 public:
  AntlrToAstVisitor(Builder* builder, ParserStats* parserStats)
        : builder_(builder),
          ctx_(builder->context()),
          parserStats_(parserStats),
          declData_(DeclarationData()),
          isDeclDataSet_(false) {
    std::ignore = builder_;
    std::ignore = parserStats_;
    std::ignore = declData_;
    std::ignore = isDeclDataSet_;
    return;
  }

  BuilderResult walk(ChapelParser::StartContext* tree) {
    std::ignore = this->visitStart(tree);
    assert(0 == "Not implemented yet!");
    auto ret = builder_->result();
    return ret;
  }
};

} // namespace

#endif
