use Memory.Initialization;

class C { var x = 0; }

proc test() {
  var D = {0..0};
  var A: [D] shared C = [new shared C()];

  writeln(A);

  // Intentionally skip initializing an element here...
  manage D.unsafeResize({0..1}, checks=true) {}

  writeln(A);
}
test();

