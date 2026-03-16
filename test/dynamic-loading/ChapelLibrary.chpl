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

  proc preBufferPtrCache(param upto: int) {
    // TODO: This loop should get unrolled, creating 'upto' different
    //       anonymous procedures. But I cannot test it quite yet.
    for param i in 0..<upto {
      const p = proc(): void {};
    }
  }

  proc loadedLibrarySetup() {
    use ChapelProgramRegistration;

    printer('LOADED LIBRARY SETUP');

    const id = chpl_programInfoHere.id : c_int;
    printer('-- program ID = ', id);

    const path = chpl_programInfoHere.path;
    printer('-- program path = ', path);

    param num = numProcPtrsToConstructPreBuffering;
    if num > 0 {
      printer('-- pre-buffering with ', num : c_int, ' procedure pointers');
      preBufferPtrCache(upto=num);
    }
  }

  // Call this in our module code.
  loadedLibrarySetup();

  inline proc printfGreetingsHere() {
    extern proc printf(args...): void;
    const id = here.id : c_int;
    printf('Calling \'printf\' from locale: %d\n', id);
  }

  // Execute on current locale, print using 'printf'.
  export proc test0() {
    printfGreetingsHere();
  }

  // Execute on all locales using an 'on' statement. To print use 'printf'.
  export proc test1() {
    for loc in Locales do on loc do printfGreetingsHere();
  }

  // Execute on all locales but use a 'coforall' loop.
  export proc test2() {
    printer('-- Incrementing atomic counter remotely inside of coforall...');

    var counter: atomic int;

    coforall loc in Locales do on loc do {
      counter.add(1);
    }

    const expect: int(64) = numLocales;
    const actual: int(64) = counter.read();
    printer('Expect: ', expect);
    printer('Actual: ', actual);

    assert(expect == actual);
  }

  const testArray = [
    test0,
    test1,
    test2
  ];

  export proc numTests(): int(64) {
    return testArray.size;
  }

  proc main() {

  }
}
