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
#include "chpl-dynamic-loading.h"
#include "chpl-program-registration.h"
#include <string.h>

static chpl_program_info* chpl_prg_root;

#ifndef CHPL_RT_IS_BUILT_AS_DYNAMIC_LIBRARY
  int chpl_rt_is_dynamic_library = 0;
#else
  int chpl_rt_is_dynamic_library = 1;
#endif

//
// HIDDEN SYMBOLS W/ GLOBAL EXTERN LINKAGE
// (Available for module code to call but not exposed in the header file.)
//

/** Define setters that module code can call to set up program data. */
#define CONCAT(a__, b__) a__##b__
#define PREFIX chpl_program_info_data_entry_set_
#define SETTER(prefix__, name__)                                              \
  void CONCAT(prefix__, name__)(chpl_program_info* info, const void* data) {  \
    memcpy(&info->data.name__, data, sizeof(name__##_type));                  \
  }
#define E_CONSTANT(name__, type__) SETTER(PREFIX, name__)
#define E_CALLBACK(name__) SETTER(PREFIX, name__)
#include "chpl-program-data-macro-adapter.h"
#undef PREFIX
#undef SETTER
#undef CONCAT

chpl_prg_id
chpl_program_register_here_nosync(chpl_prg_id id, chpl_program_info* prg) {
  chpl_prg_id ret = CHPL_PROGRAM_NULL_ID;

  // ERROR: The root program hasn't even been set yet...
  if (chpl_prg_root == NULL) return ret;

  // ERROR: This ID is reserved...
  if (id == CHPL_PROGRAM_ROOT_ID) return ret;

  int requestingNewIdx = (id == CHPL_PROGRAM_NULL_ID);
  int64_t idxToUse = requestingNewIdx ? 0 : ((int64_t) id);
  int64_t got = chpl_rootPrgMapPtrToIdxHere(prg, idxToUse);

  if (!requestingNewIdx && idxToUse != got) {
    // TODO...
    chpl_error("Failed to map index!\n", 0, 0);
  }

  ret = (chpl_prg_id) got;

  return ret;
}

int chpl_program_register_root_here(chpl_program_info* prg) {
  if (chpl_prg_root == NULL) {
    chpl_prg_root = prg;
    prg->id = CHPL_PROGRAM_ROOT_ID;
    return 1;
  }

  return 0;
}

//
// HEADER-DECLARED SYMBOLS
// (Available for both module code and runtime code to call.)
//

chpl_program_info* chpl_program_info_from_id_here(chpl_prg_id id) {
  if (id == CHPL_PROGRAM_NULL_ID) return NULL;
  if (id == CHPL_PROGRAM_ROOT_ID) return chpl_prg_root;

  // TODO...
  abort();

  return NULL;
}

chpl_prg_id chpl_program_info_id(const chpl_program_info* prg) {
  return prg ? prg->id : CHPL_PROGRAM_NULL_ID;
}

int chpl_program_info_num_data_entries(void) {
  int ret = 0;
  #define E_CONSTANT(name__, type__) ret += 1;
  #define E_CALLBACK(name__) ret += 1;
  #include "chpl-program-data-macro-adapter.h"
  return ret;
}

static int debug_is_hotspot(const char* function, const char* field_name) {
  if (!strcmp(function, "chpl_cache_enabled")) return 1;
  return 0;
}

void* chpl_program_data_debug_hook(int verbosity, chpl_program_info* prg,
                                   void* field_addr,
                                   const char* field_name,
                                   const char* file,
                                   const char* function,
                                   int line) {
  // Just return the field address, it will be deref'd and used like normal.
  void* ret = field_addr;

  // Nothing to do, could have another hook to run later.
  if (verbosity <= 0) return ret;

  int do_print = (verbosity == 1 && !debug_is_hotspot(function, field_name)) ||
                 (verbosity == 2);

  if (do_print) {
    printf("[%s in %s:%d] P%" PRIu64 ": %s\n",
           function, file, line, prg->id, field_name);
  }

  return ret;
}
