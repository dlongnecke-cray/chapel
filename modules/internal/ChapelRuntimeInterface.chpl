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

  // Alias for 'char**' to be used as the type of 'argv'.
  type c_argArray = c_ptr(c_ptr(c_char));

  pragma "chapel runtime shim"
  proc chpl_initProgramStandardModules(): void {
    param cname = 'chpl_rt_initProgramStandardModules';
    extern cname proc fn(prg: c_ptr(chpl_program_info)): void;
    fn(chpl_programInfoHere.asPtr());
  }

  pragma "chapel runtime shim"
  proc chpl_initChapelRuntime(argc: c_int, argv: c_argArray): void {
    param cname = 'chpl_rt_init';
    extern cname proc fn(argc: c_int, argv: c_argArray): void;
    fn(argc, argv);
  }
}
