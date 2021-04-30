/*
 * Copyright 2021 Hewlett Packard Enterprise Development LP
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

#ifndef CHPL_AST_OPCALLEXPR_H
#define CHPL_AST_OPCALLEXPR_H

#include "chpl/AST/CallExpr.h"

namespace chpl {
namespace ast {

/**
  This class represents a call to an operator.
 */
class OpCallExpr final : public CallExpr {
 private:
  // which operator
  UniqueString op_;

  bool matchesInner(const BaseAST* other) const override;
 public:
  ~OpCallExpr() override = default;

  /** Returns the name of the operator called */
  UniqueString operatorName() const { return op_; }
};

} // end namespace ast
} // end namespace chpl

#endif