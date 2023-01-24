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

#include "../../util/filesystem_help.h"

#include "chpl/framework/ErrorMessage.h"
#include "chpl/uast/AstNode.h"
#include "chpl/uast/Comment.h"

#include <cstdlib>
#include <cstring>
#include <iostream>

#include "./AntlrToAstVisitor.h"
#include "./ChapelLexer.h"
#include "./ChapelParser.h"

#ifdef PARSER_DEBUG
  #define ANTLR_PARSER_DEBUG PARSER_DEBUG
#else
  #define ANTLR_PARSER_DEBUG 0
#endif

namespace {

using namespace chpl;
using namespace chpl::uast;
using namespace chpl::parsing;

struct AntlrParser {
  Context* context_;
  UniqueString parentSymbolPath_;

  // Does the work given an input stream.
  BuilderResult consumeStreamToBuilderResult(antlr4::ANTLRInputStream& s,
                                             const char* path,
                                             ParserStats* parserStats);

  // Shims for the corresponding Parser methods.
  BuilderResult parseFile(const char* path, ParserStats* parseStats);
  BuilderResult parseString(const char* path, const char* str,
                            ParserStats* parseStats);
};

BuilderResult
AntlrParser::consumeStreamToBuilderResult(antlr4::ANTLRInputStream& s,
                                          const char* path,
                                          ParserStats* parserStats) {
  // Set up the builder.
  auto builder = parentSymbolPath_.isEmpty()
      ? Builder::createForTopLevelModule(context_, path)
      : Builder::createForIncludedModule(context_, path,
                                         parentSymbolPath_);

  // Set up the ANTLR parser.
  ChapelLexer lexer(&s);
  antlr4::CommonTokenStream tokens(&lexer);
  ChapelParser parser(&tokens);

  // Run the start rule to parse the input.
  ChapelParser::StartContext* tree = parser.start();

  auto v = AntlrToAstVisitor(builder.get(), parserStats); 
  auto ret = v.walk(tree);
  return ret;
}

BuilderResult
AntlrParser::parseFile(const char* path, ParserStats* parserStats) {
  std::ifstream stream;
  stream.open(path);
  if (!stream) {
    assert(0 == "Handle the error.");
  }

  antlr4::ANTLRInputStream s(stream);
  auto ret = consumeStreamToBuilderResult(s, path, parserStats);
  return ret;
}

BuilderResult
AntlrParser::parseString(const char* path, const char* str,
                         ParserStats* parserStats) {
  antlr4::ANTLRInputStream s(str);
  auto ret = consumeStreamToBuilderResult(s, path, parserStats);
  return ret;
}


} // namespace
