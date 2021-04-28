use Map;

proc demo() {
  var m: map(int, int, parSafe=true);
  m.add(0, 0);

  const k = 0;

  // The guard() method locks the map and returns a mutable reference
  // to value mapped to a given key. It serves as a useful alternative
  // to the update() method, which takes some sort of function object.
  manage ref v in m.guard(k) do v += 1;

  writeln(m); // Prints '{0: 1}'
}
demo();

// This function is not called. It is intended to illustrate the current
// limitations of the guard() pattern, and poses some interesting
// questions about the semantics of manage blocks.
proc mapGuardLimitations() {
  var m: map(int, int, parSafe=true);
  m.add(0, 0);

  const k = 0;

  manage ref v in m.guard(k) {

    //
    // Right now, either of these calls would cause the map to deadlock.
    // This is a problem because it limits the usefulness of guard()
    // w.r.t. querying the guarded map for more information. There are
    // a number of ways we could solve this problem:
    //
    // 1) Use a recursive lock
    //
    //    Using a recursive lock would allow the same task to continue
    //    to query the map without fear of deadlock. However, it
    //    opens up the possibility of reference invalidation. Because
    //    the map 'm' is mutable within the scope of the managed block,
    //    a user could call 'm.add()' (as is done below), which might
    //    resize the 'm' and cause 'v' to be invalidated. This is
    //    unacceptable because it defeats one of the primary goals of
    //    the guard() method.
    //
    // 2) Use a read-write lock
    //
    //    By using a read-write lock, we would ensure that any number of
    //    const methods could be called on 'm'. The very obvious problem
    //    with this approach is that the first ref method call (such as
    //    to map.add()) would trigger deadlock. It is possible to build
    //    the RWLock such that a write call by the same task that is
    //    currently reading would cause a halt instead of deadlocking.
    //    This combined with better error messages might make the end
    //    result acceptable.
    //
    // 3) Use a recursive lock + const "task" intents
    //
    //    If we were to apply the notion of task/forall intents to managed
    //    blocks, then we could ensure that only const methods could be
    //    called on 'm'. This would provide the benefits of a recursive
    //    lock without the possibility of reference invalidation. However
    //    this may make some patterns that rely on mutable outer variables
    //    more frustrating/tedious to write.
    //
    // 4) Indirection on the value returned by guard() + recursive lock
    //
    //    It may be possible to have guard() return a "slot/value index"
    //    instead of a naked reference. Assignment to this reference
    //    would cause the map to grab the current slot where the value
    //    lives. The map would have to maintain a list of handles pointing
    //    to any particular spot in the map. Any operation that triggers the
    //    map to be resized would have to atomically swap all the slots
    //    before finally releasing the old memory for the map. This would
    //    somewhat/greatly complicate the engineering of the map. It would
    //    probably require that we move away from using chpl_hashtable,
    //    but not necessarily.
    //
    // 5) Finer grained locking scheme
    //
    //    Any of the above approaches could be combined with a finer grained
    //    locking scheme to produce better results. One advantage of a
    //    finer grained locking scheme is that it might also permit other
    //    tasks to make progress as well when performing actions that might
    //    mutate the map (ref method calls such as add()). This may somewhat
    //    to significantly complicate the  engineering of the map.
    //
    if !m.add(1, 0) then writeln(m.getValue(1));

    // Ideally, the approach we choose should allow other tasks to make
    // progress as well.
    coforall i in 1..3 do
      if m.add(i, 0) then
        manage ref v in m.guard(i) do
          v += 1;
  }
}

