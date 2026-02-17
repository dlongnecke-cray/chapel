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

/***
  This module contains shims which wrap calls to functions from the runtime.
  Any function marked with 'chapel runtime shim' is such a shim. Also, if a
  function in this module is marked with 'export', it is usually because
  either the compiler needs to see it at codegen, or because the runtime will
  need to access it (indirectly, through 'chpl_program_info').

  ---

  Another longterm TODO is to prefix every single runtime funtion with the
  prefix 'chpl_rt_'. That, coupled with 'chapel runtime shim', will make it
  possible for the compiler to mark all calls to runtime functions.
*/
module ChapelRuntimeInterface {
  use ChapelBase, CTypes, ChapelProgramRegistration;
  use Reflection;

  param debugRuntimeCalls = true;

  // Alias for 'char**' to be used as the type of 'argv'.
  type c_argArray = c_ptr(c_ptr(c_char));

  extern type wide_ptr_t;

  inline proc infoPtrHere do return chpl_programInfoHere.asPtr();

  // The chpl_localeID_t type is used internally.  It should not be exposed to
  // the user.  The runtime defines the actual type, as well as a functional
  // interface for assembling and disassembling chpl_localeID_t values.  This
  // module then provides the interface the compiler-emitted code uses to do
  // the same.
  extern record chpl_localeID_t {
    // We need to know that this is a record type in order to pass it to and
    // return it from runtime functions properly, but we don't need or want
    // to see its contents.
  };

  extern record chpl_comm_on_bundle_t {
  };

  extern record chpl_task_bundle_t {
  };

  // TODO (dlongnecke): Drop and replace with 'c_ptr(chpl_comm_on_bundle_t).
  extern type chpl_comm_on_bundle_p;

  proc chpl_comm_on_bundle_p.serialize(writer, ref serializer) throws {
    const ptr = c_ptrToConst(this);
    ptr.serialize(writer, serializer);
  }

  // TODO (dlongnecke): Drop and replace with 'c_ptr(chpl_task_bundle_t).
  extern type chpl_task_bundle_p;

  proc chpl_task_bundle_p.serialize(writer, ref serializer) throws {
    const ptr = c_ptrToConst(this);
    ptr.serialize(writer, serializer);
  }

  // Lookup a filename without calling the runtime on the per-program path.
  inline proc chpl_filenameFromIdx(idx: int(32)): string {
    if idx < 0 {
      const ptr = chpl_lookupBuiltinFilenameDescriptor(idx);
      return try! string.createBorrowingBuffer(ptr);
    }

    extern const chpl_filenameTableSize: int(32);
    extern const chpl_filenameTable: c_ptr(c_ptrConst(c_char));

    if idx >= chpl_filenameTableSize then return '<unknown file>';

    const ptr = chpl_filenameTable[idx];
    return try! string.createBorrowingBuffer(ptr);
  }

  export /** So compiler can see it easily at codegen. */
  proc chpl_registerGlobalVar(idx: int(32), ptrToWidePtr: c_ptr(wide_ptr_t)) {
    // Extern, but declared by the compiler and lives in program code.
    extern var chpl_globals_registry: c_ptr(c_ptr(wide_ptr_t));
    chpl_globals_registry[idx] = ptrToWidePtr;
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc debugf(param procName: string, args...?n) {
    if !debugRuntimeCalls then return;

    const lineInfo = __primitive('_get_user_line');
    const fileIdx = __primitive('_get_user_file');
    const fileName = chpl_filenameFromIdx(fileIdx);

    extern record chpl_rt_debugf_arg {
      var typeStr: c_ptrConst(c_char);
      var dataPtr: c_ptr(void);
    }

    extern 'chpl_rt_debugfChapelHook'
      proc fn(prg: c_ptr(chpl_program_info),
              args: c_ptr(chpl_rt_debugf_arg),
              numArgs: uint(64)): void;

    proc remapChapelTypeToCTypeStr(type t) param {
      proc impl(type t: int(?w)) param do return 'int' + w:string + '_t';
      proc impl(type t: uint(?w)) param do return 'uint' + w:string + '_t';
      proc impl(type t: real(32)) param do return 'float';
      proc impl(type t: real(64)) param do return 'double';
      proc impl(type t: string) param do return 'const char*';
      proc impl(type t: c_ptr(?et)) param do return impl(et) + '*';
      proc impl(type t: c_ptrConst(?et)) param
        do return 'const ' + impl(et) + '*';
      proc impl(type t) param do return t:string;
      return impl(t);
    }

    inline proc prepareArg(const ref arg) {
      const ptr = __primitive('cast', c_ptr(void), c_ptrToConst(arg));
      param str = remapChapelTypeToCTypeStr(arg.type);
      const dsc = str : c_ptrConst(c_char);
      return new chpl_rt_debugf_arg(dsc, ptr);
    }

    // Prepare an argument: a string literal describing (printing) the type,
    // and a 'void*' to the argument data.
    inline proc prepareArgs(const ref args...?n) {
      var ret: c_array(chpl_rt_debugf_arg, n);
      for param i in 0..<n do ret[i] = prepareArg(args[i]);
      return ret;
    }

    var arr = prepareArgs('[', procName, ' in modules ', fileName, ':',
                          lineInfo, '] P', chpl_programInfoHere.id, '@L',
                          chpl_nodeID, ': ', (...args));
    var ptr = arr : c_ptr(chpl_rt_debugf_arg);

    fn(infoPtrHere, ptr, arr.size);
  }

  // TODO: Have this pragma imply "always propagate..." and "insert line...".
  pragma "chapel runtime shim"
  proc chpl_lookupBuiltinFilenameDescriptor(idx: int(32)): c_ptrConst(c_char) {
    extern 'chpl_rt_lookupBuiltinFilenameDescriptor'
      proc fn(idx: int(32)): c_ptrConst(c_char);
    return fn(idx);
  }

  pragma "chapel runtime shim"
  proc chpl_initProgramStandardModules(): void {
    extern 'chpl_rt_initProgramStandardModules'
      proc fn(prg: c_ptr(chpl_program_info)): void;
    fn(infoPtrHere);
  }

  pragma "chapel runtime shim"
  proc chpl_initChapelRuntime(argc: c_int, argv: c_argArray): void {
    extern 'chpl_rt_init'
      proc fn(argc: c_int, argv: c_argArray): void;
    fn(argc, argv);
  }

  pragma "chapel runtime shim"
  export /** So compiler can see it easily at codegen. */
  proc chpl_comm_broadcastGlobalVars(): void {
    extern 'chpl_rt_comm_broadcastGlobalVars'
      proc fn(prg: c_ptr(chpl_program_info)): void;
    fn(infoPtrHere);
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc chpl_task_addTask(fid: int, args: chpl_task_bundle_p,
                         args_size: c_size_t,
                         subloc_id: int) {
    pragma "insert line file info"
    pragma "always propagate line file info"
    extern 'chpl_rt_task_addTask'
      proc fn(prg: c_ptr(chpl_program_info), fid: int,
              args: chpl_task_bundle_p,
              args_size: c_size_t,
              subloc_id: int): void;

    if debugRuntimeCalls {
      debugf(getRoutineName(), 'fid: ', fid, ', args: ', args,
                               ', args_size: ', args_size,
                               ', subloc_id: ', subloc_id);
    }

    fn(infoPtrHere, fid, args, args_size, subloc_id);
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc chpl_comm_taskCallFtableEntry(fid: int, args: chpl_comm_on_bundle_p,
                                     args_size: c_size_t,
                                     subloc_id: int) {
    pragma "insert line file info"
    pragma "always propagate line file info"
    extern 'chpl_rt_comm_taskCallFtableEntry'
      proc fn(prg: c_ptr(chpl_program_info), fid: int,
              args: chpl_comm_on_bundle_p,
              args_size: c_size_t,
              subloc_id: int): void;

    if debugRuntimeCalls {
      debugf(getRoutineName(), 'fid: ', fid, ', args: ', args,
                               ', args_size: ', args_size,
                               ', subloc_id: ', subloc_id);
    }

    fn(infoPtrHere, fid, args, args_size, subloc_id);
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc chpl_callFtableEntryHere(fid: int, args: c_ptr(void)) {
    // TODO: No need to actually call into the runtime to do this.
    extern 'chpl_rt_callFtableEntryHere'
      proc fn(prg: c_ptr(chpl_program_info), fid: int,
              bundle: c_ptr(void)): void;

    if debugRuntimeCalls {
      debugf(getRoutineName(), 'fid: ', fid, ', args: ', args);
    }

    fn(infoPtrHere, fid, args);
  }

  inline proc chpl_callFtableEntryHere(fid: int, args: chpl_comm_on_bundle_p) {
    const ptr = __primitive('cast', c_ptr(void), args);
    chpl_callFtableEntryHere(fid, ptr);
  }

  inline proc chpl_callFtableEntryHere(fid: int, args: chpl_task_bundle_p) {
    const ptr = __primitive('cast', c_ptr(void), args);
    chpl_callFtableEntryHere(fid, ptr);
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc chpl_comm_execute_on(node: int, subloc: int, fid: int,
                            arg: chpl_comm_on_bundle_p,
                            arg_size: c_size_t) {
    if debugRuntimeCalls {
      debugf(getRoutineName(), 'node: ', node, ', subloc: ', subloc,
                               ', fid: ', fid, ', arg: ', arg, ', arg_size: ',
                               arg_size);
    }

    pragma "insert line file info"
    pragma "always propagate line file info"
    extern 'chpl_rt_comm_executeOn'
      proc fn(node: int, subloc: int, fid: int,
              arg: chpl_comm_on_bundle_p,
              arg_size: c_size_t): void;
    fn(node, subloc, fid, arg, arg_size);
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc chpl_comm_execute_on_fast(node: int, subloc: int, fid: int,
                                 arg: chpl_comm_on_bundle_p,
                                 arg_size: c_size_t) {
    if debugRuntimeCalls {
      debugf(getRoutineName(), 'node: ', node, ', subloc: ', subloc,
                               ', fid: ', fid, ', arg: ', arg, ', arg_size: ',
                               arg_size);
    }

    pragma "insert line file info"
    pragma "always propagate line file info"
    extern 'chpl_rt_comm_executeOnFast'
      proc fn(node: int, subloc: int, fid: int,
              arg: chpl_comm_on_bundle_p,
              arg_size: c_size_t): void;
    fn(node, subloc, fid, arg, arg_size);
  }

  pragma "chapel runtime shim"
  pragma "insert line file info"
  pragma "always propagate line file info"
  proc chpl_comm_execute_on_nb(node: int, subloc: int, fid: int,
                               arg: chpl_comm_on_bundle_p,
                               arg_size: c_size_t) {
    if debugRuntimeCalls {
      debugf(getRoutineName(), 'node: ', node, ', subloc: ', subloc,
                               ', fid: ', fid, ', arg: ', arg, ', arg_size: ',
                               arg_size);
    }

    pragma "insert line file info"
    pragma "always propagate line file info"
    extern 'chpl_rt_comm_executeOnNonBlocking'
      proc fn(node: int, subloc: int, fid: int,
              arg: chpl_comm_on_bundle_p,
              arg_size: c_size_t): void;
    fn(node, subloc, fid, arg, arg_size);
  }
}
