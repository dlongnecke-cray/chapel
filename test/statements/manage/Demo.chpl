use Memory.Initialization;
use TrackingRecord;
use Map;

enum Demo { None, All, Unbound, Bound, Resize, Guard, Relock };

// Demonstrate using a context manager without a bound resource.
proc demo1() {
  writeln('Unbound: context manager');

  // These methods are required for 'r' to be used as a manager.
  proc r.enterThis() { writeln('entering'); }
  proc r.leaveThis() { writeln('leaving'); }

  // Call r.enterThis(), execute the block, then r.leaveThis():
  manage new r() do
    writeln('in context manager');
}

// Demonstrate using a context manager that returns a number as a resource.
proc demo2() {
  writeln('Bound: context manager with resource');

  // This time, we have enterThis() return an int as a resource.
  proc r.enterThis() { writeln('entering'); return 32; }
  proc r.leaveThis() { writeln('leaving'); }

  // We gain access to 'number' within the managed block.
  manage new r() as var number {
    writeln('in context manager');
    writeln(number);
  }
}

// Demonstrate using a context manager to resize an array of non-nilable.
proc demo3() {
  writeln('Resize: resizing non-nilable array with context manager');

  class C { var x = 0; }

  // Getting deja vu here...
  var D = {0..0};
  var A: [D] shared C = [new shared C(1)];

  writeln(A);

  // Trust me, the checks _are_ happening...
  manage D.unsafeResize({0..1}, checks=true) do
    moveInitialize(A[1], new shared C(2));

  writeln(A);
}

// Demonstrate using a context manager to guard a key in a map.
proc demo4() {
  writeln('Guard: context manager to guard a map key');

  var m: map(int, int, parSafe=true);
  var arr = [1,2,2,3,3,3];

  // This loop builds up a frequency table from the elements of arr.
  // The wonderful thing is how elegant and easy this is to write.
  // The manager for map.guard() will automatically unlock the map
  // for us no matter how we exit the block (normally or by throw).
  forall x in arr with (ref m) do
    if !m.add(x, 1) then
      manage m.guard(x) as ref v do
        v += 1;

  writeln(m);
}

// Demonstrate halt that occurs if a map method is called within guard.
proc demo5() {
  writeln('Relock: halt if map method is called in guard');

  var m: map(int, int, parSafe=true);
  m.add(0, 0);

  // One of the biggest problems with map.guard() is that there is
  // nothing that prevents the user from calling a map method within
  // the scope of the block. We can do a bit better than a straight
  // up deadlock, though. Now a duplicate lock call by the same task
  // will cause the map to halt the program.
  var x = 0;
  manage m.guard(x) as ref v {

    // This will trigger the map to halt.
    const check = m.contains(x);
    writeln(check);
  }
}

proc printDemoOptions() {
  write('Select a demo. Options: ');
  for demo in Demo do write(demo, ' ');
  writeln();
}

proc runAllDemos() {
  for demo in [demo1, demo2, demo3, demo4, demo5] {
    demo();
    writeln();
  }
}

config const demo = Demo.None;

proc main() {
  select demo {
    when Demo.None do printDemoOptions();
    when Demo.All do runAllDemos();
    when Demo.Unbound do demo1();
    when Demo.Bound do demo2();
    when Demo.Resize do demo3();
    when Demo.Guard do demo4();
    when Demo.Relock do demo5();
    otherwise do halt('Should never reach here...');
  }
}

