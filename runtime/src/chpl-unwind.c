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

// needed for dlfcn.h on linux
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
chpl_rt_unwind_get_cursor_addr(unw_cursor_t* cursor,
                               unw_word_t ip_offset) {
  unw_proc_info_t info;
  unw_get_proc_info(cursor, &info);
  void* ret = (void *)(info.start_ip + ip_offset);
  return ret;
}

static chpl_program_info*
chpl_rt_unwind_get_program_info(unw_cursor_t* cursor,
                                unw_word_t ip_offset) {
  void* addr = chpl_rt_unwind_get_cursor_addr(cursor, ip_offset);
  chpl_program_info* (*prg_info_callback)(void) = NULL;
  void* dl_handle = NULL;
  Dl_info info;
  int ecode = 0;

  // Get information about the code object the address is in.
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
static int chpl_rt_unwind_refine_get_line_num(chpl_program_info* prg,
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
static int chpl_rt_unwind_refine_get_line_num(chpl_program_info* prg,
                                              void *addr) {
  // Not implemented on this platform
  return 0;
}
#endif


static unsigned int chpl_rt_unwind_get_line_num(chpl_program_info* prg,
                                                unw_cursor_t* cursor,
                                                unw_word_t ip_offset,
                                                int table_idx) {
  CHPL_PROGRAM_DATA_TEMP(prg, chpl_filenumSymTable);

  unsigned int line = chpl_filenumSymTable[table_idx + 1];

  void* addr = chpl_rt_unwind_get_cursor_addr(cursor, ip_offset);
  unsigned int line_tmp = chpl_rt_unwind_refine_get_line_num(prg, addr);
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

enum chpl_stack_unwind_mode {
  CHPL_STACK_UNWIND_MODE_FILE,
  CHPL_STACK_UNWIND_MODE_STRING
};

// Helper function for 'chpl_stack_unwind' and 'chpl_stack_unwind_to_string'.
// The 'mode' indicates whether we are writing to a FILE* or to a string, and
// 'out' is 'FILE*' or 'char**', depending on the mode.
//
// TODO: Just print to a string buffer, and then decide to write to a file or
//       not at the end. Simplifies the implementation and forces us to handle
//       overflows.
static void chpl_stack_unwind_helper(enum chpl_stack_unwind_mode mode,
                                     char sep,
                                     void* out) {
  CHPL_PROGRAM_DATA_TEMP(CHPL_PROGRAM_ROOT, chpl_areAnyChapelProgramsLoaded);
  bool any_programs_loaded = chpl_areAnyChapelProgramsLoaded();

  // State needed to run the stack unwind loop.
  unw_cursor_t cursor;
  unw_context_t uc;
  unw_word_t ip_offset;
  const size_t max_line_length = 2047;
  char buffer[max_line_length + 1];

  // Whether or not we've printed the stacktrace header.
  bool has_printed_header = false;

  // These are only used with 'CHPL_STACK_UNWIND_MODE_STRING'.
  size_t bufsz = 0;
  size_t strsz = 0;
  char** str_ptr = (char**)out;
  char sepstr[2] = {sep, '\0'};

  if (unw_getcontext(&uc) != 0) {
    // TODO: Print warning?
    DEBUG_PRINT(("unw_getcontext failed\n"));
    return;
  }

  if (unw_init_local(&cursor, &uc) != 0) {
    // TODO: Print warning?
    DEBUG_PRINT(("unw_init_local failed\n"));
    return;
  }

  // This loop unwinds the stack.
  while (unw_step(&cursor) > 0) {
    unw_get_proc_name(&cursor, buffer, sizeof(buffer), &ip_offset);
    chpl_program_info* prg = NULL;

    // Try to get program info for the symbol based on cursor position.
    prg = chpl_rt_unwind_get_program_info(&cursor, ip_offset);

    if (prg == NULL) {
      // It's a foreign symbol, so we don't print it out.
      // TODO: Why not print out foreign symbols?
      continue;

    } else {
      // We have a Chapel program, so we can inspect its symbol table.
      CHPL_PROGRAM_DATA_TEMP(prg, chpl_sizeSymTable);
      CHPL_PROGRAM_DATA_TEMP(prg, chpl_funSymTable);
      CHPL_PROGRAM_DATA_TEMP(prg, chpl_filenumSymTable);

      // No Chapel symbol table entries in this program, so continue.
      if (chpl_sizeSymTable <= 0) continue;

      if (!has_printed_header) {
        has_printed_header = true;

        switch (mode) {
          case CHPL_STACK_UNWIND_MODE_FILE:
            fprintf((FILE*)out,"Stacktrace%c%c", sep, sep);
          break;
          case CHPL_STACK_UNWIND_MODE_STRING: {
            append_to_string(&bufsz, &strsz, str_ptr, "Stacktrace");
            append_to_string(&bufsz, &strsz, str_ptr, sepstr);
            append_to_string(&bufsz, &strsz, str_ptr, sepstr);
          }
          break;
        }
      }

      // Since this stack trace is printed out a program exit, we do not
      // believe it is performance sensitive. Additionally, this initial
      // implementation favors simplicity over performance.
      //
      // If it is necessary to improve performance, consider one of:
      //
      // A) Use a hashtable or map to find entries in 'chpl_funSymTable'
      // B) Emit 'chpl_funSymTable' in sorted order and use binary search
      //
      for (int t = 0; t < chpl_sizeSymTable; t += 2) {
        if (!strcmp(chpl_funSymTable[t], buffer)) {
          const char* path = chpl_program_info_load_path(prg);
          unsigned int line = chpl_rt_unwind_get_line_num(prg, &cursor,
                                                          ip_offset,
                                                          t);
          switch (mode) {
            case CHPL_STACK_UNWIND_MODE_FILE: {
              if (any_programs_loaded) {
                fprintf((FILE*)out, "%s() at %s:%d in program at %s%c",
                         chpl_funSymTable[t+1],
                         chpl_lookupFilename(chpl_filenumSymTable[t]),
                         line,
                         path,
                         sep);
              } else {
                fprintf((FILE*)out, "%s() at %s:%d%c",
                         chpl_funSymTable[t+1],
                         chpl_lookupFilename(chpl_filenumSymTable[t]),
                         line,
                         sep);
              }
            } break;

            case CHPL_STACK_UNWIND_MODE_STRING: {
              int buffersz = snprintf(buffer, sizeof(buffer), "%d", line);
              if (buffersz < 0) buffer[0] = '\0';

              append_to_string(&bufsz, &strsz, str_ptr, chpl_funSymTable[t+1]);
              append_to_string(&bufsz, &strsz, str_ptr, "() at ");
              append_to_string(&bufsz, &strsz, str_ptr,
                              chpl_lookupFilename(chpl_filenumSymTable[t]));
              append_to_string(&bufsz, &strsz, str_ptr, ":");
              append_to_string(&bufsz, &strsz, str_ptr, buffer); // line number
              if (any_programs_loaded) {
                append_to_string(&bufsz, &strsz, str_ptr, " in program at ");
                append_to_string(&bufsz, &strsz, str_ptr, path);
              }
              append_to_string(&bufsz, &strsz, str_ptr, sepstr);
            } break;
          }
        }
      }
    }
  }

  if (mode == CHPL_STACK_UNWIND_MODE_STRING) {
    // add null terminator
    if (*str_ptr != NULL) {
      (*str_ptr)[strsz] = '\0';
    }
  }
}

void chpl_stack_unwind(FILE* out, char sep) {
  // Consult the root program to see if we are unwinding.
  CHPL_PROGRAM_DATA_TEMP(CHPL_PROGRAM_ROOT, CHPL_UNWIND);

  const char* chpl_rt_unwind = chpl_env_rt_get("UNWIND", NULL);
  chpl_bool should_print = chpl_env_str_to_bool("UNWIND", chpl_rt_unwind, true);
  chpl_bool user_set = chpl_rt_unwind != NULL;

  if (!should_print) {
    return;
  }

  // Dump the stack trace now.
  chpl_stack_unwind_helper(CHPL_STACK_UNWIND_MODE_FILE, sep, out);

  if (!user_set && strcmp(CHPL_UNWIND, "none") != 0) {
    fprintf(out, "%cDisable full stacktrace by setting 'CHPL_RT_UNWIND=0'%c",
            sep, sep);
  }
}

char* chpl_stack_unwind_to_string(char sep) {
  char* str = NULL;
  chpl_stack_unwind_helper(CHPL_STACK_UNWIND_MODE_STRING, sep, (void*)&str);
  return str;
}

#else

void chpl_stack_unwind(FILE* out, char sep) {
}

char* chpl_stack_unwind_to_string(char sep) {
  return NULL;
}

#endif
