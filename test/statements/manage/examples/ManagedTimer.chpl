use Time;

proc demo() {
  var t = new Timer();
  manage t {
    sleep(5);
  }
  var elapsed: int = t.elapsed():int;
  writeln(elapsed);
}
demo();

