/*
 * Copyright 2020-2021 Hewlett Packard Enterprise Development LP
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
 * Collection of mutexes/locks.
 */
module ChapelLocks {
  private use Atomics, ChapelBase;
  private use MemConsistency;
  /*
   * Local processor atomic spinlock. Intended for situations with minimal
   * contention or very short critical sections.
   */
  pragma "default intent is ref"
  record chpl_LocalSpinlock {
    var l: chpl__processorAtomicType(bool);

    // override compiler-generated default initializer because we don't
    // ever want/need to pass an atomic into it (and someday it'll
    // just take bool rather than atomic bool, and until then, we get
    // a --warn-unstable error)
    proc init() {
    }

    inline proc lock() {
      on this do
        while l.read() || l.testAndSet(memoryOrder.acquire) do
          chpl_task_yield();
    }

    inline proc unlock() {
      l.clear(memoryOrder.release);
    }
  }

  //
  // An attempt at a spinlock that is aware of the task currently holding it.
  // The lock() method will return true if the task holding the lock tries
  // to lock it again, and the unlock() method will return true if a task not
  // holding the lock tried to unlock it.
  //
  // The reason why this behavior is useful is for the implementation of the
  // map.guard() method. If a task that has called map.guard() tries to call
  // a method on the same map, it will deadlock. By using this spinlock, the
  // map can issue a halt instead (or even throw, depending on the method).
  //
  class chpl_TaskAwareSpinlock {
    var flag: atomic bool;
    var task: atomic uint;

    proc init() {}

    inline proc _getTaskId(): uint {
      extern proc chpl_task_getId(): uint;
      return chpl_task_getId();
    }

    inline proc _getNullTaskId(): uint {
      extern const chpl_nullTaskID: uint;
      return chpl_nullTaskID;
    }

    // TODO: Tune the busy-wait loop number...
    inline proc ref _acquireLock(): bool {
      var counter = 16;
      while counter do
        if flag.read() || flag.testAndSet(memoryOrder.acquire) {
          counter -= 1;
        } else {
          task.write(_getTaskId());
          return true;
        }

      return false;
    }

    // Returns true if a task already holding the lock tried to lock it.
    proc ref lock(): bool {
      var result = false;

      on this do
        while !_acquireLock() do
          if task.read() == _getTaskId() {
            result = true;
            break;
          } else {
            chpl_task_yield();
          }

      return result;
    }

    // Returns true if a task not holding the lock tried to unlock it.
    proc ref unlock(): bool {
      var result = false;
      on this do
        if task.read() != _getTaskId() {
          result = true;
        } else {
          task.write(_getNullTaskId(), memoryOrder.release);
          flag.clear(memoryOrder.release);
        }

      return result;
    }
  }
}
