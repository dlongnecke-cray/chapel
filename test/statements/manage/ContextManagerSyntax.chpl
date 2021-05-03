use TrackingRecord;

proc r.enterThis() {
  writeln('entering');
}

proc r.leaveThis(e: owned Error?) {
  writeln('leaving');
}

record rRes {
  var x = new r();

  proc enterThis() ref {
    writeln('proc rRes.enterThis() ref: rRes');
    return this;
  }

  proc enterThis() const ref {
    writeln('proc rRes.enterThis() const ref: rRes');
    return this;
  }

  proc enterThis() {
    writeln('proc rRes.enterThis(): rRes');
    return this;
  }

  proc leaveThis(e: owned Error?) {
    writeln('proc rRes.leaveThis()');
  }

  proc doSomething() {
    writeln('doing something with resource');
  }
}

proc doSomething() {
  writeln('doing something');
}

proc test1() {
  writeln('T1');
  manage new r() do doSomething();
}
test1();

proc test2() {
  writeln('T2');
  manage new r() { doSomething(); }
}
test2();

proc test3() {
  writeln('T3');
  var manager = new r();
  manage manager do doSomething();
}
test3();

// Make sure 'manager1' stays alive till end of block.
proc test4() {
  writeln('T4');
  var manager1 = new r();
  manage manager1, new r() { doSomething(); }
}
test4();

proc test5() {
  writeln('T5');
  var manager1 = new r();
  var manager2 = new r();
  manage manager1, manager2 do
    doSomething();
}
test5();

proc test6() {
  writeln('T6');
  writeln('Resource is var');
  manage var myResource in new rRes() do
    myResource.doSomething();
}
test6();

proc test7() {
  writeln('T7');
  writeln('Resource is ref');
  manage ref myResource in new rRes() do
    myResource.doSomething();
}
test7();

proc test8() {
  writeln('T8');
  writeln('Resource is const ref');
  manage const ref myResource in new rRes() do
    myResource.doSomething();
}
test8();

// Make sure manager survives to end of block.
proc test9() {
  writeln('T9');
  writeln('Resource is var');
  var manager = new rRes();
  manage var myResource in manager do
    myResource.doSomething();
}
test9();

// Make sure manager survives to end of block.
proc test10() {
  writeln('T10');
  writeln('Resource is ref');
  var manager = new rRes();
  manage ref myResource in manager do
    myResource.doSomething();
}
test10();

// Make sure manager survives to end of block.
proc test11() {
  writeln('T11');
  writeln('Resource is const ref');
  var manager = new rRes();
  manage const ref myResource in manager do
    myResource.doSomething();
}
test11();

proc test12() {
  writeln('T12');
  writeln('Mixed resource storage types, managers are new expressions');
  manage var res1 in new rRes(), ref res2 in new rRes(),
      const ref res3 in new rRes() {
    res1.doSomething();
    res2.doSomething();
    res3.doSomething();
  }
}
test12();

proc test13() {
  writeln('T13');
  writeln('Mixed resource storage types, managers are identifiers');
  var manager1 = new rRes();
  var manager2 = new rRes();
  var manager3 = new rRes();
  manage var res1 in manager1, ref res2 in manager2,
      const ref res3 in manager3 {
    res1.doSomething();
    res2.doSomething();
    res3.doSomething();
  }
}
test13();

proc test14() {
  writeln('T14');
  writeln('Mixed resource storage types, use one manager multiple times');
  var manager = new rRes();
  manage var res1 in manager, ref res2 in manager,
      const ref res3 in manager {
    res1.doSomething();
    res2.doSomething();
    res3.doSomething();
  }
}
test14();

