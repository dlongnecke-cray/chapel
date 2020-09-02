// Test ref tuple variables composed of locals.
record r { var x: int = 0; }

var g1 = 0;
var g2 = new r();
var g3 = (0, new r());

proc test1() {
  writeln(g1);
  writeln(g2);

  ref foo = (g1, g2);
  foo[0] = 0;
  foo[1] = new r(128);

  writeln(g1);
  writeln(g2);
}
test1();

proc test2() {
  writeln(g3);

  ref foo = g3;
  foo[0] = 0;
  foo[1] = new r(128);

  writeln(g3);
}
test2();

