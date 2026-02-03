module ChapelLibrary {
  use CTypes;

  config param isDynamicLibrary = false;

  extern proc printf(fmt: c_ptrConst(c_char), args...);

  inline proc printTestName(testNum: int(32)) {
    printf('test%d\n', testNum);
  }

  // Execute on current locale, print using 'printf'.
  export proc test0() {
    printTestName(0);
    const id = here.id : c_int;
    printf('Printing from locale: %d\n', id);
  }

  // Execute on all locales using an 'on' statement. To print use 'printf'.
  export proc test1() {
    printTestName(1);
    for loc in Locales do on loc {
      const id = here.id : c_int;
      printf('Calling \'printf\' from locale %d\n', id);
    }
  }

  /*
  // TODO: Add me back when we can safely add more globals.
  const testArray = [
    test0,
    test1
  ];
  export proc numTests(): int(64) {
    return testArray.size;
  }
  */

  export proc numTests(): int(64) do return 2;

  proc main() {

  }
}
