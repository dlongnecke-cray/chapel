use TrackingRecord;

proc r.enterThis() {
  writeln('entering');
  return 32;
}

proc r.leaveThis(e: owned Error?) {
  writeln('leaving');
}

proc test1() {
  manage var myResource in new r() {
    writeln('resource: ', myResource);
  }
}
test1();

proc test2() {
  manage var myResource1 in new r(), var myResource2 in new r() {
    writeln('resource1: ', myResource1);
    writeln('resource2: ', myResource2);
  }
}
test2();

