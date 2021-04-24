use TrackingRecord;

proc r.enterThis() ref {
  writeln('proc enterThis() ref: r');
  return this;
}

proc r.enterThis() const ref {
  writeln('proc enterThis() const ref: r');
  return this;
}

proc r.enterThis() {
  writeln('proc enterThis(): r');
  return this;
}

proc r.leaveThis() {
  writeln('leaving');
}

proc r.foo() {
  writeln('foo');
}

proc doSomething(myResource) {
  writeln('doing something');
  myResource.foo();
}

proc test1() {
  writeln('T1');
  writeln('Declaring resource alias as \'var\'');
  manage new r() as var myResource {
    doSomething(myResource);
  }
}
test1();

proc test2() {
  writeln('T2');
  writeln('Declaring resource alias as \'ref\'');
  manage new r() as ref myResource {
    doSomething(myResource);
  }
}
test2();

proc test3() {
  writeln('T3');
  writeln('Declaring resource alias as \'const ref\'');
  manage new r() as const ref myResource {
    doSomething(myResource);
  }
}
test3();

proc test4() {
  writeln('T4');
  writeln('Declaring resource alias as \'var\'');
  var manager = new r();
  manage manager as var myResource {
    doSomething(myResource);
  }
  manager;
}
test4();

proc test5() {
  writeln('T5');
  writeln('Declaring resource alias as \'ref\'');
  var manager = new r();
  manage manager as ref myResource {
    doSomething(myResource);
  }
  manager;
}
test5();

proc test6() {
  writeln('T6');
  writeln('Declaring resource alias as \'const ref\'');
  var manager = new r();
  manage manager as const ref myResource {
    doSomething(myResource);
  }
  manager;
}
test6();

