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

#include "chpl/parsing/Parser.h"

#include "chpl/framework/compiler-configuration.h"
#include "chpl/framework/CompilerFlags.h"
#include "chpl/framework/ErrorMessage.h"
#include "chpl/uast/AstNode.h"
#include "chpl/uast/Comment.h"

#include "antlr/AntlrParser.h"
#include "bison/BisonParser.h"

#include <cstdlib>
#include <cstring>

namespace chpl {
namespace parsing {

using namespace chpl::uast;

Parser::Parser(Context* context, UniqueString parentSymbolPath)
  : context_(context), parentSymbolPath_(parentSymbolPath) {
}

Parser Parser::createForTopLevelModule(Context* context) {
  UniqueString emptySymbolPath;
  return Parser(context, emptySymbolPath);
}

Parser Parser::createForIncludedModule(Context* context,
                                       UniqueString parentSymbolPath) {
  return Parser(context, parentSymbolPath);
}

BuilderResult
Parser::parseFile(const char* path, ParserStats* parseStats) {
  if (chpl::isCompilerFlagSet(context_, CompilerFlags::ANTLR_PARSER)) {
    AntlrParser p = { context_, parentSymbolPath_ };
    return p.parseFile(path, parseStats);
  } else {
    BisonParser p = { context_, parentSymbolPath_ };
    return p.parseFile(path, parseStats);
  }
}


BuilderResult Parser::parseString(const char* path, const char* str,
                                  ParserStats* parseStats) {
  if (chpl::isCompilerFlagSet(context_, CompilerFlags::ANTLR_PARSER)) {
    AntlrParser p = { context_, parentSymbolPath_ };
    return p.parseString(path, str, parseStats);
  } else {
    BisonParser p = { context_, parentSymbolPath_ };
    return p.parseString(path, str, parseStats);
  }
}


} // namespace parsing
} // namespace chpl
