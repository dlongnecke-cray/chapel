use Map;
use Random;

proc homebrewMapEq(m1, m2) {
  if m1.size != m2.size then return false;
  for k in m1.keys() do
    if !m2.contains(k) || (m1.getValue(k) != m2.getValue(k)) then
      return false;
  return true;
}

config const runs = 128;
config const n0 = 2**16;
config const seed = 314159;

proc test() {
  var m1, m2: map(int(8), int, parSafe=true);
  var arr: [0..#n0] int(8);

  fillRandom(arr, seed);

  forall x in arr with (ref m1) do
    if !m1.add(x, 1) then
      manage m1.guard(x) as ref v { v += 1; }

  // TODO: This could be a FCF, some day.
  record incrementer {
    proc this(const ref k, ref v) { v += 1; return none; }
  }

  forall x in arr with (ref m2) {
    if !m2.add(x, 1) then m2.update(x, new incrementer());
  }

  var eq = homebrewMapEq(m1, m2);
  assert(eq);
}

// Run a bunch of times for consistency.
for i in 1..#runs {
  test();
}

