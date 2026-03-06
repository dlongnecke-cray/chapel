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

#include "chpl-iostr.h"
#include "chpl-mem.h"

#include <string.h>

static bool iostr_is_already_crashing_here = false;

typedef enum iostr_error {
  IOSTR_ERROR_NONE = 0,
  IOSTR_ERROR_BAD_FORMAT,
  IOSTR_ERROR_USER_BUFFER_OUT_OF_SPACE,
  IOSTR_ERROR_ALLOCATION_FAILED,
  IOSTR_ERROR_UNKNOWN
} iostr_error;

static const char* iostr_error_code_string(iostr_error e) {
  switch (e) {
    case IOSTR_ERROR_NONE:
      return NULL;
    case IOSTR_ERROR_BAD_FORMAT:
      return "an invalid format string was provided";
    case IOSTR_ERROR_USER_BUFFER_OUT_OF_SPACE:
      return "the user-provided buffer ran out of space";
    case IOSTR_ERROR_ALLOCATION_FAILED:
      return "memory allocation failed";
    case IOSTR_ERROR_UNKNOWN:
      return "an unknown error occurred";
    default: break;
  }

  assert(0 && "Not handled!");
  return NULL;
}

// Returns 'true' if an error was set.
static bool iostr_set_error(chpl_rt_iostr* st, iostr_error e) {
  if (e == IOSTR_ERROR_NONE) return false;

  // Set the error code so that the user can see it.
  st->error_code = e;

  // Crash if we need to and aren't already crashing.
  if (st->flags & CHPL_RT_IOSTR_CRASH_ON_ERROR) {
    if (!iostr_is_already_crashing_here) {
      iostr_is_already_crashing_here = true;
      const char* desc = iostr_error_code_string(e);
      chpl_internal_error(desc);
    }
  }

  return true;
}

static iostr_error
iostr_check_for_flag_conflicts(chpl_rt_iostr_flags flags) {
  return IOSTR_ERROR_NONE;
}

static void iostr_init_common(chpl_rt_iostr* st,
                              FILE* file,
                              char* buffer,
                              size_t buffer_size,
                              int32_t flags) {
  iostr_error err = iostr_check_for_flag_conflicts(flags);

  // Set flags so that 'CRASH_ON_ERROR' will be respected if set.
  st->flags = flags;

  // Exit (or crash) if there was a flag conflict.
  if (iostr_set_error(st, err)) return;

  // Clear the memory. Vital to make sure most things are '0'/'false'.
  memset(st, 0, sizeof(*st));

  // Configure the initial state.
  st->flags = flags;
  st->buffer_is_owned = (buffer == NULL && file == NULL);
  st->buffer_size = CHPL_RT_IOSTR_BUILTIN_BUFFER_SIZE;
  st->is_using_file = file != NULL;

  if (st->buffer_is_owned) {
    st->buffer_increment_size = CHPL_RT_IOSTR_DEFAULT_BUFFER_INCREMENT_SIZE;
    st->buffer_size = CHPL_RT_IOSTR_BUILTIN_BUFFER_SIZE;

  } else if (st->is_using_file) {
    st->as.file = file;

  } else {
    // On this path the increment size is '0' since we don't own it.
    st->buffer_size = buffer_size;
    st->as.allocated_buffer = buffer;
  }
}

chpl_rt_iostr chpl_rt_iostr_init(int32_t flags) {
  chpl_rt_iostr ret;
  FILE* file = NULL;
  char* buffer = NULL;
  size_t buffer_size = 0;
  iostr_init_common(&ret, file, buffer, buffer_size, flags);
  return ret;
}

chpl_rt_iostr chpl_rt_iostr_init_file(FILE* file, int32_t flags) {
  chpl_rt_iostr ret;
  char* buffer = NULL;
  size_t buffer_size = 0;
  iostr_init_common(&ret, file, buffer, buffer_size, flags);
  return ret;
}

chpl_rt_iostr
chpl_rt_iostr_init_using(char* buffer, size_t buffer_size,
                         int32_t flags) {
  chpl_rt_iostr ret;
  FILE* file = NULL;
  iostr_init_common(&ret, file, buffer, buffer_size, flags);
  return ret;
}

inline static bool iostr_buffer_is_allocated(chpl_rt_iostr* st) {
  return !st->is_using_file && st->as.allocated_buffer != NULL;
}

inline static char* iostr_buffer_at_start(chpl_rt_iostr* st) {
  if (st->is_using_file) return NULL;
  if (st->as.allocated_buffer != NULL) return st->as.allocated_buffer;
  return &st->builtin_buffer[0];
}

static char*
iostr_buffer_at_offset(chpl_rt_iostr* st, size_t* out_buffer_space_left) {
  if (st->is_using_file) return NULL;

  char* start = iostr_buffer_at_start(st);
  char* ret = start + st->buffer_offset;

  if (out_buffer_space_left) {
    size_t space_left = st->buffer_size - st->buffer_offset;
    *out_buffer_space_left = space_left;
  }

  return ret;
}

void chpl_rt_iostr_fini(chpl_rt_iostr* st, char** out_allocated_buffer) {
  if (out_allocated_buffer != NULL) {
    // We need to release an allocated buffer to the user.
    char* buffer = iostr_buffer_at_start(st);

    if (!iostr_buffer_is_allocated(st)) {
      // On the slow path we have to heap copy the internal buffer.

      size_t new_size = st->buffer_offset + 1;
      chpl_mem_descInt_t dsc = CHPL_RT_MD_STR_COPY_DATA;
      char* new_buffer = chpl_mem_alloc(new_size, dsc, 0, 0);

      if (new_buffer != NULL) {
        strncpy(new_buffer, buffer, st->buffer_offset);
      }

      // Now we have something allocated.
      buffer = new_buffer;
    }

    // Make sure to actually set the buffer pointer.
    *out_allocated_buffer = buffer;

  } else if (iostr_buffer_is_allocated(st)) {
    // Otherwise just free the allocated buffer if needed.
    chpl_mem_free(st->as.allocated_buffer, 0, 0);
  }
}

const char* chpl_rt_iostr_error(chpl_rt_iostr* st) {
  if (st->error_code != 0) {
    iostr_error e = (iostr_error) st->error_code;
    return iostr_error_code_string(e);
  }

  return NULL;
}

typedef enum iostr_op {
  IOSTR_OP_PRINTF
} iostr_op;

// Returns 'true' if resizing succeeded.
static bool iostr_resize_buffer(chpl_rt_iostr* st, size_t additional) {
  bool truncate = st->flags & CHPL_RT_IOSTR_EXACT_RESIZE;

  if (!st->buffer_is_owned) {
    // We ran out of space, but we can't resize the caller's buffer. Exit.
    iostr_set_error(st, IOSTR_ERROR_USER_BUFFER_OUT_OF_SPACE);
    return false;
  }

  size_t old_buffer_size = st->buffer_size;
  size_t new_buffer_size = 0;
  size_t minimum_new_size = old_buffer_size + additional;

  if (truncate) {
    new_buffer_size = minimum_new_size;

  } else if (additional < st->buffer_increment_size) {
    new_buffer_size = st->buffer_size + st->buffer_increment_size;
  } else {
    // TODO: Could use all sorts of resize strategies here.
    new_buffer_size = minimum_new_size;
  }

  assert(new_buffer_size > old_buffer_size &&
         new_buffer_size >= minimum_new_size);

  bool is_allocated = iostr_buffer_is_allocated(st);
  chpl_mem_descInt_t dsc = CHPL_RT_MD_STR_COPY_DATA;
  char* old_buffer = iostr_buffer_at_start(st);
  char* new_buffer = NULL;

  if (!is_allocated) {
    new_buffer = chpl_mem_alloc(new_buffer_size, dsc, 0, 0);
    strncpy(new_buffer, old_buffer, old_buffer_size);

  } else {
    new_buffer = chpl_mem_realloc(old_buffer, new_buffer_size, dsc, 0, 0);
  }

  if (new_buffer == NULL) {
    iostr_set_error(st, IOSTR_ERROR_ALLOCATION_FAILED);
    return false; 
  }

  st->as.allocated_buffer = new_buffer;
  st->buffer_size = new_buffer_size;

  return true;
}

static bool iostr_vfmt_buffer_printf(chpl_rt_iostr* st,
                                     const char* fmt,
                                     va_list vl,
                                     bool* out_cleanup_vl) {
  size_t buffer_space_left = 0;
  char* buffer_cursor = NULL;
  bool ok = false;
  int n = 0;

  do {
    // Must copy the 'va_list' in case 'snprintf' fails.
    va_list vl_copy;
    va_copy(vl_copy, vl);

    // And thus we never use the original list.
    *out_cleanup_vl = true;

    buffer_cursor = iostr_buffer_at_offset(st, &buffer_space_left);

    n = vsnprintf(buffer_cursor, buffer_space_left, fmt, vl_copy);
    if (n < 0) {
      // A code < 0 indicates a problem with the format.
      iostr_set_error(st, IOSTR_ERROR_BAD_FORMAT);
      return false;
    }

    // Make sure to add '1' as 'n' does not include the null terminator.
    size_t num_bytes = (size_t) n + 1;
    bool need_resize = num_bytes > buffer_space_left;

    if (need_resize) {
      // Calculate the additional bytes we need (at least one).
      size_t additional = num_bytes - buffer_space_left;

      // Try to resize and exit if we fail.
      if (!iostr_resize_buffer(st, additional)) return false;

    } else {
      // Bump the offset to overwrite the null terminator next time.
      st->buffer_offset += n;
      ok = true;
    }

  } while (!ok);

  // Assume the operation succeeded if we get here.
  return true;
}

static bool iostr_vfmt_buffer_ops(chpl_rt_iostr* st, iostr_op op,
                                  const char* fmt,
                                  va_list vl,
                                  bool* out_cleanup_vl) {
  switch (op) {
    case IOSTR_OP_PRINTF:
      return iostr_vfmt_buffer_printf(st, fmt, vl, out_cleanup_vl);
  }

  assert(0 && "Should never reach here!");
  return false;
}

static bool iostr_vfmt_file_ops(chpl_rt_iostr* st, iostr_op op,
                                const char* fmt,
                                va_list vl,
                                bool* out_cleanup_vl) {
  switch (op) {
    case IOSTR_OP_PRINTF: {
      int n = vfprintf(st->as.file, fmt, vl);
      if (n < 0) {
        iostr_set_error(st, IOSTR_ERROR_BAD_FORMAT);
        return false;
      }
    } break;
  }

  // No need to clean up, list was consumed.
  *out_cleanup_vl = false;

  // Assume the operation succeeded if we get here.
  return true;
}

static bool iostr_vfmt_ops(chpl_rt_iostr* st, iostr_op op,
                           const char* fmt,
                           va_list vl) {
  if (st->error_code != 0) {
    va_end(vl);
    return false;
  }

  bool cleanup_vl = false;
  bool ret = false;

  if (st->is_using_file) {
    ret = iostr_vfmt_file_ops(st, op, fmt, vl, &cleanup_vl);
  } else {
    ret = iostr_vfmt_buffer_ops(st, op, fmt, vl, &cleanup_vl);
  }

  if (cleanup_vl) va_end(vl);

  return ret;
}

bool chpl_rt_iostr_printf(chpl_rt_iostr* st, const char* fmt, ...) {
  va_list vl;
  va_start(vl, fmt);
  return iostr_vfmt_ops(st, IOSTR_OP_PRINTF, fmt, vl);
}
