/*
 * Copyright 2021-2025 Hewlett Packard Enterprise Development LP
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

#include "chpl/uast/Call.h"

namespace chpl {
namespace uast {


std::string Call::dumpChildLabelInner(int i) const {
  if (hasCalledExpression_ && i == 0) {
    return "called-expr";
  }

  int shift = 0;
  if (hasCalledExpression_) {
    shift = 1;
  }

  std::string ret = "actual ";
  ret += std::to_string(i - shift);
  return ret;
}

Call::~Call() {
}


} // namespace uast
} // namespace chpl
