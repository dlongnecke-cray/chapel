use ChapelLocks;

proc test() {
  var cs = new chpl_TaskAwareSpinlock();
  var i = 0;
  const (lo, hi) = (0, 16);

  coforall tid in lo..hi with (ref i, ref cs) {
    cs.lock();
    writeln('i: ', i);
    i += 1;
    cs.unlock();
  }
}
test();

