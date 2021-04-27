use Map;

proc test() {
  proc makeGuard() {
    var m: map(int, int, parSafe=true);
    var k = 0;

    // Lifetime error here because G cannot outlive M (check occurs
    // implicitly because G contains a borrowed).
    return m.guard(k);
  }

  // The guard should not be able 
  var guard = makeGuard();
  writeln(guard);
}
test();

