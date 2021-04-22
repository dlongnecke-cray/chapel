use Memory.Initialization;

class C { var x = 0; }

proc test() {
  var D = {0..0};
  var A: [D] shared C = [new shared C()];

  writeln(A);

  manage D.unsafeResize({0..1}) {
    moveInitialize(A[1], new shared C());
  }

  writeln(A);
}
test();

