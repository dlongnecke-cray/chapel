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
// to either a 'char*' or a 'FILE*'(s) on this locale using 'printf'. It is
// not intended to replace Chapel's IO capabilities, and if it gets too
// bloated then we should consider trying to integrate it / replace it with
// e.g., the QIO code instead.
//
// Currently it is used to streamline some debugging output as well as the
// code which generates stack unwinds.
//

#define CHPL_RT_IOSTR_BUILTIN_BUFFER_SIZE 64
#define CHPL_RT_IOSTR_MINIMUM_INCREMENT_SIZE 256

typedef enum chpl_rt_iostr_flags {
  // If a resize occurs, use exactly the bytes needed to accomodate it.
  CHPL_RT_IOSTR_EXACT_RESIZE      = 0x00001,
  // If an operation would produce an error, crash instead of returning.
  CHPL_RT_IOSTR_CRASH_ON_ERROR    = 0x00002,
  // Do not allow a buffer resize to occur. Set an error and return instead.
  CHPL_RT_IOSTR_NO_RESIZE         = 0x00004,
  // If backed by files, flush at the end of every operation.
  CHPL_RT_IOSTR_FLUSH_OFTEN       = 0x00008
} chpl_rt_iostr_flags;

/** Represents an "IO stream" that can print to a 'char[]' or a FILE*. */
typedef struct chpl_rt_iostr {
  enum      chpl_rt_iostr_flags flags;

  char      builtin_buffer[CHPL_RT_IOSTR_BUILTIN_BUFFER_SIZE];
  bool      buffer_is_owned;
  size_t    buffer_size;
  size_t    buffer_offset;
  size_t    num_files;
  int       error_code;

  union {
    char* allocated_buffer;
    FILE** many_files;
    FILE* file;
  } as;
} chpl_rt_iostr;

/** Initialize to print to a byte array. */
chpl_rt_iostr chpl_rt_iostr_init(int32_t flags);

/** Initialize to print to a 'FILE*'. */
chpl_rt_iostr chpl_rt_iostr_init_file(FILE* file, int32_t flags);

/** Initialize to print to multiple 'FILE*'. */
chpl_rt_iostr chpl_rt_iostr_init_files(int32_t flags, size_t num_files, ...);

/** Initialize using a fixed-size buffer given by the user. Cannot resize. */
chpl_rt_iostr chpl_rt_iostr_init_using(char* buffer, size_t buffer_size,
                                       int32_t flags);

/**
  Finalizer. If 'out_allocated_buffer' is not 'NULL', then it will be set to
  a pointer containing a null-terminated, Chapel heap allocated buffer
  that the user is responsible for freeing. The buffer contains the final
  contents of the buffer backing this stream. Note that if this stream is
  backed by one or more 'FILE*', then nothing is assigned.
*/
void chpl_rt_iostr_fini(chpl_rt_iostr* st, char** out_allocated_buffer);

/** If in error state, returns a message describing the error, else NULL. */
const char* chpl_rt_iostr_error(chpl_rt_iostr* st);

/** Perform a 'printf' operation. Returns 'true' on success. */
bool chpl_rt_iostr_printf(chpl_rt_iostr* st, const char* fmt, ...);

/** Get the start of the string buffer if one exists. */
char* chpl_rt_iostr_buffer(chpl_rt_iostr* st);

/** Flush the files that are backing this 'iostr'. */
void chpl_rt_iostr_flush(chpl_rt_iostr* st);

#ifdef __cplusplus
}
#endif

#endif
