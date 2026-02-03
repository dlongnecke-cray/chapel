//
// Load and execute code from a Chapel library.
//

use ChapelDynamicLoading;
use CTypes;
use Reflection;

//
// TODO: Replace/remove this with helper module after rebase.
//

/** Define a "user facing" wrapper around the internal dynamic library. */
record dynamicLibrary {
  var _bin: unmanaged chpl_BinaryInfo?;
  var _err: owned DynLoadError?;

  proc init(path: string) {
    init this;
    this._bin = chpl_BinaryInfo.create(path, this._err);
    if _bin then _bin!.bumpRefCount();
  }

  proc deinit() {
    if _bin then _bin!.dropRefCount();
  }

  proc err() do return _err.borrow();

  inline proc _assertRetrievedWideProcedureProperties(p1: ?t1) {
    use Types;

    compilerAssert(isProcedureValue(p1));
    compilerAssert(isProcedureType(t1));
    compilerAssert(isProcedure(p1));
    compilerAssert(isProcedure(t1));

    compilerAssert(!chpl_isLocalProc(p1));
    compilerAssert(!chpl_isLocalProc(t1));
    compilerAssert(!chpl_isLocalProcType(t1));

    compilerAssert(chpl_isWideProc(p1));
    compilerAssert(chpl_isWideProc(t1));
    compilerAssert(chpl_isWideProcType(t1));

    compilerAssert(chpl_isExternProc(p1));
    compilerAssert(chpl_isExternProc(t1));
    compilerAssert(chpl_isExternProcType(t1));

    const p2 = chpl_toLocalProc(p1);

    _assertRetrievedLocalProcedureProperties(p2);
  }

  proc _assertRetrievedLocalProcedureProperties(p: ?t) {
    compilerAssert(isProcedureValue(p));
    compilerAssert(isProcedureType(t));
    compilerAssert(isProcedure(p));
    compilerAssert(isProcedure(t));

    compilerAssert(chpl_isLocalProc(p));
    compilerAssert(chpl_isLocalProc(t));
    compilerAssert(chpl_isLocalProcType(t));

    compilerAssert(!chpl_isWideProc(p));
    compilerAssert(!chpl_isWideProc(t));
    compilerAssert(!chpl_isWideProcType(t));

    compilerAssert(chpl_isExternProc(p));
    compilerAssert(chpl_isExternProc(t));
    compilerAssert(chpl_isExternProcType(t));
  }

  proc ref load(sym: string, type T) throws {
    if _err != nil then throw _err;
    var err;
    var ret = _bin!.loadSymbol(sym, T, err);
    if err != nil then throw err;
    _assertRetrievedWideProcedureProperties(ret);
    return ret;
  }

  // TODO: Add this to helper module.
  proc ref loadLocally(sym: string, type T) throws {
    if _err != nil then throw _err;
    var err;
    var ret = _bin!.loadSymbolLocally(sym, T, err);
    if err != nil then throw err;
    _assertRetrievedLocalProcedureProperties(ret);
    return ret;
  }
}

proc chapelLibraryExtension param {
  use ChplConfig;
  if CHPL_TARGET_PLATFORM == 'darwin' then return 'dylib';
  return 'so';
}

proc chapelLibraryPath param {
  return './lib/libChapelLibrary.' + chapelLibraryExtension;
}

proc runTestBattery() {
  var lib = new dynamicLibrary(chapelLibraryPath);

  // Get the number of tests to run.
  type numTestsType = proc(): int(64);
  const numTestsProc = lib.loadLocally('numTests', numTestsType);
  const numTests = numTestsProc();

  // Run the tests.
  for i in 0..<numTests {
    const testName = "test" + i:string;
    type testType = proc(): void;
    const testProc = try! lib.loadLocally(testName, testType);
    testProc();
  }
}

proc main() {
  runTestBattery();
}
