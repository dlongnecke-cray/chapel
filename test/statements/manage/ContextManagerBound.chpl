use TrackingRecord;

proc r.enterThis() ref {
  writeln('entering');
  return this;
}

proc r.leaveThis() {
  writeln('leaving');
}

proc r.foo() {
  writeln('foo');
}

proc test() {
  manage new r() as myManager {
    writeln('in block');
    myManager.foo();
  }
}
test();

