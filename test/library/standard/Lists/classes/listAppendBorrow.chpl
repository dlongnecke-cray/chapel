pragma "safe"
module SaveBorrowInCollection {

private use Lists;

class MyClass {
  var x: int;
}

var A: list(borrowed MyClass);
A.append(new MyClass());

proc setA(arg: borrowed MyClass) {
  A[1] = arg;
}

var global: borrowed MyClass?;

var globalA: list(borrowed MyClass);
globalA.append(new MyClass());

proc error7(arg: borrowed MyClass) {
  globalA.append(arg);
}

proc test() {
  var x = new owned MyClass(1);
  var b = x.borrow();
  error7(b);
}

test();

}
