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
#include "chpl-dynamic-loading.h"
#include "chpl-program-registration.h"
#include <string.h>

static chpl_program_info* chpl_prg_root;

#ifndef CHPL_RT_IS_BUILT_AS_DYNAMIC_LIBRARY
  int chpl_rt_is_dynamic_library = 0;
#else
  int chpl_rt_is_dynamic_library = 1;
#endif

//
// HIDDEN SYMBOLS W/ GLOBAL EXTERN LINKAGE
// (Available for module code to call but not exposed in the header file.)
//

/** Define setters that module code can call to set up program data. */
#define CONCAT(a__, b__) a__##b__
#define PREFIX chpl_program_info_data_entry_set_
#define SETTER(prefix__, name__)                                              \
  void CONCAT(prefix__, name__)(chpl_program_info* prg, const void* data) {   \
    memcpy(&prg->data.name__, data, sizeof(name__##_type));                   \
  }
#define E_CONSTANT(name__, type__) SETTER(PREFIX, name__)
#define E_CALLBACK(name__) SETTER(PREFIX, name__)
#include "chpl-program-data-macro-adapter.h"
#undef PREFIX
#undef SETTER
#undef CONCAT

chpl_prg_id
chpl_program_register_here_nosync(chpl_prg_id id, chpl_program_info* prg) {
  chpl_prg_id ret = CHPL_PROGRAM_NULL_ID;

  // ERROR: The root program hasn't even been set yet...
  if (chpl_prg_root == NULL) return ret;

  // ERROR: This ID is reserved...
  if (id == CHPL_PROGRAM_ROOT_ID) return ret;

  // ERROR: The program's ID is already set!
  if (prg->id != CHPL_PROGRAM_NULL_ID) return ret;

  int requestingNewIdx = (id == CHPL_PROGRAM_NULL_ID);
  int64_t idxToUse = requestingNewIdx ? 0 : ((int64_t) id);
  int64_t got = chpl_rootPrgMapPtrToIdxHere(prg, idxToUse);

  if (!requestingNewIdx && idxToUse != got) {
    // TODO: Propagate errors outwards from this function?
    chpl_error("Failed to map index!\n", 0, 0);
  }

  ret = (chpl_prg_id) got;

  // Set the program's ID. It should be writeable memory.
  prg->id = ret;

  return ret;
}

int chpl_program_register_root_here(chpl_program_info* prg) {
  if (chpl_prg_root == NULL) {
    chpl_prg_root = prg;
    prg->id = CHPL_PROGRAM_ROOT_ID;
    return 1;
  }

  return 0;
}

//
// HEADER-DECLARED SYMBOLS
// (Available for both module code and runtime code to call.)
//

chpl_program_info* chpl_program_info_from_id_here(chpl_prg_id id) {
  if (id == CHPL_PROGRAM_NULL_ID) return NULL;
  if (id == CHPL_PROGRAM_ROOT_ID) return chpl_prg_root;

  // TODO...
  abort();

  return NULL;
}

chpl_prg_id chpl_program_info_id(const chpl_program_info* prg) {
  return prg ? prg->id : CHPL_PROGRAM_NULL_ID;
}

int chpl_program_info_num_data_entries(void) {
  int ret = 0;
  #define E_CONSTANT(name__, type__) ret += 1;
  #define E_CALLBACK(name__) ret += 1;
  #include "chpl-program-data-macro-adapter.h"
  return ret;
}

typedef chpl_program_info prg;

struct printer_entry {
  const char* tag;
  void (*fn)(prg*, FILE*, void*);
};

static struct printer_entry* lookup_printer_entry(const char* tag);

static void print_unknown_tag(prg* prg, FILE* fp, const char* tag) {
  fprintf(fp, "<unknown RT printer format: %s>", tag);
}

#define PRINT_FIELD(prg__, fp__, recPtr__,  field__, tag__, sep__) do {   \
  void* ptr = ((void*) &recPtr__->field__);                               \
  struct printer_entry* e = lookup_printer_entry(tag__);                  \
  if (e) {                                                                \
    fprintf(fp__, "%s=", #field__);                                       \
    e->fn(prg__, fp__, ptr);                                              \
  } else {                                                                \
    print_unknown_tag(prg__, fp__, tag__);                                \
  }                                                                       \
  if (sep__) fprintf(fp__, "%s", ", ");                                   \
} while (0)

static void print_const_char_ptr(prg* prg, FILE* fp, void* ptr) {
  const char* x = ((const char*) ptr);
  fprintf(fp, "%s", x);
}

static void print_chpl_taskID_t(prg* prg, FILE* fp, void* ptr) {
  chpl_taskID_t x = *((chpl_taskID_t*) ptr);
  uint64_t as_u64 = (uint64_t) x;
  if (as_u64 == ((unsigned int) -1)) {
    fprintf(fp, "%s", "<?>");
  } else {
    fprintf(fp, "%" PRId64, as_u64);
  }
}

static void print_task_bundle_pointer(prg* prg, FILE* fp, void* ptr) {
  chpl_task_bundle_p x = *((chpl_task_bundle_p*) ptr);
  fprintf(fp, "%c", '(');
  PRINT_FIELD(prg, fp, x, requested_fid, "chpl_fn_int_t", 1);
  PRINT_FIELD(prg, fp, x, requested_fn, "chpl_fn_p", 1);
  PRINT_FIELD(prg, fp, x, id, "chpl_taskID_t", 0);
  fprintf(fp, "%c", ')');
}

#define DEFINE_PRINT_INTEGRAL(type__, specifier__)            \
  static void print_##type__(prg* prg, FILE* fp, void* x) {   \
    type__* casted = ((type__*) x);                           \
    fprintf(fp, "%" specifier__, *casted);                    \
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

struct printer_entry* lookup_printer_entry(const char* tag) {
  struct printer_entry entries[] = {
    { .tag="const char*",         .fn=print_const_char_ptr },
    { .tag="int64_t",             .fn=print_int64_t },
    { .tag="int32_t",             .fn=print_int32_t },
    { .tag="int16_t",             .fn=print_int16_t },
    { .tag="int8_t",              .fn=print_int8_t  },
    { .tag="uint64_t",            .fn=print_uint64_t },
    { .tag="uint32_t",            .fn=print_uint32_t },
    { .tag="uint16_t",            .fn=print_uint16_t },
    { .tag="uint8_t",             .fn=print_uint8_t },
    { .tag="double",              .fn=print_double },
    { .tag="float",               .fn=print_float },
    { .tag="chpl_task_bundle_p",  .fn=print_task_bundle_pointer },
    { .tag="chpl_fn_int_t",       .fn=print_chpl_fn_int_t },
    { .tag="chpl_taskID_t",       .fn=print_chpl_taskID_t },
    { .tag=NULL,                  .fn=NULL }
  };

  for (int i = 0; entries[i].tag; i++) {
    struct printer_entry* e = entries + i;
    if (!strcmp(e->tag, tag)) return e;
  }

  return NULL;
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

void* chpl_program_data_debug_hook(int verbosity, chpl_program_info* prg,
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
    printf("[%s in %s:%d] P%" PRIu64 "@L%d: %s\n",
           function, file, line, prg->id, chpl_nodeID, field_name);
  }

  return ret;
}

// TODO: Eventually, move this entire implementation into Chapel code.
//       Then, the runtime can just use callbacks from the root program.
//       A good time to do this would be when we rework IO e.g., 'writeln'
//       to buffer locally, and provide an API for unsynchronized IO.
//       Additionally, we need to have zero-copy IO a la 'snprintf'.
void chpl_rt_debugfChapelHook(chpl_program_info* prg,
                              chpl_rt_debugf_arg* args,
                              uint64_t numArgs) {
  FILE* fp = stdout;

  for (uint64_t i = 0; i < numArgs; i++) {
    chpl_rt_debugf_arg arg = args[i];

    struct printer_entry* e = lookup_printer_entry(arg.typeStr);
    if (e) {
      e->fn(prg, fp, arg.dataPtr);
    } else {
      print_unknown_tag(prg, fp, arg.typeStr);
    }
  }

  fprintf(stdout, "%c", '\n');
  fflush(stdout);
}
