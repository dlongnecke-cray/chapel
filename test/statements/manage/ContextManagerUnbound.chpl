use TrackingRecord;

proc r.enterThis() {
  writeln('entering');
}

proc r.leaveThis() {
  writeln('leaving');
}

proc test() {
  manage new r() {
    writeln('in block');
  }
}
test();

