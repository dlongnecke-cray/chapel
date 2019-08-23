private use Lists;

config const testIters = 8;

for i in 1..testIters do
  lst.append(i);

var arr: [1.testIters] int = 1..testIters;

for (x, y) in zip(lst, arr) do
  assert(x == y);


