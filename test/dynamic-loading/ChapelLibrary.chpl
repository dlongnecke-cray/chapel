module ChapelLibrary {
  use CTypes;

  // This should be set by the .compopts matrix later when needed.
  config param isDynamicLibrary = false;
  config param numProcPtrsToConstructPreBuffering = 0;
  config param useWritelnForPrinter = false;

  proc printer(args...?n) {
    use ChapelRuntimeInterface;
    debugf((...args));
  }

  proc printTestName(param x: int) {
    debugf('test', x, '\n');
  }

  proc preBufferPtrCache(param upto: int) {
    // TODO: This loop should get unrolled, creating 'upto' different
    //       anonymous procedures. But I cannot test it quite yet.
    for param i in 0..<upto {
      const p = proc(): void {};
    }
  }

  export proc loadedLibrarySetup() {
    use ChapelProgramRegistration;

    printer('LOADED PROGRAM SETUP\n');

    const id = chpl_programInfoHere.id : c_int;
    printer('-- program sees its ID as: %d\n', id);

    param num = numProcPtrsToConstructPreBuffering;
    printer('-- pre-buffering with %d procedure pointers\n',
            num : c_int);

    preBufferPtrCache(upto=num);

    const localesPtr = c_ptrToConst(Locales) : c_ptr(void);
    printer('-- locales array is: %p\n', localesPtr);
  }

  // Call this in our module code.
  loadedLibrarySetup();

  // Execute on current locale, print using 'printf'.
  export proc test0() {
    printTestName(0);
    const id = here.id : c_int;
    printer('Printing from locale: %d\n', id);
  }

  // Execute on all locales using an 'on' statement. To print use 'printf'.
  export proc test1() {
    printTestName(1);
    for loc in Locales do on loc {
      const id = here.id : c_int;
      printer('Calling \'printf\' from locale %d\n', id);
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
