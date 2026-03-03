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

#ifndef _chpl_linefile_support_h_
#define _chpl_linefile_support_h_

#include "chpltypes.h"
#include "chpl-program-registration.h"

// NOTE: This is a weird header that exists so that it can also be used in
//       the compiler code?! As in the actual compiler code, not generated
//       code. IMO we should stop doing that and simplify the compiler's
//       responsibility here.
// TODO: Get rid of this.
#include "fileinfo/chpl-linefile-defs.h"

#ifdef __cplusplus
extern "C" {
#endif

// This function stores the passed in char*, and subsequent calls to
// chpl_rt_lookup_filename(CHPL_FILE_IDX_SAVED_FILENAME) will return the
// pointer. CHPL_FILE_IDX_SAVED_FILENAME may only be used while the original
// filename pointer is still valid.  This was added to support reporting
// errors in a user-supplied file for config vars.
//
// TODO: This will have to do something different, e.g., write-back to
//       per-program memory.
void chpl_rt_save_filename(chpl_program_info* prg, const char* filename);

const char* chpl_rt_lookup_filename(chpl_program_info* prg, int32_t idx);

const char* chpl_rt_lookup_builtin_filename_descriptor(int32_t idx);

#ifdef __cplusplus
}
#endif

#endif // _chpl_linefile_support_h_
