use Map;

proc test() {
  var m: map(int, int, parSafe=true);
  m.add(0,0);

  var x = 0;
  manage m.guard(x) as ref v do
    writeln(m.contains(x));
}
test();

