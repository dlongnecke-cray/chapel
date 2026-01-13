/*
 * Copyright 2020-2026 Hewlett Packard Enterprise Development LP
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

#include "chpl-program-registration.h"
#include <stdio.h>

//
// TODO: Figure out how to wire this up into the build pipeline.
//

static void expand_constant(const char* name) {
  printf("extern type %s_type;\n", name);
  printf("extern const %s: %s_type;\n", name, name);
  printf("info.setConstant(\'%s\', %s);\n", name, name);
}

static void expand_callback(const char* name) {
  printf("info.setCallback(\'%s\');\n", name);
}

static void print_module_code(void) {
  #define STR(x__) #x__
  #define E_CONSTANT(name__, type__) expand_constant(STR(name__));
  #define E_CALLBACK(name__) expand_callback(STR(name__));
  #include "chpl-program-data-macro-adapter.h"
  #undef STR
}

int main() {
  print_module_code();
  return 0;
}
