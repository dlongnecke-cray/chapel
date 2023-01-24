# Copyright 2021-2022 Hewlett Packard Enterprise Development LP
# Other additional copyright holders may be indicated within.
#
# The entirety of this work is licensed under the Apache License,
# Version 2.0 (the "License"); you may not use this file except
# in compliance with the License.
#
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

target_sources(libdyno-obj
               PRIVATE

               # These are generated.
               ChapelLexer.cpp
               ChapelLexer.h
               ChapelParser.cpp
               ChapelParser.h
               ChapelParserBaseVisitor.cpp
               ChapelParserBaseVisitor.h
               ChapelParserVisitor.cpp
               ChapelParserVisitor.h
               # This is the visitor that builds AST from the parse tree.
               AntlrToAstVisitor.h
               # This is the private interface to the generated parser.
               AntlrParser.h
              )

set(ANTLR_ARGS -Dlanguage=Cpp -visitor -no-listener)
set(ANTLR_SRCS ChapelLexer.g4 ChapelParser.g4)

# TODO: Check ANTLR version or something.
add_custom_target(antlr-parser
                  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                  COMMAND antlr ${ANTLR_ARGS} ${ANTLR_SRCS}
                  COMMENT "Generating ANTLR parser!"
                  COMMENT "At ${CMAKE_CURRENT_SOURCE_DIR}")
