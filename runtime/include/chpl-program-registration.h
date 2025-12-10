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

// To get the types used internally by the macro.
#define CHPL_RT_PROGRAM_INFO_MACRO_DECLARE_ONLY
#include "chpl-program-info-macro.h"

#ifdef __cplusplus
extern "C" {
#endif

// This structure contains "data entries" which must be supplied by each
// program. Currently it is unorganized and per-locale.
typedef struct chpl_rt_program_info {
  #define E_CONSTANT(name__, type__) type__ name__ ;
  #define E_CALLBACK(name__) name__##_type name__ ;
  #include "chpl-program-info-macro.h"
  #undef E_CONSTANT
  #undef E_CALLBACK
} chpl_rt_program_info;

int chpl_rt_program_info_num_dat_entries(void);

const char** chpl_rt_program_info_dat_entry_names(void);

#ifdef __cplusplus
}
#endif

#endif // _chpl_program_registration_h_
