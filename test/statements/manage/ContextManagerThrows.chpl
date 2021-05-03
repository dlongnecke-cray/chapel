use TrackingRecord;

proc r.enterThis() { writeln('enter'); return 32; }

proc test1() {

  // Leave and then rethrow the error we were given.
  proc r.leaveThis(e: owned Error?) throws {
    writeln('leave');
    if e then throw e;
  }

  // TODO: What happens when we throw within the context manager?
  manage var res1 in new r() {
    throw new Error('Something terrible has happened!');
  }

}
test1();

