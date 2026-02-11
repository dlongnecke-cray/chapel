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

module ChapelRuntimeInterface {
  use ChapelBase, CTypes, ChapelProgramRegistration;
  use Reflection;

  param debugRuntimeCalls = true;

  // Alias for 'char**' to be used as the type of 'argv'.
  type c_argArray = c_ptr(c_ptr(c_char));

  inline proc infoPtrHere do return chpl_programInfoHere.asPtr();

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

  pragma "insert line file info"
  pragma "always propagate line file info"
  inline proc debugf(param procInfo: string, args...) {
    if !debugRuntimeCalls then return;

    const lineInfo = __primitive('_get_user_line');
    const fileIdx = __primitive('_get_user_file');
    const fileInfo = chpl_filenameFromIdx(fileIdx);

    writeln('[', procInfo, ' in modules ', fileInfo, ':', lineInfo, '] ',
            'P', chpl_programInfoHere.id, ': ', (...args));
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
}
