use Map;

proc test() {
  var g;
  {
    const k = 0;
    var m: map(int, int, parSafe=true);

    // Lifetime error here because G cannot outlive M (check occurs
    // implicitly because guard contains a borrowed).
    g = m.guard(k);
  }
}
test();

