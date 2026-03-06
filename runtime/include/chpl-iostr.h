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

#ifndef CHPL_RT_IOSTR_H
#define CHPL_RT_IOSTR_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// This header provides a type which can be used as a unified way to print
// to either a 'char*' or a 'FILE*' on this locale using 'printf'. It is
// not intended to replace Chapel's IO capabilities, and if it gets too
// bloated then we should consider trying to integrate it / replace it with
// e.g., the QIO code instead.
//
// This type is currently write-only at the moment and doesn't check for
// permissions bits on supplied files/buffers, but that can be added... 
//
#define CHPL_RT_IOSTR_BUILTIN_BUFFER_SIZE 128
#define CHPL_RT_IOSTR_DEFAULT_BUFFER_INCREMENT_SIZE 256

typedef enum chpl_rt_iostr_flags {
  CHPL_RT_IOSTR_EXACT_RESIZE      = 0x00001,
  CHPL_RT_IOSTR_CRASH_ON_ERROR    = 0x00002,
} chpl_rt_iostr_flags;

typedef struct chpl_rt_iostr {
  enum      chpl_rt_iostr_flags flags;

  char      builtin_buffer[CHPL_RT_IOSTR_BUILTIN_BUFFER_SIZE];
  bool      buffer_is_owned;
  size_t    buffer_increment_size;
  size_t    buffer_size;
  size_t    buffer_offset;
  bool      is_using_file;
  int       error_code;

  union {
    char* allocated_buffer;
    FILE* file;
  } as;
} chpl_rt_iostr;

chpl_rt_iostr chpl_rt_iostr_init(int32_t flags);

chpl_rt_iostr chpl_rt_iostr_init_file(FILE* file, int32_t flags);

chpl_rt_iostr
chpl_rt_iostr_init_using(char* buffer, size_t buffer_size,
                         int32_t flags);

// Finalizer. If 'out_allocated_buffer' is not NULL, then it will be set to
// a pointer containing a null-terminated, Chapel heap allocated buffer
// that the user is responsible for freeing.
void chpl_rt_iostr_fini(chpl_rt_iostr* st, char** out_allocated_buffer);

// If in an error state, returns a message describing the error, else NULL.
const char* chpl_rt_iostr_error(chpl_rt_iostr* st);

// Perform a 'printf' operation. Returns 'true' on success.
bool chpl_rt_iostr_printf(chpl_rt_iostr* st, const char* fmt, ...);

#ifdef __cplusplus
}
#endif

#endif
