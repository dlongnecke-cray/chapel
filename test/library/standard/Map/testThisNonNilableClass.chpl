//
// #14861 - Support maps of non-nilable classes by providing a `map.this`
// overload that halts if the `map.valType` is not default initializable
// and the key to be accessed is not in the map.
//

use Map;

class SomeClass { var x: int = 0; }

enum TestMode {
  NoElements,
  OneElement,
  AssignNil,
  BadKey,
  Iterate
}

type TestClass = shared SomeClass;

config param testMode = TestMode.NoElements;

// This should fail because the key is not in the map.
proc runTest(ref m) where testMode == TestMode.NoElements {
  m[1] = new TestClass();
}

proc runTest(ref m) where testMode == TestMode.OneElement {
  m.add(1, new TestClass(32));
  assert(m[1].x == 32);
  m[1] = new TestClass(64);
  assert(m[1].x == 64);
}

proc runTest(ref m) where testMode == TestMode.AssignNil {
  m.add(1, new TestClass(32));
  assert(m[1].x == 32);
  // Should fail.
  m[1] = nil;
}

proc runTest(ref m) where testMode == TestMode.BadKey {
  m.add(1, new TestClass(32));
  assert(m[1].x == 32);
  m[1].x = 64;
  assert(m[1].x == 64);
  // Intentionally assert on a bad key.
  assert(m[2].x == 64);
}

proc runTest(ref m) where testMode == TestMode.Iterate {
  for i in 1..4 do
    m.add(i, new TestClass(8 * i));

  for i in 1..4 do
    assert(m[i].x == (8 * i));

  for key in m do
    m[key] = new TestClass();

  for i in 5..8 do
    assert(m[i].x == (8 * i));
}

proc runTest(ref m) {
  compilerError("Unsupported test mode.");
}

proc main() {

  // Simple sanity check.
  if !isNonNilableClass(TestClass) then
    compilerError("Test requires non-nilable class type");

  var m: map(int, TestClass, false);

  writeln(m.type:string);

  runTest(m);

  return;
}

