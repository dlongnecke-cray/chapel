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

#include "chpl-comm.h"
#include "chpl-debug-print.h"
#include "chpl-linefile-support.h"
#include "chpl-program-registration.h"
#include "chpl-iostr.h"
#include "chpl-tasks.h"

#include <libgen.h>
#include <stdbool.h>

static chpl_rt_iostr iostr_here;

static FILE* open_log_file_here(void) {
  // Construct the log file name for this locale. Use a fixed width buffer.
  const int MAX_PATH_LEN = 2048;
  char path[MAX_PATH_LEN];
  chpl_rt_iostr iostr = chpl_rt_iostr_init_using(path, MAX_PATH_LEN, 0);
  chpl_rt_iostr* io = &iostr;
  FILE* ret = NULL;

  // Get the path where the main program was loaded.
  const char* load_path = chpl_program_info_load_path(CHPL_PROGRAM_ROOT);
  size_t load_path_size = strlen(load_path);

  // Rudimentary code to get the 'dirname' where the log will be placed.
  if (load_path_size < MAX_PATH_LEN) {
    char dir_buffer[MAX_PATH_LEN];
    strncpy(dir_buffer, load_path, load_path_size);

    // TODO: Not thread safe! Probably OK for rt-initialization-time.
    char* dir_name = dirname(dir_buffer);

    // Print the path.
    chpl_rt_iostr_printf(io, "%s/", dir_name);

  } else {
    fprintf(stderr, "the Chapel runtime could not compute log path\n");
    return NULL;
  }

  int32_t id = (int32_t) chpl_nodeID;
  bool ok = chpl_rt_iostr_printf(io, "chplrt-L%" PRId32 ".txt", id);
  assert(ok);

  ret = fopen(path, "w");

  if (ret == NULL) {
    fprintf(stderr, "the Chapel runtime failed to open log '%s'\n", path);
  }

  return ret;
}

void chpl_rt_debug_print_pre_comm_init(void) {
  // Before this point, the best we can do is debug print to 'stdout'.
  iostr_here = chpl_rt_iostr_init_file(stdout, 0);
  const char* err_desc = chpl_rt_iostr_error(&iostr_here);
  assert(err_desc == NULL);
}

void chpl_rt_debug_print_post_comm_init(void) {
  chpl_rt_iostr_fini(&iostr_here, NULL);

  const char* env = getenv("CHPL_RT_DEBUG_PRINT");
  FILE* fp1 = stdout;
  FILE* fp2 = NULL;

  if (env && !strcmp(env, "log")) {
    fp1 = stdout;
    fp2 = open_log_file_here();

  } else if (env && !strcmp(env, "stdout")) {
    fp1 = stdout;
    fp2 = NULL;

  } else if (env && !strcmp(env, "both")) {
    fp1 = stdout;
    fp2 = open_log_file_here();
  }

  // TODO: Possible to squelch both outputs?
  assert(fp1 != NULL || fp2 != NULL);

  chpl_rt_iostr_flags flags = CHPL_RT_IOSTR_FLUSH_OFTEN;

  // Initialize the stream over the files (it is OK if one is NULL).
  iostr_here = chpl_rt_iostr_init_files(flags, 2, fp1, fp2);

  // Print to 'stderr' if there was an error initializing the output.
  const char* err_desc = chpl_rt_iostr_error(&iostr_here);
  if (err_desc != NULL) {
    int32_t id = (int32_t) chpl_nodeID;
    fprintf(stderr, "the Chapel runtime failed to open debug IO "
                    "output on L%" PRId32 ": %s\n",
                    id, err_desc);
  }
}

typedef chpl_program_info prg;

struct printer_state {
  chpl_program_info* prg;
  chpl_rt_iostr* io;
  const char* tag;
  void* ptr;
};

struct printer_entry {
  const char* tag;
  void (*fn)(struct printer_state*);
};

static struct printer_entry lookup_printer_entry(const char* tag);

static void print_unknown_tag(struct printer_state* p) {
  chpl_rt_iostr_printf(p->io, "<unknown RT printer format: %s>", p->tag);
}

static void print_field_hook(struct printer_state* p,
                             const char* field_name,
                             bool print_sep) {
  struct printer_entry e = lookup_printer_entry(p->tag);

  chpl_rt_iostr_printf(p->io, "%s=", field_name);
  e.fn(p);

  if (print_sep) chpl_rt_iostr_printf(p->io, "%s", ", ");
}

#define PRINT_FIELD(st1__, rec_ptr__, field__, tag__, sep__) do {           \
  void* field_addr = ((void*) &rec_ptr__->field__);                         \
  struct printer_state st2 = {                                              \
    st1__->prg, st1__->io, tag__, field_addr                                \
  };                                                                        \
  print_field_hook(&st2, #field__, sep__);                                  \
} while (0)

static void print_const_char_ptr(struct printer_state* p) {
  const char* x = ((const char*) p->ptr);
  chpl_rt_iostr_printf(p->io, "%s", x);
}

static void print_chpl_taskID_t(struct printer_state* p) {
  chpl_taskID_t x = *((chpl_taskID_t*) p->ptr);
  uint64_t as_u64 = (uint64_t) x;

  if (as_u64 == ((unsigned int) -1)) {
    chpl_rt_iostr_printf(p->io, "%s", "<?>");
  } else {
    chpl_rt_iostr_printf(p->io, "%" PRId64, as_u64);
  }
}

static void print_task_bundle_pointer(struct printer_state* p) {
  chpl_task_bundle_p x = *((chpl_task_bundle_p*) p->ptr);
  chpl_rt_iostr_printf(p->io, "%c", '(');
  PRINT_FIELD(p, x, requested_fid, "chpl_fn_int_t", 1);
  PRINT_FIELD(p, x, requested_fn, "chpl_fn_p", 1);
  PRINT_FIELD(p, x, id, "chpl_taskID_t", 0);
  chpl_rt_iostr_printf(p->io, "%c", ')');
}

static void print_comm_on_bundle_pointer(struct printer_state* p) {
  chpl_rt_iostr_printf(p->io, "%s", "<comm-bundle>");
}

#define DEFINE_PRINT_INTEGRAL(type__, specifier__)                      \
  static void print_##type__(struct printer_state* p) {                 \
    type__* casted = ((type__*) p->ptr);                                \
    chpl_rt_iostr_printf(p->io, "%" specifier__, *casted);              \
  }

DEFINE_PRINT_INTEGRAL(int64_t, PRId64)
DEFINE_PRINT_INTEGRAL(int32_t, PRId32)
DEFINE_PRINT_INTEGRAL(int16_t, PRId16)
DEFINE_PRINT_INTEGRAL(int8_t, PRId8)
DEFINE_PRINT_INTEGRAL(uint64_t, PRIu64)
DEFINE_PRINT_INTEGRAL(uint32_t, PRIu32)
DEFINE_PRINT_INTEGRAL(uint16_t, PRIu16)
DEFINE_PRINT_INTEGRAL(uint8_t, PRIu8)
DEFINE_PRINT_INTEGRAL(double, "lf")
DEFINE_PRINT_INTEGRAL(float, "f")
DEFINE_PRINT_INTEGRAL(chpl_fn_int_t, PRId32)
#undef DEFINE_PRINT_INTEGRAAL

static bool tag_is_pointer_type(const char* tag) {
  int i = 0;
  for (char c = tag[0]; c != 0; c = tag[i++]) {
    if (c == '*') return true;
  }
  return false;
}

static void print_pointer_general(struct printer_state* p) {
  chpl_rt_iostr_printf(p->io, "((%s) %p)", p->tag, p->ptr);
}

// TODO: Just take 'pointer count' as a 'depth'.
// TODO: Just map some common Chapel types here.
struct printer_entry lookup_printer_entry(const char* tag) {
  static struct printer_entry entries[] = {
    { .tag="const char*",           .fn=print_const_char_ptr },
    { .tag="int64_t",               .fn=print_int64_t },
    { .tag="int32_t",               .fn=print_int32_t },
    { .tag="int16_t",               .fn=print_int16_t },
    { .tag="int8_t",                .fn=print_int8_t  },
    { .tag="uint64_t",              .fn=print_uint64_t },
    { .tag="uint32_t",              .fn=print_uint32_t },
    { .tag="uint16_t",              .fn=print_uint16_t },
    { .tag="uint8_t",               .fn=print_uint8_t },
    { .tag="double",                .fn=print_double },
    { .tag="float",                 .fn=print_float },
    { .tag="chpl_task_bundle_p",    .fn=print_task_bundle_pointer },
    { .tag="chpl_comm_on_bundle_p", .fn=print_comm_on_bundle_pointer },
    { .tag="chpl_fn_int_t",         .fn=print_chpl_fn_int_t },
    { .tag="chpl_taskID_t",         .fn=print_chpl_taskID_t },
    { .tag=NULL,                    .fn=NULL }
  };

  for (int i = 0; entries[i].tag != NULL; i++) {
    struct printer_entry* e = entries + i;
    if (!strcmp(e->tag, tag)) return *e;
  }

  struct printer_entry ret = { .tag=tag, .fn=print_unknown_tag };

  if (tag_is_pointer_type(tag)) {
    ret.fn = print_pointer_general;
    return ret;
  }

  return ret;
}

static int debug_is_hotspot(const char* function, const char* field_name) {
  const char* suppressedFieldNames[] = {
    "chpl_task_getCommDiagsTemporarilyDisabled",
    NULL
  };

  const char* suppressedFunctions[] = {
    "chpl_cache_enabled",
    NULL
  };

  const char** cur = NULL;
  for (cur = suppressedFieldNames; *cur; cur++) {
    if (!strcmp(field_name, *cur)) return 1;
  }
  for (cur = suppressedFunctions; *cur; cur++) {
    if (!strcmp(function, *cur)) return 1;
  }

  return 0;
}

void* chpl_rt_program_data_debug_print_hook(int verbosity,
                                            chpl_program_info* prg,
                                            void* field_addr,
                                            const char* field_name,
                                            const char* file,
                                            const char* function,
                                            int line) {
  // Just return the field address, it will be deref'd and used like normal.
  void* ret = field_addr;

  // Nothing to do, could have another hook to run later.
  if (verbosity <= 0) return ret;

  int do_print = (verbosity == 1 && !debug_is_hotspot(function, field_name)) ||
                 (verbosity == 2);

  if (do_print) {
    chpl_rt_iostr* io = &iostr_here;
    chpl_rt_iostr_printf(io, "[%s in %s:%d] P%" PRIu64 "@L%d: %s\n",
                             function, file, line, prg->id,
                             chpl_nodeID, field_name);
  }

  return ret;
}

// TODO: Eventually, move this entire implementation into Chapel code.
//       Then, the runtime can just use callbacks from the root program.
//       A good time to do this would be when we rework IO e.g., 'writeln'
//       to buffer locally, and provide an API for unsynchronized IO.
//       Additionally, we need to have zero-copy IO a la 'snprintf'.
void chpl_rt_debug_print_chapel_hook(chpl_program_info* prg,
                                     chpl_rt_debugf_arg* args,
                                     uint64_t num_args) {
  chpl_rt_iostr* io = &iostr_here;

  for (uint64_t i = 0; i < num_args; i++) {
    chpl_rt_debugf_arg arg = args[i];
    struct printer_entry e = lookup_printer_entry(arg.type_str);
    struct printer_state st = { prg, io, e.tag, arg.data_ptr };
    e.fn(&st);
  }

  chpl_rt_iostr_printf(io, "%c", '\n');
  chpl_rt_iostr_flush(io);
}
