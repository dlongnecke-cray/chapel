use Map;

proc test() {
  {
    var m: map(int, int, parSafe=true);
    {
      const k = 0;

      // This should throw a lifetime error because K does not live longer
      // than M.
      var g = m.guard(k);
    }
  }
}
test();

