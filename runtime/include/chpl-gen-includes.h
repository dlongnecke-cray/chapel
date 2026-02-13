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

#ifndef _CHPL_GEN_INCLUDES_H_
#define _CHPL_GEN_INCLUDES_H_

// chpl-gen-includes.h
//
// Inline functions used in code generation.
//
// TODO: Check if any of these are redundant with functions in chpl-wide-ptr-fns.h.
//

#include "chpl-comm-compiler-macros.h"
#include "chpl-locale-model.h"
#include "chpl-tasks.h"
#include "chpltypes.h"

#ifdef __cplusplus
extern "C" {
#endif

//
// Call a function in the compiler-produced function table, passing it
// one argument.
//
static inline
void chpl_rt_callFtableEntryHere(chpl_program_info* prg, chpl_fn_int_t fid,
                                 void* bundle) {
  CHPL_PROGRAM_DATA_TEMP(prg, chpl_ftable);
  (*chpl_ftable[fid])(bundle);
}

// TODO (dlongnecke): This points into module code...
extern void chpl_getLocaleID(chpl_localeID_t* localeID,  int64_t _ln, int32_t _fn);

static inline
chpl_localeID_t chpl_gen_getLocaleID(void)
{
  chpl_localeID_t localeID;
  chpl_getLocaleID(&localeID, 0, 0);
  return localeID;
}

#ifdef __cplusplus
}
#endif

#endif
