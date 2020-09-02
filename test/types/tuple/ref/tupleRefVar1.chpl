// Test ref tuple variables composed of locals.
record r { var x: int = 0; }

proc test1() {
  var a = 0;
  var b = new r();

  writeln(a);
  writeln(b);

  ref foo = (a, b);
  foo[0] = 0;
  foo[1] = new r(128);

  writeln(a);
  writeln(b);
}
test1();

proc test2() {
  var tup = (0, new r());

  writeln(tup);

  ref foo = tup;
  foo[0] = 0;
  foo[1] = new r(128);

  writeln(tup);
}
test2();

