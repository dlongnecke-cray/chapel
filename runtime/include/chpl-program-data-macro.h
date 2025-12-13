/*
 * Copyright 2020-2025 Hewlett Packard Enterprise Development LP
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

#if !defined(CHPL_PROGRAM_DATA_MACRO_DECLARE_ONLY_DONE) && \
     defined(CHPL_PROGRAM_DATA_MACRO_DECLARE_ONLY)
  #define CHPL_PROGRAM_DATA_MACRO_DECLARE_ONLY_DONE

  // These are the headers required to get at the types used below.
  //
  // NOTE: If you need to '#include' a type and that header ends up using
  // 'chpl-program-registration.h' it can cause some funky circular inclusion
  // problems. In that case, the best thing to do is to forward-declare the
  // type here if needed...
  #include <inttypes.h>
  #include <stddef.h>
  #include "chpl-string-support.h"
  #include "chpltypes.h"

  #ifndef LAUNCHER
    #include "qio_error.h"
  #else
    typedef void syserr;
  #endif

  // ...As is done here.
  struct qio_channel_s;
  typedef struct qio_channel_s qio_channel_t;

  typedef void (*chpl_program_about_type)(void);
  typedef chpl_bool (*chpl_task_getCommDiagsTemporarilyDisabled_type)(void);
  typedef chpl_bool (*chpl_task_setCommDiagsTemporarilyDisabled_type)(chpl_bool);
  typedef void (*chpl_taskRunningCntInc_type)(int64_t ln, int64_t fn);
  typedef void (*chpl_taskRunningCntDec_type)(int64_t ln, int64_t fn);
  typedef void (*chpl_taskRunningCntReset_type)(int64_t ln, int64_t fn);
  typedef void (*CreateConfigVarTable_type)(void);
  typedef void (*chpl__initStringLiterals_type)(void);
  typedef void (*chpl__init_preInit_type)(int64_t ln, int32_t fn);
  typedef void (*chpl__init_PrintModuleInitOrder_type)(int64_t ln, int32_t fn);
  typedef void (*chpl__init_ChapelStandard_type)(int64_t ln, int32_t fn);
  typedef void (*chpl_deinitModules_type)(void);
  typedef int64_t (*chpl_gen_main_type)(chpl_main_argument* _arg);
  typedef void (*chpl_libraryModuleLevelSetup_type)(void);
  typedef void (*chpl_libraryModuleLevelCleanup_type)(void);
  typedef void (*chpl_memTracking_returnConfigVals_type)(chpl_bool* memTrack,
                                                         chpl_bool* memStats,
                                                         chpl_bool* memLeaksByType,
                                                         c_string* memLeaksByDesc,
                                                         chpl_bool* memLeaks,
                                                         size_t* memMax,
                                                         size_t* memThreshold,
                                                         c_string* memLog,
                                                         c_string* memLeaksLog);
  typedef syserr (*chpl_qio_fsync_type)(void* file);
  typedef syserr (*chpl_qio_getpath_type)(void* file, uint8_t** str, int64_t* len);
  typedef syserr (*chpl_qio_filelength_type)(void* file, int64_t* length);
  typedef syserr (*chpl_qio_setup_plugin_channel_type)(void* file, void** plugin_ch,
                                                       int64_t start,
                                                       int64_t end,
                                                       qio_channel_t* qio_ch);
  typedef syserr (*chpl_qio_channel_close_type)(void* ch);
  typedef syserr (*chpl_qio_read_atleast_type)(void* plugin_ch, int64_t amt);
  typedef syserr (*chpl_qio_write_type)(void* plugin_ch, int64_t amt);
  typedef syserr (*chpl_qio_get_chunk_type)(void* file, int64_t* length);
  typedef syserr (*chpl_qio_get_locales_for_region_type)(void* file, int64_t start,
                                                         int64_t end,
                                                         void **localeNamesPtr,
                                                         int64_t* nLocales);
  typedef syserr (*chpl_qio_file_close_type)(void* file);
  typedef c_sublocid_t
  (*chpl_localeModel_sublocToExecutionSubloc_type)(c_sublocid_t full_subloc);
  typedef void (*chpl__heapAllocateGlobals_type)(void);

  #define E_CALLBACK(name__)
  #define E_CONSTANT(name__, type__) typedef type__ name__##_type;
#endif

/**
  E_CONSTANT(name, type)
  E_CALLBACK(name)

  For callbacks, the type must be specified in the 'ifdef' block above using
  the format '"name"_type'. This is due to limitations of the preprocessor.
*/

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Whether or not 'main' can accept arguments.
*/
E_CONSTANT(mainHasArgs, int)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Whether or not 'main' should preserve the delimiter when parsing args.
*/
E_CONSTANT(mainPreserveDelimiter, int)

/** CODE-GENERATED | PER-PROGRAM-CALLBACK
    Provides information about this program.
*/
E_CALLBACK(chpl_program_about)

/** MODULE-CODE: ChapelTaskData.chpl | PER-PROGRAM-CALLBACK
    Whether or not comm diagnostics is temporarily disabled.
*/
E_CALLBACK(chpl_task_getCommDiagsTemporarilyDisabled)

/** MODULE-CODE: ChapelTaskData.chpl | PER-PROGRAM-CALLBACK
    Whether or not comm diagnostics is temporarily disabled.
*/
E_CALLBACK(chpl_task_setCommDiagsTemporarilyDisabled)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Table of private broadcast constants.      
*/
E_CONSTANT(chpl_private_broadcast_table, void**)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Length of table of private broadcast constants.
*/
E_CONSTANT(chpl_private_broadcast_table_len, int)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Table of private broadcast constants.
*/
E_CONSTANT(chpl_global_serialize_table, void**)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    A table of local addresses of wide pointers containing global vars.

    // chpl_globals_registry is an array of size chpl_numGlobalsOnHeap
    // storing ptr_wide_ptr_t, that is, local addresses of wide pointers.
    // It is filled in and used by chpl_comm_register_global_var() and
    // chpl_comm_broadcast_global_vars(), respectively, declared below.
*/
E_CONSTANT(chpl_globals_registry, ptr_wide_ptr_t*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    The number of globals that live on the heap.
*/
E_CONSTANT(chpl_numGlobalsOnHeap, int)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    The function table.
*/
E_CONSTANT(chpl_ftable, chpl_fn_p*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT | (TODO NOT USED)
    Length of the function table.
*/
E_CONSTANT(chpl_ftableSize, int64_t)

/** MODULE-CODE: ChapelLocale.chpl | PER-PROGRAM-CALLBACK
    Call to increment the task running count.
*/
E_CALLBACK(chpl_taskRunningCntInc)

/** MODULE-CODE: ChapelLocale.chpl | PER-PROGRAM-CALLBACK (TODO NOT USED)
    Call to decrement the task running count.
*/
E_CALLBACK(chpl_taskRunningCntDec)

/** MODULE-CODE: ChapelLocale.chpl | PER-PROGRAM-CALLBACK
    Call to reset the task running count.
*/
E_CALLBACK(chpl_taskRunningCntReset)

/** CODE-GENERATED | PER-PROGRAM-CALLBACK
    Function which constructs the config variable table.
*/
E_CALLBACK(CreateConfigVarTable)

/** CODE-GENERATED | MODULE-INIT | PER-PROGRAM-CALLBACK
    Module initializer which contains all string literals.
*/
E_CALLBACK(chpl__initStringLiterals)

/** CODE-GENERATED | MODULE-INIT | PER-PROGRAM-CALLBACK
    Module initializer which invokes (almost) all other module inits.
*/
E_CALLBACK(chpl__init_preInit)

/** CODE-GENERATED | MODULE-INIT | PER-PROGRAM-CALLBACK
    Module initializer for the 'PrintModuleInitOrder' module.
*/
E_CALLBACK(chpl__init_PrintModuleInitOrder)

/** CODE-GENERATED | MODULE-INIT | PER-PROGRAM-CALLBACK
    Module initializer for the 'ChapelStandard' module.
*/
E_CALLBACK(chpl__init_ChapelStandard)

/** MODULE-CODE: ChapelUtil.chpl | PER-PROGRAM-CALLBACK
    Deinitializes modules and prints the deinit order if needed.
    TODO: Why the heck is this in module code but the rest isn't?
    TODO: Can the generated code just be responsible for all this?
*/
E_CALLBACK(chpl_deinitModules)

/** CODE-GENERATED | MAIN | PER-PROGRAM-CALLBACK
    Main entrypoint for this program.
*/
E_CALLBACK(chpl_gen_main)

/** MODULE-CODE: ExportWrappers.chpl | PER-PROGRAM-CALLBACK
    Currently only initializes the dynamic end count.
*/
E_CALLBACK(chpl_libraryModuleLevelSetup)

/** MODULE-CODE: ExportWrappers.chpl | PER-PROGRAM-CALLBACK
    Currently only destroys the dynamic end count.
*/
E_CALLBACK(chpl_libraryModuleLevelCleanup)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Contains filenames, and maybe other strings besides?
*/
E_CONSTANT(chpl_filenameTable, c_string*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Length of the filename table.
*/
E_CONSTANT(chpl_filenameTableSize, int32_t)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Contains strings that describe allocation types.

    // The compiler generates a separate array of descriptions for the
    // allocation types it defines.  Indices into that compiler-generated
    // array conceptually start after the CHPL_RT_MD_NUM enum value in
    // chpl-mem.h).  This is that compiler-generated array, and how many
    // entries it has (also defined in the generated code).
*/
E_CONSTANT(chpl_mem_descs, const char**)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Length of the memory description table.
*/
E_CONSTANT(chpl_mem_numDescs, int)

/** MODULE-CODE: MemTracking.chpl | PER-PROGRAM-CALLBACK
    This is a giant callback which writes the config vars used to control
    memory tracking to runtime memory.
*/
E_CALLBACK(chpl_memTracking_returnConfigVals)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Compiler invocation.
*/
E_CONSTANT(chpl_compileCommand, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Directory where the compiler invocation took place (?).
*/
E_CONSTANT(chpl_compileDirectory, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Directory to save temporary compilation artifacts.
*/
E_CONSTANT(chpl_saveCDir, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Location of '$CHPL_HOME' (when this was compiled?).
*/
E_CONSTANT(CHPL_HOME, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    If '--cache-remote' was set when this program was compiled.
*/
E_CONSTANT(CHPL_CACHE_REMOTE, int)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    If '--warn-unstable' was set when this program was compiled.
*/
E_CONSTANT(warnUnstable, int)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Location of LLVM binary directory (I don't see where this is set?).
*/
E_CONSTANT(CHPL_LLVM_BIN_DIR, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    One piece of the symbol table. This is a flat 1D array with 2 elements
    per entry, so you need to scale indices by (idx*2). This portion of
    the table contains two 'c_int' per entry: (Chapel file name index,
    Chapel line number). TODO: Could we just refactor this whole table
    to be defined in the runtime and use a 'struct' instead for clarity?
*/
E_CONSTANT(chpl_filenumSymTable, int*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    One piece of the symbol table. This is a flat 1D array with 2 elements
    per entry, so you need to scale indices by (idx*2). This portion of
    the table contains two 'const char*' per entry: (C name, Chapel name).
*/
E_CONSTANT(chpl_funSymTable, const char**)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    The number of entries in the combined 'Chapel symbol table'.
*/
E_CONSTANT(chpl_sizeSymTable, int32_t)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '$CHPL_UNWIND' when this program was compiled.
*/
E_CONSTANT(CHPL_UNWIND, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '--interleave-memory' when this program was compiled.
*/
E_CONSTANT(CHPL_INTERLEAVE_MEM, const char*)

/** MODULE-CODE: LocaleModel.chpl | PER-PROGRAM-CALLBACK
    Convert from a full sublocale to an execution sublocale.

    // These functions are exported from the locale model for use by
    // the tasking layer to convert between a full sublocale and an
    // execution sublocale.
*/
E_CALLBACK(chpl_localeModel_sublocToExecutionSubloc)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '$CHPL_COMM' when this program was compiled.
*/
E_CONSTANT(CHPL_COMM, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '--stack-checks' when this program was compiled.
*/
E_CONSTANT(CHPL_STACK_CHECKS, int)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '$CHPL_TARGET_PLATFORM' when this program was compiled.
*/
E_CONSTANT(CHPL_TARGET_PLATFORM, const char*)

/** CODE-GENERATED | PER-PROGRAM-CALLBACK
    Call to heap allocate all global variables.
*/
E_CALLBACK(chpl__heapAllocateGlobals)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Table containing function info.
*/
E_CONSTANT(chpl_finfo, const chpl_fn_info*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '$CHPL_LOCALE_MODEL' when this program was compiled.
*/
E_CONSTANT(CHPL_LOCALE_MODEL, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '$CHPL_TARGET_CPU' when this program was compiled.
*/
E_CONSTANT(CHPL_TARGET_CPU, const char*)

/** CODE-GENERATED | PER-PROGRAM-CONSTANT
    Value of '$CHPL_GASNET_SEGMENT' when this program was compiled.
*/
E_CONSTANT(CHPL_GASNET_SEGMENT, const char*)

/// -------------- ///
/// QIO Plugin API ///
/// -------------- ///

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Create a plugin channel to attach to the qio channel.
*/
E_CALLBACK(chpl_qio_setup_plugin_channel)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Reads 'amt' bytes (or more) into the channel buffer.
*/
E_CALLBACK(chpl_qio_read_atleast)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Writes 'amt' bytes from the channel buffer.
*/
E_CALLBACK(chpl_qio_write)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Close the channel.
*/
E_CALLBACK(chpl_qio_channel_close)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Get the length of a file.
*/
E_CALLBACK(chpl_qio_filelength)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Get the path to a file.
*/
E_CALLBACK(chpl_qio_getpath)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Performs a 'fsync' operation.
*/
E_CALLBACK(chpl_qio_fsync)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Get the optimal I/O size for the channel.
*/
E_CALLBACK(chpl_qio_get_chunk)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Get the locales for a region. The 'localeNamesPtr' should be a pointer
    to an array of 'char*' to set on output.
*/
E_CALLBACK(chpl_qio_get_locales_for_region)

/** MODULE-CODE: IO.chpl | PER-PROGRAM-CALLBACK
    Close a file.
*/
E_CALLBACK(chpl_qio_file_close)
