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

#ifndef CHPL_RT_DEBUG_PRINT_H
#define CHPL_RT_DEBUG_PRINT_H

#include "chplrt.h"

#include "chpl-program-registration.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare to work around circular dependency.
struct chpl_program_info;
typedef struct chpl_program_info chpl_program_info;

/** Prior to comm setup just print to 'stdout'. */
void chpl_rt_debug_print_pre_comm_init(void);

/** Otherwise, print as specified by 'CHPL_RT_DEBUG_PRINT'. */
void chpl_rt_debug_print_post_comm_init(void);

/** Used as a hook to print deugging info to stdout when accessing fields. */
void* chpl_rt_program_data_debug_print_hook(int verbosity,
                                            chpl_program_info* prg,
                                            void* field_addr,
                                            const char* field_name,
                                            const char* file,
                                            const char* function,
                                            int line);

__attribute__ ((format (printf, 1, 2)))
void chpl_rt_debugf(const char* fmt, ...);

typedef struct chpl_rt_debugf_arg {
  const char* type_str;
  void* data_ptr;
} chpl_rt_debugf_arg;

void chpl_rt_debug_print_chapel_hook(chpl_program_info* prg,
                                     chpl_rt_debugf_arg* args,
                                     uint64_t num_args);

#ifdef __cplusplus
}
#endif

#endif // CHPL_RT_DEBUG_PRINT_H
