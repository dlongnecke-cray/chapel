use CTypes;

param hi = 64;

extern {
  int foo(int* x);
  int foo(int* x) { return *x; }
}

record rec {
  var x: c_int; 

  inline proc const bar() {
    extern proc foo(const ref x: c_int): c_int;
    return foo(this.x);
  }
}

pragma "locale private"
var recHere: rec;

on Locales.last do recHere.x = 2;

iter iterYieldingInOn(): c_int {
  halt('Should not be called!');
  yield 0;
}

iter iterYieldingInOn(param tag: iterKind): c_int
     where tag == iterKind.standalone {
  coforall i in 0..#hi {
    on Locales.last {
      // Force remote yields.
      yield i:c_int;
    }
  }
}

proc test() {
  forall idx in iterYieldingInOn() {
    if recHere.bar() == 2 then {
      extern proc printf(args...): void;
      printf("%d\n", recHere.x:c_int);
    }
  }
}
test();
