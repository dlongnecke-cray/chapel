private use Lists;

class C {
  var x: int;
}

proc bad1() {
  var A: list(borrowed C);

  {
    var own = new owned C();
    var bb = own.borrow();
    A.append(bb);
  }

  return;
}

bad1();

proc bad2() {
  var A: list(borrowed C);

  {
    var own = new owned C();
    A.append(own);
  }

  return;
}

bad2();

proc ok() {
  var A: list(owned C);

  {
    var own = new owned C();
    A.append(own);
  }

  return;
}

ok();

