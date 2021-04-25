use Memory.Initialization;
use TrackingRecord;
use Map;

// Demonstrate using a context manager without a bound resource.
proc test1() {
  writeln('T1: context manager');

  proc r.enterThis() { writeln('entering'); }
  proc r.leaveThis() { writeln('leaving'); }

  manage new r() do
    writeln('in context manager');
}
test1();
writeln();

// Demonstrate using a context manager that returns a number as a resource.
proc test2() {
  writeln('T2: context manager with resource');

  proc r.enterThis() { writeln('entering'); return 32; }
  proc r.leaveThis() { writeln('leaving'); }

  manage new r() as var number {
    writeln('in context manager');
    writeln(number);
  }
}
test2();
writeln();

// Demonstrate using a context manager to resize an array of non-nilable.
proc test3() {
  writeln('T3: resizing non-nilable array with context manager');

  class C { var x = 0; }

  var D = {0..0};
  var A: [D] shared C = [new shared C(1)];

  writeln(A);

  manage D.unsafeResize({0..1}, checks=true) do
    moveInitialize(A[1], new shared C(2));

  writeln(A);
}
test3();
writeln();

// Demonstrate using a context manager to guard a key in a map.
proc test4() {
  writeln('T4: context manager to guard a map key');

  var m: map(int, int, parSafe=true);
  var arr = [1,2,2,3,3,3];

  forall x in arr with (ref m) do
    if !m.add(x, 1) then
      manage m.guard(x) as ref v do
        v += 1;

  writeln(m);
}
test4();

