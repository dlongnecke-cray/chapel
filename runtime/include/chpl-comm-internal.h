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

#ifndef CHPL_RT_COMM_INTERNAL_H
#define CHPL_RT_COMM_INTERNAL_H

#include "chpltypes.h"
#include "chpl-mem-desc.h"
#include "chpl-program-registration.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Support for broadcasting globals.  Comm layer implementations must
// supply this.  It is called collectively.  On node 0 it must arrange
// that all the global variable wide pointers are in a buffer that can
// be the source of a GET from the other nodes and return either that
// buffer's address (if it wants it freed later) or NULL.  On all other
// nodes it should return the node-0 local address of that buffer.
//
wide_ptr_t* chpl_rt_comm_broadcast_global_vars_impl(chpl_program_info* prg);

//
// Much as each program maintains a private broadcast table, the runtime
// also maintains a table of broadcast constants.
//
extern void* chpl_rt_private_broadcast_table_for_rt[];
extern size_t chpl_rt_private_broadcast_table_for_rt_len;
extern size_t chpl_rt_private_broadcast_table_for_rt_byte_lens[];

//
// These are entries for broadcast constants that the runtime needs.
// They do NOT include any per-program constants.
//
#define CHPL_RT_RUNTIME_PRIVATE_BROADCAST_TABLE_ENTRIES(MACRO__)  \
  MACRO__(chpl_verbose_comm)                                      \
  MACRO__(chpl_comm_diagnostics)                                  \
  MACRO__(chpl_comm_diags_print_unstable)                         \
  MACRO__(chpl_verbose_comm_stacktrace)                           \
  MACRO__(chpl_verbose_gpu)                                       \
  MACRO__(chpl_gpu_diagnostics)                                   \
  MACRO__(chpl_gpu_diags_print_unstable)                          \
  MACRO__(chpl_verbose_gpu_stacktrace)                            \
  MACRO__(chpl_verbose_mem)

// Expand out an enum that can be used to produce a unique index for a symbol.
#define CHPL_RT_TABLE_PREFIX chpl_rt_runtime_private_broadcast_table_for_rt_
#define CHPL_RT_TABLE_ENTRY(sym__) CHPL_RT_TABLE_PREFIX ## sym__ ## _idx,
typedef enum chpl_rt_private_broadcast_table_entries_for_rt {
  CHPL_RT_RUNTIME_PRIVATE_BROADCAST_TABLE_ENTRIES(CHPL_RT_TABLE_ENTRY)
  chpl_rt_runtime_private_broadcast_table_for_rt_num_entries
} chpl_rt_private_broadcast_table_entries_for_rt;

static inline
void chpl_rt_comm_broadcast_rt_constant_hook(int32_t idx) {
  assert(idx >= 0 && idx < chpl_rt_private_broadcast_table_for_rt_len);

  // No program indicates we are asking for a runtime constant.
  chpl_program_info* no_prg = NULL;
  size_t size = chpl_rt_private_broadcast_table_for_rt_byte_lens[idx];

  chpl_rt_comm_broadcast_private(no_prg, idx, size);
}

//
// Broadcast one of our runtime-specific variables.
//
#define chpl_rt_comm_broadcast_rt_constant(sym__) do {    \
  int32_t idx = CHPL_RT_TABLE_PREFIX ## sym__ ## _idx;    \
  chpl_rt_comm_broadcast_rt_constant_hook(idx);           \
} while (0)

// Done with both of these helper macros now.
#undef CHPL_RT_TABLE_PREFIX
#undef CHPL_RT_TABLE_ENTRY

// If 'prg' is non-null, then try to fetch a broadcast table using 'prg'.
// Otherwise, if 'prg_id' is not zero, try to fetch using 'prg_id'.
// Else, if no program is provided then fetch the table of runtime constants.
// Writes the table length to 'out_table_len' if it is non-null.
static inline
void* chpl_rt_comm_fetch_broadcast_table(chpl_program_info* prg,
                                         chpl_prg_id prg_id,
                                         size_t* out_table_len) {
  size_t table_len = 0;
  void** ret = NULL;
  bool use_rt_table = prg_id == CHPL_PROGRAM_NULL_ID && prg == NULL;

  if (use_rt_table) {
    ret = chpl_rt_private_broadcast_table_for_rt;
    table_len = chpl_rt_private_broadcast_table_for_rt_len;

  } else {
    chpl_program_info* use_prg = prg ? prg : CHPL_PROGRAM_FETCH(prg_id);
    assert(use_prg != NULL);
    ret = CHPL_PROGRAM_DATA(use_prg, chpl_private_broadcast_table);
    table_len = CHPL_PROGRAM_DATA(use_prg, chpl_private_broadcast_table_len);
  }

  assert(ret != NULL && table_len != 0);

  if (out_table_len != NULL) *out_table_len = table_len;

  return ret;
}

// Comm-layer specific implementation.
void chpl_rt_comm_broadcast_private_impl(chpl_program_info* prg, int32_t id,
                                         size_t size);

// Comm-layer specific implementation.
void chpl_rt_comm_execute_on_impl(chpl_program_info* prg,
                                  c_nodeid_t node,
                                  c_sublocid_t subloc,
                                  chpl_fn_int_t fid,
                                  chpl_comm_on_bundle_t *arg,
                                  size_t arg_size,
                                  int ln,
                                  int32_t fn);

// Comm-layer specific implementation.
void chpl_rt_comm_execute_on_fast_impl(chpl_program_info* prg,
                                       c_nodeid_t node,
                                       c_sublocid_t subloc,
                                       chpl_fn_int_t fid,
                                       chpl_comm_on_bundle_t *arg,
                                       size_t arg_size,
                                       int ln,
                                       int32_t fn);

// Comm-layer specific implementation.
void chpl_rt_comm_execute_on_nb_impl(chpl_program_info* prg,
                                     c_nodeid_t node,
                                     c_sublocid_t subloc,
                                     chpl_fn_int_t fid,
                                     chpl_comm_on_bundle_t *arg,
                                     size_t arg_size,
                                     int ln,
                                     int32_t fn);

#ifdef __cplusplus
}
#endif

#endif
