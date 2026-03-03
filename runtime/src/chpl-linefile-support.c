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
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <inttypes.h>

#include "chplrt.h"
#include "chpl-program-registration.h"
#include "chpl-thread-local-storage.h"

#include "chpl-linefile-support.h"

static const char *saved_filename;

typedef char file_buff[64];
CHPL_TLS_DECL(file_buff, unknown_file_buffer);

void chpl_rt_save_filename(chpl_program_info* prg, const char *filename) {
  saved_filename = filename;
}

const char* chpl_rt_lookup_builtin_filename_descriptor(int32_t idx) {
  if (idx >= 0) return NULL;

  switch (idx) {
    case CHPL_FILE_IDX_COMMAND_LINE:
      return "(command-line)";
    case CHPL_FILE_IDX_COMMAND_LINE_ARG:
      return "<command-line arg>";
    case CHPL_FILE_IDX_FORK_LARGE:
      return "fork large";
    case CHPL_FILE_IDX_MAIN_PROGRAM:
      return "main program";
    case CHPL_FILE_IDX_UNKNOWN:
      return "<unknown>";
    case CHPL_FILE_IDX_IDLE_TASK:
      return "|idle|";
    case CHPL_FILE_IDX_COMM_TASK:
      return "<comm task>";
    case CHPL_FILE_IDX_MAIN_TASK:
      return "<main task>";
    case CHPL_FILE_IDX_ON_BODY_TASK:
      return "on-body task";
    case CHPL_FILE_IDX_SAVED_FILENAME:
      return saved_filename;
    default: {
      char* buffer = CHPL_TLS_GET(unknown_file_buffer);
      snprintf(buffer, 48, "<unknown file idx %" PRId32 ">", idx);
      // TODO...
      // There is a possibility of the TLS buffer changing before it is
      // used (not a very good one though).
      return buffer;
    }
  }

  return NULL;
}

c_string chpl_rt_lookup_filename(chpl_program_info* prg, int32_t idx) {
  if (idx < 0) {
    return chpl_rt_lookup_builtin_filename_descriptor(idx);
  }

  CHPL_PROGRAM_DATA_TEMP(prg, chpl_filenameTableSize);
  CHPL_PROGRAM_DATA_TEMP(prg, chpl_filenameTable);

  if (idx < chpl_filenameTableSize) return chpl_filenameTable[idx];

  char* buffer = CHPL_TLS_GET(unknown_file_buffer);
  snprintf(buffer, 48, "<unknown file idx %" PRId32 ">", idx);
  return buffer;
}

