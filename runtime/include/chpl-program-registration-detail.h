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

#ifndef CHPL_PROGRAM_REGISTRATION_DETAIL_H
#define CHPL_PROGRAM_REGISTRATION_DETAIL_H

#include "chpl-program-registration.h"

//
// This file contains "private" symbols that are only meant for use by the
// module code when wiring up program info and registering dynamically
// loaded programs.
//

#ifdef __cplusplus
extern "C" {
#endif

/** Define setters that module code can call to set up program data. */
#define CONCAT(a__, b__) a__##b__
#define PREFIX chpl_program_info_data_entry_set_
#define SETTER(prefix__, name__) \
  void CONCAT(prefix__, name__)(chpl_program_info* info, const void* data);
#define E_CONSTANT(name__, type__) SETTER(PREFIX, name__)
#define E_CALLBACK(name__) SETTER(PREFIX, name__)
#include "chpl-program-data-macro-adapter.h"
#undef PREFIX
#undef SETTER
#undef CONCAT

/** Call to register a new dynamically loaded Chapel program here. If the
    passed program ID is 'null' then the implementation will assign a new
    unique ID. Otherwise it will use the ID that is passed in.

    Only the pointer will be stored - it is assumed that the pointer points
    to memory that exists for the entire duration of the loaded program. The
    passed in pointer is also assumed to point to writeable memory. */
chpl_prg_id
chpl_program_register_here_nosync(chpl_prg_id id, chpl_program_info* prg);

/** Call to register the root program here. */
void chpl_program_register_root_here(chpl_program_info* prg);

#ifdef __cplusplus
}
#endif

#endif // CHPL_PROGRAM_REGISTRATION_DETAIL_H
