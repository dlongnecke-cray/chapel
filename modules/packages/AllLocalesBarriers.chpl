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

/*
  Support for a scalable global barrier between all locales.

  This module provides a single global barrier named :var:`allLocalesBarrier` that
  can be used as a barrier between all locales, optionally with multiple tasks
  per locale.

  The :var:`allLocalesBarrier` barrier only supports the
  :proc:`~Collectives.barrier.barrier()` and
  :proc:`~Collectives.barrier.reset()` methods of the
  :attr:`~Collectives.barrier` interface. By default it can be
  used as a barrier between 1 task on each locale. The
  :proc:`~Collectives.barrier.reset()` method can be used to change how
  many tasks per locale will participate in each barrier.

  Use of this barrier is similar to ``shmem_barrier_all()`` or
  ``MPI_Barrier(MPI_COMM_WORLD)``, except that it's possible for multiple
  tasks on the same locale to barrier. In the following examples all tasks
  will print "Before barrier" before any print "After barrier"

  .. literalinclude:: ../../../../test/library/packages/AllLocalesBarriers/doc-examples/AllLocalesBarriersExamples.chpl
     :language: chapel
     :start-after: START_EXAMPLE
     :end-before: STOP_EXAMPLE

  The implementation is dependent on the communication layer and the
  underlying hardware, but typically some sort of tree or dissemination based
  barrier that's optimized for the network will be used.
*/
module AllLocalesBarriers {
  use BlockDist, Collectives;

  private const BarrierSpace = LocaleSpace dmapped new blockDist(LocaleSpace);
  private var globalBarrier = [BarrierSpace] new unmanaged aBarrier(1, reusable=true, procAtomics=true, hackIntoCommBarrier=true);
  private proc deinit() { [b in globalBarrier] delete b; }

  @chpldoc.nodoc
  class AllLocalesBarrier: BarrierBaseType {

    override proc barrier() {
      globalBarrier.localAccess[here.id].barrier();
    }

    proc reset(numTasksPerLocale: int) {
      [b in globalBarrier] b.reset(numTasksPerLocale);
    }
  }
  const allLocalesBarrier: AllLocalesBarrier = new AllLocalesBarrier();
}
