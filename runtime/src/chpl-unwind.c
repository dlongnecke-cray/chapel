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

// Needed for 'dladdr'.
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "chplrt.h"
#include "chpl-linefile-support.h"
#include "chpl-program-registration.h"

#include "error.h"
#include "chplexit.h"
#include "chpl-mem.h"
#include "chpl-env.h"
#include "chpl-exec.h"

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#ifndef LAUNCHER
#include "chpl-atomics.h"
#ifdef CHPL_DO_UNWIND
#define CHPL_UNWIND_NOT_LAUNCHER
#endif
#endif

// #define DEBUG
#ifdef DEBUG
#define DEBUG_PRINT(x) printf x
#endif
#ifndef DEBUG
#define DEBUG_PRINT(x) do {} while (0)
#endif

#ifdef CHPL_UNWIND_NOT_LAUNCHER
// Necessary for instruct libunwind to use only the local unwind
#define UNW_LOCAL_ONLY
#include <libunwind.h>
#include <dlfcn.h>

static void*
stack_unwind_get_cursor_addr(unw_cursor_t* cursor, unw_word_t ip_offset) {
  unw_proc_info_t info;
  unw_get_proc_info(cursor, &info);
  void* ret = (void *)(info.start_ip + ip_offset);
  return ret;
}

static chpl_program_info*
stack_unwind_get_program_info(unw_cursor_t* cursor, unw_word_t ip_offset) {
  void* addr = stack_unwind_get_cursor_addr(cursor, ip_offset);
  chpl_program_info* (*prg_info_callback)(void) = NULL;
  void* dl_handle = NULL;
  Dl_info info;
  int ecode = 0;

  // TODO: Note that 'dladdr' is NOT portable! If we run into a situation
  //       where it is not supported, we will have to think of a different
  //       strategy, here...
  // NOTE: But it is portable under POSIX 2024 :D.
  ecode = dladdr(addr, &info);

  // Error or no path, so exit early. On success, 'dladdr' returns non-zero.
  if (ecode == 0 || info.dli_fname == NULL) return NULL;

  // As a first step, see if the load path for this code object matches
  // the load path of the root Chapel program. The root program will be an
  // executable, so it may not even have a symbol table (relied on below).
  const char* load_path = chpl_program_info_load_path(CHPL_PROGRAM_ROOT);

  if (load_path && !strcmp(info.dli_fname, load_path)) {
    return CHPL_PROGRAM_ROOT;
  }

  // Try to 'dlopen' the code object's path if we can.
  dl_handle = dlopen(info.dli_fname, RTLD_NOLOAD | RTLD_LAZY);
  if (dl_handle == NULL) return NULL;

  // Search for this, if we find it, we've got a dynamic Chapel object.
  prg_info_callback = dlsym(dl_handle, "chpl_prepareProgramInfoHere");

  // Done with handle, so close it. The program should not be unloaded.
  // TODO: What to do with potential error?
  dlclose(dl_handle);

  // Not found. Must be a foreign program, so bail out.
  if (prg_info_callback == NULL) return NULL;

  chpl_program_info* ret = prg_info_callback();

  // If the ID is set, it's a valid info, so return it.
  if (ret->id != CHPL_PROGRAM_NULL_ID) return ret;

  return NULL;
}

#ifdef __linux__
// We create a pipe with 'addr2line' and try to get a line number
static int stack_unwind_refine_get_line_num(chpl_program_info* prg,
                                            void *addr) {
  CHPL_PROGRAM_DATA_TEMP(prg, CHPL_LLVM_BIN_DIR);
  int rc;
  Dl_info info;
  intptr_t relativeAddr;
  char buf[2048];
  char output[2048];
  int i = 0;
  int line;
  char* bufPtr;
  ssize_t path_len;

  // We use a little shell script for avoiding the case in which
  // addr2line isn't present.
  // We try the following commands in order. llvm-addr2line is preferred
  // since it woks betters with LLVM/clang and also works with gnu
  // but, llvm-addr2line might not be present, in which case we try
  // llvm-symbolizer (llvm-addr2line is a symlink to llvm-symbolizer anyways).
  // https://llvm.org/docs/CommandGuide/llvm-addr2line.html
  // 1. CHPL_LLVM_BIN_DIR/llvm-addr2line
  // 2. CHPL_LLVM_BIN_DIR/llvm-symbolizer
  // 3. llvm-addr2line
  // 4. llvm-symbolizer
  // 5. addr2line

  const char* script =
    "my_addr2line() { "
    "addr2line_cmd=$1/llvm-addr2line; shift; addr2line_args= ; "
    "if ! command -v $addr2line_cmd >/dev/null 2>&1; then "
      "addr2line_cmd=$1/llvm-symbolizer; "
      "addr2line_args='--functions=none --no-demangle --output-style=GNU'; "
      "if ! command -v $addr2line_cmd >/dev/null 2>&1; then "
        "addr2line_cmd=llvm-addr2line; addr2line_args= ; "
        "if ! command -v $addr2line_cmd >/dev/null 2>&1; then "
          "addr2line_cmd=llvm-symbolizer; "
          "addr2line_args='--functions=none --no-demangle --output-style=GNU'; "
          "if ! command -v $addr2line_cmd >/dev/null 2>&1; then "
            "addr2line_cmd=addr2line; addr2line_args= ; "
            "if ! command -v $addr2line_cmd >/dev/null 2>&1; then "
              "addr2line_cmd= ; addr2line_args= ; "
            "fi; "
          "fi; "
        "fi; "
      "fi; "
    "fi; "
    "if [ -n \"$addr2line_cmd\" ]; then "
      "$addr2line_cmd $addr2line_args -e $@ ; "
    "fi } ; my_addr2line "
    ;
  // then CHPL_LLVM_BIN_DIR
  // then space
  // then the path
  // then space
  // then the address

  int scriptLen = strlen(script);
  int llvmBinDirLen = strlen(CHPL_LLVM_BIN_DIR);

  // Start the buffer out with the script + CHPL_LLVM_BIN_DIR + space
  assert(sizeof(buf) > scriptLen);
  memcpy(buf, script, scriptLen);
  if (llvmBinDirLen+1 >= sizeof(buf)-scriptLen)
    return 0; // not enough room in buffer - give up
  memcpy(&buf[scriptLen], CHPL_LLVM_BIN_DIR, llvmBinDirLen);
  memcpy(&buf[scriptLen+llvmBinDirLen], " ", 1);
  i = scriptLen + llvmBinDirLen + 1;

  // Compute the object containing the address
  rc = dladdr(addr, &info);
  if (rc == 0)
    return 0; // dladdr failed.

  // Compute the relative address within the object
  relativeAddr = (intptr_t)addr - (intptr_t)info.dli_fbase;

  // Compute the path to the file containing the object
  if (info.dli_fname != NULL && info.dli_fname[0] != '\0') {
    // use the path from dladdr
    path_len = strlen(info.dli_fname);
    if (i+path_len >= sizeof(buf))
      return 0; // not enough room in buffer - give up
    memcpy(&buf[i], info.dli_fname, path_len);
  } else {
    // Try using the file path from the current executable
    path_len = readlink("/proc/self/exe", &buf[i], sizeof(buf)-i);
    if (path_len >= sizeof(buf)-i)
      return 0; // truncation occurred - give up.
    if (path_len == -1)
      return 0; // readlink returned error - give up.
  }
  i += path_len;

  // Attempt to invoke addr2line with the relative address
  rc = snprintf(&buf[i], sizeof(buf)-i, " %p", (void*)relativeAddr);
  if (rc+1 >= sizeof(buf)-i)
    return 0; // command too long for buffer - give up

  if (!chpl_get_command_output(buf, output, sizeof(output)))
    return 0;

  for (bufPtr = output; *bufPtr++ != ':';) { }
  line = atoi(bufPtr);
  if (line != 0)
    return line;

  // addr2line on a relative address didn't work, try an absolute address
  rc = snprintf(&buf[i], sizeof(buf)-i, " %p", addr);
  if (rc+1 >= sizeof(buf)-i)
    return 0; // command too long for buffer - give up

  if (!chpl_get_command_output(buf, output, sizeof(output)))
    return 0;

  for (bufPtr = output; *bufPtr++ != ':';) { }
  line = atoi(bufPtr);
  return line;
}
#elif defined __APPLE__
// invoke atos to get line number information
static int chpl_rt_unwind_refine_get_line_num(chpl_program_info* prg,
                                              void *addr) {
  char buf[2048];
  int rc;

  // atos -o EXECUTABLE_PATH -offset REL_ADDRESS
  // Compute the object containing the address
  Dl_info info;
  rc = dladdr(addr, &info);
  if (rc == 0)
    return 0; // dladdr failed.

  // Compute the relative address within the object
  intptr_t relativeAddr = (intptr_t)addr - (intptr_t)info.dli_fbase;

  // Compute the path to the file containing the object
  if (info.dli_fname != NULL && info.dli_fname[0] != '\0') {
    // use the path from dladdr to construct atos cmd
    rc = snprintf(buf, sizeof(buf),
                  "atos -o %s --fullPath -offset %p",
                  info.dli_fname, (void*)relativeAddr);
    if (rc+1 >= sizeof(buf))
      return 0; // command too long for buffer - give up
  } else {
    // we failed to get the file name
    // TODO: we could maybe invoke atos with getpid?
    return 0;
  }

  if (!chpl_get_command_output(buf, buf, sizeof(buf)))
    return 0;

  // format is '<FN_NAME> (in <REL_EXEC_NAME>) (<FILENAME>:<LINENUME>)
  // search from the end of the string backwards for ':'
  char* bufPtr = buf + strlen(buf) - 1;
  while (bufPtr > buf && *bufPtr != ':') { bufPtr--; }
  if (bufPtr == buf)
    return 0; // didn't find ':' - give up
  bufPtr++; // move past ':'

  int line = atoi(bufPtr);
  return line;
}
#else
static int stack_unwind_refine_get_line_num(chpl_program_info* prg,
                                            void *addr) {
  // Not implemented on this platform
  return 0;
}
#endif

static unsigned int stack_unwind_get_line_num(chpl_program_info* prg,
                                              unw_cursor_t* cursor,
                                              unw_word_t ip_offset,
                                              int table_idx) {
  CHPL_PROGRAM_DATA_TEMP(prg, chpl_filenumSymTable);

  unsigned int line = chpl_filenumSymTable[table_idx + 1];

  void* addr = stack_unwind_get_cursor_addr(cursor, ip_offset);
  unsigned int line_tmp = stack_unwind_refine_get_line_num(prg, addr);
  if (line_tmp != 0) line = line_tmp;

  return line;
}

// bufsz is the allocate size of the buffer
// strsz is the number of bytes in the buffer currently used
// str is the buffer
// append is a 0-terminated string to append
static void append_to_string(size_t* bufszArg, size_t* strszArg, char** strArg,
                             const char* append) {
  size_t toadd = strlen(append);
  size_t bufsz = *bufszArg;
  size_t strsz = *strszArg;
  char* str = *strArg;

  // allocate/reallocate the buffer if necessary
  if (str == NULL) {
    bufsz = 128 + toadd;
    str = chpl_mem_alloc(bufsz, CHPL_RT_MD_IO_BUFFER, __LINE__, 0);
    strsz = 0;
  } else if (strsz + toadd + 1 > bufsz) {
    bufsz = 2*bufsz + strsz + toadd;
    str = chpl_mem_realloc(str, bufsz, CHPL_RT_MD_IO_BUFFER, __LINE__, 0);
  }
  strncpy(str + strsz, append, toadd);
  strsz += toadd;

  *bufszArg = bufsz;
  *strszArg = strsz;
  *strArg = str;
}

enum stack_unwind_mode {
  STACK_UNWIND_MODE_FILE,
  STACK_UNWIND_MODE_STRING
};

#define STACK_UNWIND_MAX_SYMBOL_LENGTH 1023
#define STACK_UNWIND_MAX_LINE_NUMBER_LENGTH 127

typedef struct stack_unwind_state {
  bool print_all_frames;
  bool any_programs_loaded;
  bool has_printed_header;
  enum stack_unwind_mode mode;
  int64_t num_stack_frames;

  // Pointer to output, interpreted based on 'mode'.
  void* out;

  // These are used to manage the stack traversal.
  unw_context_t uc;           // Must only initialized once.
  unw_cursor_t cursor;        // Can be assigned to "reset" traversal.
  unw_word_t ip_offset;       // Offset of instruction pointer.
  int64_t printed_frame_num;  // Number of current _printed_ frame.

  // Symbol name buffer.
  char symbol_buffer[STACK_UNWIND_MAX_SYMBOL_LENGTH + 1];

  // Set if the symbol has an associated program.
  chpl_program_info* prg;
  const char* chapel_program_path;

  // Information fron the Chapel program. Invalid if 'prg' is not set.
  // Otherwise a symbol was found if 'chapel_symbol_name' is not NULL.
  const char* chapel_symbol_name;
  int32_t chapel_file_idx;
  const char* chapel_file_name;
  int32_t chapel_line;

  // These are only used with 'STACK_UNWIND_MODE_STRING'.
  size_t bufsz;
  size_t strsz;
  char** str_ptr;
  char sep;
  char sepstr[2];
} stack_unwind_state;

static bool stack_unwind_advance(stack_unwind_state* st);
static bool stack_unwind_should_print_frame(stack_unwind_state* st);

// Returns 'true' on success.
static bool stack_unwind_state_init(stack_unwind_state* st,
                                    enum stack_unwind_mode mode,
                                    bool print_all_frames,
                                    char sep,
                                    void* out) {
  memset(st, 0, sizeof(*st));

  int64_t num_stack_frames = 0;

  if (unw_getcontext(&st->uc) != 0) {
    DEBUG_PRINT(("unw_getcontext failed\n"));
    return false;
  }

  if (unw_init_local(&st->cursor, &st->uc) != 0) {
    DEBUG_PRINT(("unw_init_local failed\n"));
    return false;
  }

  // Create a temp cursor to restore with later.
  unw_cursor_t temp_cursor = st->cursor;

  // Count the number of frames we should print.
  st->printed_frame_num = -1;
  st->print_all_frames  = print_all_frames;
  while (stack_unwind_advance(st)) {
    if (stack_unwind_should_print_frame(st)) num_stack_frames++;
  }

  // Restore the temp cursor.
  st->cursor = temp_cursor;

  // This module code checks to see if the Chapel program has loaded anything.
  CHPL_PROGRAM_DATA_TEMP(CHPL_PROGRAM_ROOT, chpl_areAnyChapelProgramsLoaded);

  // Initialize all the remaining fields.
  st->any_programs_loaded = chpl_areAnyChapelProgramsLoaded();
  st->mode                = mode;
  st->out                 = out;
  st->str_ptr             = (char**) out;
  st->sep                 = sep;
  st->sepstr[0]           = sep;
  st->sepstr[1]           = '\0';
  st->num_stack_frames    = num_stack_frames;
  st->printed_frame_num   = -1;
  st->chapel_symbol_name  = NULL;
  st->chapel_file_idx     = 0;
  st->chapel_file_name    = NULL;
  st->chapel_line         = 0;

  return true;
}

// Returns 'true' if the stack unwind advanced one frame.
static bool stack_unwind_advance(stack_unwind_state* st) {
  // The implementation is done stepping, so the unwind is done.
  if (unw_step(&st->cursor) <= 0) return false;

  // Clear Chapel state from the last frame.
  st->chapel_symbol_name  = NULL;
  st->chapel_file_idx     = 0;
  st->chapel_file_name    = NULL;
  st->chapel_line         = 0;

  // Get the 'C name' of the symbol.
  unw_get_proc_name(&st->cursor, st->symbol_buffer,
                    sizeof(st->symbol_buffer),
                    &st->ip_offset);

  // Try to get Chapel program info for the symbol based on cursor position.
  st->prg = stack_unwind_get_program_info(&st->cursor, st->ip_offset);

  // It's a foreign symbol, so there's nothing more to do.
  if (st->prg == NULL) return true;

  st->chapel_program_path = chpl_program_info_load_path(st->prg);

  // We have a Chapel program, so we can see its symbol tables.
  CHPL_PROGRAM_DATA_TEMP(st->prg, chpl_sizeSymTable);
  CHPL_PROGRAM_DATA_TEMP(st->prg, chpl_funSymTable);
  CHPL_PROGRAM_DATA_TEMP(st->prg, chpl_filenumSymTable);

  // No symbol table entries, so exit without Chapel symbol details.
  if (chpl_sizeSymTable <= 0) return true;

  // To traverse this table, the step is 2. The 'C name' is at index N, and
  // the 'Chapel name' is at 'N+1'. TODO: Consider emitting struct entries.
  //
  // TODO: If it is necessary to improve performance, consider one of...
  //
  // A) Use a hashtable or map to find entries in 'chpl_funSymTable'
  // B) Emit 'chpl_funSymTable' in sorted order and use binary search
  for (int i = 0; i < chpl_sizeSymTable; i += 2) {
    const char* symbol_name_c = chpl_funSymTable[i];
    const char* symbol_name_chapel = chpl_funSymTable[i + 1];

    // Match against the 'C name'.
    bool found = !strcmp(st->symbol_buffer, symbol_name_c);

    if (found) {
      int32_t file_idx = chpl_filenumSymTable[i];

      // Attach extra information about the Chapel symbol.
      st->chapel_symbol_name  = symbol_name_chapel;
      st->chapel_file_idx     = file_idx;
      st->chapel_file_name    = chpl_rt_lookup_filename(st->prg, file_idx);
      st->chapel_line         = stack_unwind_get_line_num(st->prg, &st->cursor,
                                                          st->ip_offset, i);
    }
  }

  return true;
}

static bool stack_unwind_should_print_frame(stack_unwind_state* st) {
  if (st->print_all_frames) return true;

  bool is_foreign_symbol = st->prg == NULL;
  bool have_chapel_info = st->chapel_symbol_name != NULL;

  (void) is_foreign_symbol;
  (void) have_chapel_info;

  // Otherwise, only print a frame if we have information about it.
  bool ret = have_chapel_info;

  return ret;
}

static void stack_unwind_print_header_if_needed(stack_unwind_state* st) {
  if (st->has_printed_header) return;

  st->has_printed_header = true;

  switch (st->mode) {
    case STACK_UNWIND_MODE_FILE: {
      FILE* fp = (FILE*) st->out;
      fprintf(fp, "Stacktrace (%" PRId64 " frames) %c%c",
              st->num_stack_frames,
              st->sep,
              st->sep);
    } break;

    case STACK_UNWIND_MODE_STRING: {
      char line_num_buffer[STACK_UNWIND_MAX_LINE_NUMBER_LENGTH + 1];

      // Print out the line as a string.
      int buffersz = snprintf(line_num_buffer, sizeof(line_num_buffer),
                              "%" PRId32,
                              st->chapel_line);
      if (buffersz < 0) line_num_buffer[0] = '\0';

      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, "Stacktrace (");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       line_num_buffer);
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, " frames)");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, st->sepstr);
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, st->sepstr);
    } break;
  }
}

static void
stack_unwind_print_foreign_symbol(stack_unwind_state* st) {
  switch (st->mode) {
    case STACK_UNWIND_MODE_FILE: {
      FILE* fp = (FILE*) st->out;
      fprintf(fp, "(external symbol): %s%c", st->symbol_buffer, st->sep);
    } break;

    case STACK_UNWIND_MODE_STRING: {
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       "(external symbol): ");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       st->symbol_buffer);
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, st->sepstr);
    } break;
  }
}

static void
stack_unwind_print_chapel_symbol_no_info(stack_unwind_state* st) {
  switch (st->mode) {
    case STACK_UNWIND_MODE_FILE: {
      FILE* fp = (FILE*) st->out;

      fprintf(fp, "(stripped Chapel symbol): %s", st->symbol_buffer);

      if (st->any_programs_loaded) {
        fprintf(fp, " in Chapel program at %s", st->chapel_program_path);
      }

      fprintf(fp, "%c", st->sep);
    } break;

    case STACK_UNWIND_MODE_STRING: {
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       "(stripped Chapel symbol): ");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       st->symbol_buffer);

      if (st->any_programs_loaded) {
        append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                         " in Chapel program at ");
        append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                         st->chapel_program_path);
      }

      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, st->sepstr);
    } break;
  }
}

static void
stack_unwind_print_chapel_symbol_with_info(stack_unwind_state* st) {
  switch (st->mode) {
    case STACK_UNWIND_MODE_FILE: {
      FILE* fp = (FILE*) st->out;

      fprintf(fp, "%s() at %s:%d",
              st->chapel_symbol_name,
              st->chapel_file_name,
              st->chapel_line);

      if (st->any_programs_loaded) {
        fprintf(fp, " in Chapel program at %s", st->chapel_program_path);
      }

      fprintf(fp, "%c", st->sep);

    } break;

    case STACK_UNWIND_MODE_STRING: {
      char line_num_buffer[STACK_UNWIND_MAX_LINE_NUMBER_LENGTH + 1];

      // Print out the line as a string.
      int buffersz = snprintf(line_num_buffer, sizeof(line_num_buffer), "%d",
                              st->chapel_line);
      if (buffersz < 0) line_num_buffer[0] = '\0';

      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       st->chapel_symbol_name);
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, "() at ");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       st->chapel_file_name);
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, ":");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, line_num_buffer);

      if (st->any_programs_loaded) {
        append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                         " in Chapel program at ");
        append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                         st->chapel_program_path);
      }

      append_to_string(&st->bufsz, &st->strsz, st->str_ptr, st->sepstr);
    } break;
  }
}

static void stack_unwind_print_printed_frame_number(stack_unwind_state* st) {
  // Increment the displayed frame counter. TODO: Can count descending...
  st->printed_frame_num++;

  switch (st->mode) {
    case STACK_UNWIND_MODE_FILE: {
      FILE* fp = ((FILE*) st->out);
      fprintf(fp, "[%" PRId64 "] ", st->printed_frame_num);
    } break;

    case STACK_UNWIND_MODE_STRING: {
      char printed_frame_num_buffer[STACK_UNWIND_MAX_LINE_NUMBER_LENGTH + 1];

      // Print out the frame number as a string.
      int buffersz = snprintf(printed_frame_num_buffer, sizeof(printed_frame_num_buffer),
                              "%" PRId64,
                              st->printed_frame_num);
      if (buffersz < 0) printed_frame_num_buffer[0] = '\0';

      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       "[");
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       printed_frame_num_buffer);
      append_to_string(&st->bufsz, &st->strsz, st->str_ptr,
                       "] ");
    } break;
  }
}

static void stack_unwind_print_frame(stack_unwind_state* st) {
  stack_unwind_print_header_if_needed(st);

  stack_unwind_print_printed_frame_number(st);

  bool is_foreign_symbol = st->prg == NULL;
  bool have_chapel_info = st->chapel_symbol_name != NULL;

  if (is_foreign_symbol) {
    stack_unwind_print_foreign_symbol(st);
  } else if (!have_chapel_info) {
    stack_unwind_print_chapel_symbol_no_info(st);
  } else {
    stack_unwind_print_chapel_symbol_with_info(st);
  }
}

static void stack_unwind_epilogue(stack_unwind_state* st) {
  if (st->mode == STACK_UNWIND_MODE_STRING) {
    if (*st->str_ptr != NULL) {
      // Null terminate the string.
      (*st->str_ptr)[st->strsz] = '\0';
    }
  }
}

// Helper function for 'chpl_stack_unwind' and 'chpl_stack_unwind_to_string'.
// The 'mode' indicates whether we are writing to a FILE* or to a string, and
// 'out' is 'FILE*' or 'char**', depending on the mode.
//
// TODO: Just print to a string buffer, and then decide to write to a file or
//       not at the end. Simplifies the implementation and forces us to handle
//       overflows.
//
// NOTE:
// Since this stack trace is printed out a program exit, we do not believe it
// is performance sensitive. Additionally, this initial implementation favors
// simplicity over performance.
static void stack_unwind_helper(enum stack_unwind_mode mode,
                                bool print_all_frames,
                                char sep,
                                void* out) {
  stack_unwind_state st;

  if (!stack_unwind_state_init(&st, mode, print_all_frames, sep, out)) return;

  while (stack_unwind_advance(&st)) {
    if (stack_unwind_should_print_frame(&st)) {
      stack_unwind_print_frame(&st);
    }
  }

  stack_unwind_epilogue(&st);
}

void chpl_rt_stack_unwind(FILE* out, char sep) {
  // Consult the root program to see if we are unwinding.
  CHPL_PROGRAM_DATA_TEMP(CHPL_PROGRAM_ROOT, CHPL_UNWIND);

  const char* chpl_rt_unwind = chpl_env_rt_get("UNWIND", NULL);
  chpl_bool should_print = chpl_env_str_to_bool("UNWIND", chpl_rt_unwind, true);
  chpl_bool user_set = chpl_rt_unwind != NULL;

  if (!should_print) {
    return;
  }

  // Always print if 'CHPL_DEVELOPER' is set. TODO: Also check root program?
  bool print_all_frames = getenv("CHPL_DEVELOPER") != NULL;

  // Dump the stack trace now.
  stack_unwind_helper(STACK_UNWIND_MODE_FILE, print_all_frames, sep, out);

  if (!user_set && strcmp(CHPL_UNWIND, "none") != 0) {
    fprintf(out, "%cDisable full stacktrace by setting 'CHPL_RT_UNWIND=0'%c",
            sep, sep);
  }

  if (getenv("CHPL_DEVELOPER") == NULL) {
    fprintf(out, "Show complete stacktrace by setting 'CHPL_DEVELOPER=1'%c",
            sep);
  }
}

char* chpl_rt_stack_unwind_to_string(char sep) {
  char* str = NULL;
  void* out = ((void*) &str);

  // Always print if 'CHPL_DEVELOPER' is set. TODO: Also check root program?
  bool print_all_frames = getenv("CHPL_DEVELOPER") != NULL;

  stack_unwind_helper(STACK_UNWIND_MODE_STRING, print_all_frames, sep, out);

  return str;
}

#else

void chpl_rt_stack_unwind(FILE* out, char sep) {
}

char* chpl_rt_stack_unwind_to_string(char sep) {
  return NULL;
}

#endif
