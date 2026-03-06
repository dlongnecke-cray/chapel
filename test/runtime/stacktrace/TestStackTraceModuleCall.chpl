proc test0() {
  use ChapelRuntimeInterface;
  const str = chpl_stackTraceString();
  writeln(str);
}

proc test1() do test0();
proc test2() do test1();
proc test3() do test2();

proc main() {
  test3();
}
