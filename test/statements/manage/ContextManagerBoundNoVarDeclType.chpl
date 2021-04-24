use TrackingRecord;

proc r.enterThis() ref {
  writeln('entering ref');
  return this;
}

proc r.enterThis() {
  writeln('entering val');
  return this;
}

proc r.leaveThis() {
  writeln('leaving');
}

proc r.foo() {
  writeln('foo');
}

proc test1() {
  writeln('T1');
  manage new r() as myManager {
    writeln('in block');
    myManager.foo();
  }
}
test1();

