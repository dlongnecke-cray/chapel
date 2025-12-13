/*
 * Copyright 2020-2025 Hewlett Packard Enterprise Development LP
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

#ifndef _chpl_program_registration_h_
#define _chpl_program_registration_h_

#include "chpl-program-data-macro-includes.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
  This file contains an interface to access critical pieces of data that the
  runtime requires from compiled Chapel programs. This includes data such as
  a program's function table or its broadcast constants table. It also
  includes constants such the value of 'CHPL_HOME' that the program was
  compiled with such as 'CHPL_COMM' or the value of other compiler flags.

  The runtime no longer references these symbols in a compiled Chapel program
  directly (they are not linked against). Instead it references values from a
  'chpl_program_info' struct which must be filled in by each Chapel program
  that is loaded onto a locale.

  ---

  The 'root' Chapel program is the program that is first loaded into the
  process space on each locale and first initializes the runtime. It has a
  special identifier and can be used to maintain state in module code that you
  would like all loaded Chapel programs to use (e.g., privatized hashtables
  for pointers or other state).

  The root program is assumed to have an infinite lifetime - that is, it is
  alive for as long as the current process is executing. All other programs
  are introduced dynamically via dynamic loading, and it is possible for
  their state to be unloaded at any point during process execution.

  ---

  If you have a constant or a callback defined in module code that you need
  to access in the runtime, you can add it to "chpl-program-data-macro.h"
  using the format that is described in that file.

  Then, within a runtime function, you can access the value on the current
  locale by writing (e.g., for a data named 'foo'):

  CHPL_PROGRAM_DATA_TEMP(prg_id, foo);

  This will declare a temporary in the current scope with the name 'foo' that
  has the C type for the constant.

  If for some reason there is a name collision, you can get the value of the
  constant without declaring a variable with the name 'foo' (assume here
  that 'foo' has the type 'int') via:

  int bar = CHPL_PROGRAM_DATA(prg_id, foo);

  Do not declare global variables with values retrieved from these functions.
  They are only valid on the currently executing locale during the lifetime
  of the executing function. Multiple Chapel programs can be loaded into a
  single process space and the values they contain for these constants can
  differ.

  ---

  TODO (dlongnecke): We can provide default-implementations of certain
                     callbacks such as for the QIO functions in order
                     to be used for unit testing.
*/

#define CHPL_PROGRAM_NULL   (0)
#define CHPL_PROGRAM_ROOT   (1)

// The type of a unique program identifier. These are assigned by the runtime
// as it registers Chapel programs. The first Chapel program (that initial-
// izes the runtime) will have the special ID 'CHPL_PROGRAM_ROOT'.
//
// TODO (chpl_library_init) will also need to be owned by the module code so
// that we can make sure that it takes care of assigning that Chapel program
// the root ID. Or you need to do a callback.
typedef uint64_t chpl_prg_id;

#define CHPL_PROGRAM(prg__) (chpl_program_info_here(prg__))

#define CHPL_PROGRAM_DATA(prg__, data_name__) \
  (CHPL_PROGRAM(prg__)->data.data_name__)

// Declares a local that is a copy of a program data, with the same name.
#define CHPL_PROGRAM_DATA_TEMP(prg__, data_name__) \
  data_name__##_type data_name__ = CHPL_PROGRAM_DATA(prg__, data_name__)

// This structure contains "data entries" which must be supplied by each
// compiled Chapel program. Currently it is unorganized and per-locale.
typedef struct chpl_program_info {
  struct chpl_program_data {
    #define E_CONSTANT(name__, type__) type__ name__ ;
    #define E_CALLBACK(name__) name__##_type name__ ;
    #include "chpl-program-data-macro.h"
    #undef E_CONSTANT
    #undef E_CALLBACK
  } data;

} chpl_program_info;

int chpl_program_info_num_dat_entries(void);

const char** chpl_program_info_dat_entry_names(void);

// TODO: Use this to register the info for the current locale...
chpl_prg_id
chpl_program_register_here(chpl_prg_id prg, chpl_program_info* info);

// TODO: Use this in hooks to get the info for the current locale...
chpl_program_info* chpl_program_info_here(chpl_prg_id prg);

// TODO: Where the heck does this live (i.e., launcher or us?). It was
//       declared in 'chplcgfns.h', but clearly that's not correct as
//       it is not code-generated (and that header is going away).
extern char* chpl_executionCommand;

#ifdef __cplusplus
}
#endif

#endif // _chpl_program_registration_h_
