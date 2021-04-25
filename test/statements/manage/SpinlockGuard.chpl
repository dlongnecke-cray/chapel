use ChapelLocks;
use TrackingRecord;
use List;

record spinlock {
  type T;
  var lock = new ChapelLocks.chpl_LocalSpinlock();
  var data: T;

  proc init(type T) {
    this.T = T;
    this.data = new T();
  }

  proc ref enterThis() ref {
    lock.lock();
    return data;
  }

  proc leaveThis() {
    lock.unlock();
  }
}

config const hi = 16;

proc test() {
  var lockedList = new spinlock(list(int));

  // TODO: If I remove the task-intent clause the whole thing breaks.
  coforall i in 1..#hi with (ref lockedList) do
    manage lockedList as ref lst do
      lst.append(i);

  manage lockedList as ref lst {
    lst.sort();
    writeln(lst);
  }
}
test();

