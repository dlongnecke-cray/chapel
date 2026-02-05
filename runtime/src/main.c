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

#include "chplrt.h"
#include "chpl_rt_utils_static.h"
#include "chpl-init.h"
#include "chpl-program-registration.h"
#include "chplexit.h"
#include "config.h"

// Defined in the modules. It's OK to declare it, we will link against it.
extern chpl_program_info* chpl_prepareProgramInfoHere(void);

int main(int argc, char* argv[]) {
  // Initialize the program info so the runtime can see the program data.
  chpl_program_info* prg = chpl_prepareProgramInfoHere();

  int registered = chpl_program_register_root_here(prg);
  if (!registered) {
    // Should never fire. TODO: Can we call something besides C exit here?
    fprintf(stderr, "%s: failed to prepare program data", argv[0]);
    exit(1);
  }

  //
  // TODO (dlongnecke): Split out setting up main from actually running main,
  //                    and move setup into modules and make it idempotent.
  //                    Also, 'main' should not be dynamically loadable, or
  //                    if it is we need to make it aware of setup...
  //

  // Initialize the runtime
  chpl_rt_init(argc, argv);

  // Run the main function for this node.
  chpl_rt_task_startMainTask(chpl_executable_init);

  // have everyone exit, returning the value returned by the user written main
  // or 0 if it didn't return anything
  chpl_exit_all(chpl_gen_main_arg.return_value);

  return 0; // should never get here
}
