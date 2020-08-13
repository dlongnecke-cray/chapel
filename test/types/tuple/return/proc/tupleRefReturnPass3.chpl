// Function returning tuple of references to object fields. Captured
// in a variable, which means updates are not visible.

record r { var x: int = 0; var y: int = 0; }

proc r.refToFields1() ref {
  return (x, y);
}

proc r.refToFields2() ref: (int, int) {
  return (x, y);
}

// Return type is inferred.
proc test1() {
  var foo = new r();
  writeln(foo);
  var tup = foo.refToFields1();
  tup[0] = 128;
  tup[1] = 256;
  writeln(foo);
}
test1();

// Return type is specified.
proc test2() {
  var foo = new r();
  writeln(foo);
  var tup = foo.refToFields2();
  tup[0] = 128;
  tup[1] = 256;
  writeln(foo);
}
test2();

