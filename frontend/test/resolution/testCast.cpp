/*
 * Copyright 2021-2025 Hewlett Packard Enterprise Development LP
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "chpl/types/RecordType.h"
#include "test-resolution.h"
#include "chpl/resolution/resolution-queries.h"


static void testHelper(Context* context, std::string program, const Type* expectedType,
                       const Param* expectedParam) {

  QualifiedType qt = resolveQualifiedTypeOfX(context, program);

  assert(qt.hasTypePtr());
  if (expectedParam) assert(qt.hasParamPtr());
  assert(qt.type() == expectedType);
  assert(qt.param() == expectedParam);
}

// uint -> int
static void test1() {
  printf("test1\n");
  Context ctx;
  testHelper(&ctx, "param x = 0x8000000000000000 : int;\n",
             IntType::get(&ctx, 0), IntParam::get(&ctx, 0x8000000000000000));
}

// uint -> int
static void test2() {
  printf("test2\n");
  Context ctx;
  testHelper(&ctx, "param x = 0x7fffffffffffffff : int;\n",
             IntType::get(&ctx, 0), IntParam::get(&ctx, 0x7fffffffffffffff));
}

static void test3() {
  printf("test3\n");
  Context ctx;

  std::string program = R""""(
    proc min(type t) param  where t == int(64) do return 0x8000000000000000 : int;
    param x = min(int);
  )"""";

  QualifiedType qt = resolveQualifiedTypeOfX(&ctx, program);
  assert(qt.hasTypePtr());
  assert(qt.hasParamPtr());

  assert(qt.type() == IntType::get(&ctx, 0));
  assert(qt.param() == IntParam::get(&ctx, 0x8000000000000000));
}

static void test4() {
    printf("test4\n");
  Context ctx;

  std::string program = R""""(
    proc max(type t) param  where t == int(64) do return 0x7fffffffffffffff: t;
    param x = max(int);
  )"""";

  QualifiedType qt = resolveQualifiedTypeOfX(&ctx, program);
  assert(qt.hasTypePtr());
  assert(qt.hasParamPtr());

  assert(qt.type() == IntType::get(&ctx, 0));
  assert(qt.param() == IntParam::get(&ctx, 0x7fffffffffffffff));
}

// int -> bool
static void test5() {
  printf("test5\n");
  Context ctx;

  std::string program = "param x = 1 : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, true));
}

static void test6() {
  printf("test5\n");
  Context ctx;

  std::string program = "param x = 0 : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, false));
}

// bool -> int
static void test7() {
  printf("test7\n");
  Context ctx;

  std::string program = "param x = true : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 1));
}

static void test8() {
  printf("test8\n");
  Context ctx;

  std::string program = "param x = false : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 0));
}

// bool -> uint
static void test9() {
  printf("test9\n");
  Context ctx;

  std::string program = "param x = true : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 1));
}

static void test10() {
  printf("test10\n");
  Context ctx;

  std::string program = "param x = false : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 0));
}

// bool -> string
// bool -> bytes

// bool -> real
static void test11() {
  printf("test11\n");
  Context ctx;

  std::string program = "param x = true : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 1));
}

static void test12() {
  printf("test12\n");
  Context ctx;

  std::string program = "param x = false : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 0));
}

// bool -> bool
static void test13() {
  printf("test13\n");
  Context ctx;

  std::string program = "param x = true : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, true));
}

static void test14() {
  printf("test14\n");
  Context ctx;

  std::string program = "param x = false : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, false));
}

// int -> real
static void test15() {
  printf("test15\n");
  Context ctx;

  std::string program = "param x = 1 : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 1.0));
}

static void test16() {
  printf("test16\n");
  Context ctx;

  std::string program = "param x = 0 : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 0.0));
}

// int -> uint
static void test17() {
  printf("test17\n");
  Context ctx;

  std::string program = "param x = 1 : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 1));
}

// TODO: Negative int, no matching candidates for -
// static void test18() {
//   printf("test18\n");
//   Context ctx;

//   std::string program = "param x = -8 : uint; ";
//   testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 0));
// }

// uint -> bool
static void test19() {
  printf("test19\n");
  Context ctx;

  std::string program = "param x = 0x8000000000000000 : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, true));
}

static void test20() {
  printf("test20\n");
  Context ctx;

  std::string program = "param x = 0x0000000000000000 : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, false));

}

//uint -> real
static void test21() {
  printf("test21\n");
  Context ctx;

  std::string program = "param x = 0x8000000000000000 : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 9.223372036854776e+18));
}

static void test22() {
  printf("test22\n");
  Context ctx;

  std::string program = "param x = 0x0000000000000000 : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 0.0));
}

static void test23() {
  printf("test23\n");
  Context ctx;

  std::string program = "param x = 0x7fffffffffffffff : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 9.223372036854776e+18));
}

// real -> int (data loss)
static void test24() {
  printf("test24\n");
  Context ctx;
  std::string program = "param x = 1.1 : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 1));
}

static void test25() {
  printf("test25\n");
  Context ctx;
  std::string program = "param x = 1.9 : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 1));
}

static void test26() {
  printf("test26\n");
  Context ctx;
  std::string program = "param x = 0.9 : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 0));
}

static void test27() {
  printf("test27\n");
  Context ctx;
  std::string program = "param x = 0.1 : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 0));
}

// real -> uint (data loss)
static void test28() {
  printf("test28\n");
  Context ctx;
  std::string program = "param x = 1.1 : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 1));
}

static void test29() {
  printf("test29\n");
  Context ctx;
  std::string program = "param x = 1.9 : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 1));
}

static void test30() {
  printf("test30\n");
  Context ctx;
  std::string program = "param x = 0.9 : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 0));
}

static void test31() {
  printf("test31\n");
  Context ctx;
  std::string program = "param x = 0.1 : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 0));
}

// ***********************
// uninteresting self-type casts
// int -> int
static void test32() {
  printf("test32\n");
  Context ctx;
  std::string program = "param x = 1 : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 1));
}

// uint -> uint
static void test33() {
  printf("test33\n");
  Context ctx;
  std::string program = "param x = 0x8000000000000000 : uint; ";
  testHelper(&ctx, program, UintType::get(&ctx, 0), UintParam::get(&ctx, 0x8000000000000000));
}

// real -> real
static void test34() {
  printf("test34\n");
  Context ctx;
  std::string program = "param x = 1.1 : real; ";
  testHelper(&ctx, program, RealType::get(&ctx, 0), RealParam::get(&ctx, 1.1));
}
// bool -> bool
static void test35() {
  printf("test35\n");
  Context ctx;
  std::string program = "param x = true : bool; ";
  testHelper(&ctx, program, BoolType::get(&ctx), BoolParam::get(&ctx, true));
}

// end of self-type casts
// **********************

// TODO: This does not find a matching candidate for the cast
// tuple -> complex
// static void test36() {
//   printf("test36\n");
//   Context ctx;
//   std::string program = "param x = (1.1, 2.2) : complex; ";
//   testHelper(&ctx, program, ComplexType::get(&ctx, 0), ComplexParam::get(&ctx, Param::ComplexDouble(1.1, 2.2)));
// }

static void test37() {
  printf("test37\n");
  Context ctx;
  std::string program = "enum E { A=0, B, C } param x = E.A : int; ";
  testHelper(&ctx, program, IntType::get(&ctx, 0), IntParam::get(&ctx, 0));
}

static void test38() {
  printf("test38\n");
  Context ctx;
  std::string program = "enum E { A=0, B, C } param x = 0 : E; ";

  auto enumId = ID(UniqueString::get(&ctx, "input.E"), -1, 0);
  auto eltId = ID(enumId.symbolPath(), 1, 1);

  // invoking 'EnumType::get' prior to resolving a program causes problems,
  // so don't use the helper in order to defer constructing the EnumType.
  QualifiedType qt = resolveQualifiedTypeOfX(&ctx, program);

  assert(qt.hasTypePtr());
  assert(qt.type() == EnumType::get(&ctx, enumId, UniqueString::get(&ctx, "E")));
  assert(qt.param() == EnumParam::get(&ctx, {eltId, "A"}));
}


// enum to nothing cast (error)
static void test39() {
  printf("test39\n");
  Context ctx;
  ErrorGuard guard(&ctx);
  std::string program = "enum E { A=0, B, C } param x = E.A : nothing; ";
  auto m = parseModule(&ctx, std::move(program));
  resolveModule(&ctx, m->id());

  assert(guard.numErrors() == 1);
  assert(guard.error(0)->message() == "illegal cast from EnumType to nothing");
  assert(guard.error(0)->kind() == ErrorBase::Kind::ERROR);
  assert(guard.realizeErrors() == 1);
}

// abstract enum to int cast (error)
static void test40() {
  printf("test40\n");
  Context ctx;
  ErrorGuard guard(&ctx);
  std::string program = "enum E { A, B, C } param x = E.A : int; ";
  auto m = parseModule(&ctx, std::move(program));
  resolveModule(&ctx, m->id());

  assert(guard.numErrors() == 1);
  assert(guard.error(0)->kind() == ErrorBase::Kind::ERROR);
  assert(guard.error(0)->type() == ErrorType::EnumAbstract);
  assert(guard.realizeErrors() == 1);
}

// int to abstract enum cast (error)
static void test41() {
  printf("test41\n");
  Context ctx;
  ErrorGuard guard(&ctx);
  std::string program = "enum E { A, B, C } param x = 0 : E; ";
  auto m = parseModule(&ctx, std::move(program));
  resolveModule(&ctx, m->id());

  assert(guard.numErrors() == 1);
  assert(guard.error(0)->kind() == ErrorBase::Kind::ERROR);
  assert(guard.error(0)->type() == ErrorType::EnumAbstract);
  assert(guard.realizeErrors() == 1);
}

// param values should be turned into non-param values if target type is
// not param-enabled.
static void test42() {
  printf("test42\n");
  Context ctx;
  ErrorGuard guard(&ctx);
  std::string program =
    R"""(
    record myRec {}
    operator :(lhs: int, type rhs: myRec) do return new myRec();
    var x = 42 : myRec;
    )""";

  auto xInit = resolveTypeOfXInit(&ctx, program);

  assert(xInit.type());
  assert(xInit.type()->isRecordType());
  assert(xInit.type()->toRecordType()->name() == "myRec");
}

// param string to bytes (formely throwing assertions)
static void test43() {
  printf("test43\n");
  Context ctx;
  Context* context = &ctx;
  testHelper(context, "param x = \"hello\" : bytes;",
                      RecordType::getBytesType(context),
                      StringParam::get(context, UniqueString::get(context, "hello")));
}

// param bytes to string (formely throwing assertions)
static void test44() {
  printf("test44\n");
  auto context = buildStdContext();
  testHelper(context, "param x = b\"hello\" : string;",
                      ErroneousType::get(context), nullptr);
}

static void test45() {
  printf("test45\n");
  auto config = getConfigWithHome();
  Context ctx(config);
  Context* context = &ctx;

  // Non-nilable
  {
    context->advanceToNextRevision(false);
    setupModuleSearchPaths(context, false, false, {}, {});

    std::string program =
      R"""(
      class Foo { }

      var f = new owned Foo();
      var b : borrowed Foo = f.borrow();
      var x = b:unmanaged;

      var y = x:borrowed;
      )""";

    auto types = resolveTypesOfVariables(context, program, {"x", "y"});

    auto xInit = types["x"];
    assert(xInit.type());
    auto ct = xInit.type()->toClassType();
    assert(ct);
    assert(ct->decorator().isUnmanaged());
    assert(!ct->decorator().isUnknownNilability());
    assert(ct->decorator().isNonNilable());

    auto yt = types["y"].type()->toClassType();
    assert(yt->decorator().isBorrowed());
    assert(!yt->decorator().isUnknownNilability());
    assert(yt->decorator().isNonNilable());
  }

  // Nilable
  {
    context->advanceToNextRevision(false);
    setupModuleSearchPaths(context, false, false, {}, {});

    std::string program =
      R"""(
      class Foo { }

      var f = new owned Foo();
      var b : borrowed Foo? = f.borrow();
      var x = b:unmanaged;

      var y = x:borrowed;
      )""";

    auto types = resolveTypesOfVariables(context, program, {"x", "y"});

    auto xInit = types["x"];
    assert(xInit.type());
    auto ct = xInit.type()->toClassType();
    assert(ct);
    assert(ct->decorator().isUnmanaged());
    assert(!ct->decorator().isUnknownNilability());
    assert(ct->decorator().isNilable());

    auto yt = types["y"].type()->toClassType();
    assert(yt->decorator().isBorrowed());
    assert(!yt->decorator().isUnknownNilability());
    assert(yt->decorator().isNilable());
  }
}

static void test46() {
  printf("test46\n");

  // Param
  {
    Context* context = buildStdContext();
    std::string program =
      R"""(
      param a = "asdf";
      param x = a:string;
      )""";

    auto xInit = resolveTypeOfXInit(context, program);
    assert(xInit.type());
    ensureParamString(xInit, "asdf");
  }

  // Non-param
  {
    Context* context = buildStdContext();
    std::string program =
      R"""(
      var a = "asdf";
      var x = a:string;
      )""";

    auto xInit = resolveTypeOfXInit(context, program);
    assert(xInit.type());
    assert(!xInit.isParam());
    assert(xInit.type()->isStringType());
  }
}

static void test47() {
  printf("test47\n");
  Context ctx;
  Context* context = &ctx;

  auto testBorrow = [context](std::string buildC, bool expectNilable) {
    context->advanceToNextRevision(false);
    ErrorGuard guard(context);

    auto fullProg = "class C{}\n" + buildC + "\nvar x = c.borrow();";
    auto xInit = resolveTypeOfXInit(context, fullProg);
    assert(xInit.type());
    assert(xInit.type()->isClassType());
    assert(xInit.type()->toClassType()->decorator().isBorrowed());
    assert(xInit.type()->toClassType()->decorator().isNilable() == expectNilable);
  };

  testBorrow("var cu = new unmanaged C();\n var c = cu : borrowed;", false);
  testBorrow("var cu = new unmanaged C?();\n var c = cu : borrowed;", true);
  testBorrow("var c = new unmanaged C();", false);
  testBorrow("var c = new unmanaged C?();", true);
}

static void test48() {
  {
  // Mimics a situation found in CTypes, involving the casts for c_ptr(void)
  // Technically these are ambiguous, but we avoid the cast entirely becase
  // the src/dest types are the same.
  Context* context = buildStdContext();
  ErrorGuard guard(context);
  std::string program =
    R"""(
    record R {
      type T;
      var x : T;
    }

    operator :(x:R, type t:R(int)) {
      return __primitive("cast", t, x);
    }

    operator :(x:R(int), type t:R) {
      return __primitive("cast", t, x);
    }

    var r = new R(int);
    var x = r:R(int);
    )""";

  auto xInit = resolveQualifiedTypeOfX(context, program);

  assert(toString(xInit) == "R(int(64))");
  }

  {
  // Mimics a situation found in CTypes, involving the casts for c_ptr(void)
  // These should not be ambiguous because the second cast is more specific
  // by having declared the type as `R(nothing)`.
  Context* context = buildStdContext();
  ErrorGuard guard(context);
  std::string program =
    R"""(
    record R {
      type T;
      var x : T;
    }

    operator :(arg: R(?), type t: R(?)) {
      return arg;
    }

    operator :(arg: R(?), type k: R(nothing)) {
      var ret : k;
      return ret;
    }

    var r = new R(int);
    var x = r:R(nothing);
    )""";

  auto xInit = resolveQualifiedTypeOfX(context, program);

  assert(toString(xInit) == "R(nothing)");
  }
}

// string -> int cast should work, but at runtime.
static void test49() {
  {
    // the cast works at runtime...
    auto context = buildStdContext();
    ErrorGuard guard(context);
    auto vars = resolveTypesOfVariables(context, "var x = \"1\" : int;", {"x"});
    assert(vars.at("x").type() == IntType::get(context, 0));
  }
  {
    // ... but it's not a param cast.
    auto context = buildStdContext();
    testHelper(context, "param x = \"hello\" : int;",
                        ErroneousType::get(context), nullptr);
  }
}

// Basic tuple cast with compatible element types (identity cast)
static void test50() {
  printf("test50\n");
  Context ctx;
  Context* context = &ctx;

  std::string program = "var x = (1, 2) : (int, int);";
  auto vars = resolveTypesOfVariables(context, program, {"x"});
  auto xType = vars.at("x").type();
  assert(xType);
  assert(xType->isTupleType());
  auto tupleType = xType->toTupleType();
  assert(tupleType->numElements() == 2);
  assert(tupleType->elementType(0).type() == IntType::get(context, 0));
  assert(tupleType->elementType(1).type() == IntType::get(context, 0));
}

// Tuple cast with type conversions (int to real)
static void test51() {
  printf("test51\n");
  auto context = buildStdContext();

  std::string program = "var x = (1, 2) : (real, real);";
  auto vars = resolveTypesOfVariables(context, program, {"x"});
  auto xType = vars.at("x").type();
  assert(xType);
  assert(xType->isTupleType());
  auto tupleType = xType->toTupleType();
  assert(tupleType->numElements() == 2);
  assert(tupleType->elementType(0).type() == RealType::get(context, 0));
  assert(tupleType->elementType(1).type() == RealType::get(context, 0));
}

// Tuple cast with mixed type conversions
static void test52() {
  printf("test52\n");
  auto context = buildStdContext();

  std::string program = "var x = (1, 2.5) : (real, int);";
  auto vars = resolveTypesOfVariables(context, program, {"x"});
  auto xType = vars.at("x").type();
  assert(xType);
  assert(xType->isTupleType());
  auto tupleType = xType->toTupleType();
  assert(tupleType->numElements() == 2);
  assert(tupleType->elementType(0).type() == RealType::get(context, 0));
  assert(tupleType->elementType(1).type() == IntType::get(context, 0));
}

// Nested tuple cast (identity cast)
static void test53() {
  printf("test53\n");
  Context* context = buildStdContext();

  std::string program = "var x = ((1, 2), (3, 4)) : ((int, int), (int, int));";
  auto vars = resolveTypesOfVariables(context, program, {"x"});
  auto xType = vars.at("x").type();
  assert(xType);
  assert(xType->isTupleType());
  auto outerTuple = xType->toTupleType();
  assert(outerTuple->numElements() == 2);

  auto innerTuple0 = outerTuple->elementType(0).type()->toTupleType();
  assert(innerTuple0);
  assert(innerTuple0->numElements() == 2);
  assert(innerTuple0->elementType(0).type() == IntType::get(context, 0));
  assert(innerTuple0->elementType(1).type() == IntType::get(context, 0));

  auto innerTuple1 = outerTuple->elementType(1).type()->toTupleType();
  assert(innerTuple1);
  assert(innerTuple1->numElements() == 2);
  assert(innerTuple1->elementType(0).type() == IntType::get(context, 0));
  assert(innerTuple1->elementType(1).type() == IntType::get(context, 0));
}

// Nested tuple cast with conversions
static void test54() {
  printf("test54\n");
  auto context = buildStdContext();

  std::string program = "var x = ((1, 2), (3, 4)) : ((real, real), (real, real));";
  auto vars = resolveTypesOfVariables(context, program, {"x"});
  auto xType = vars.at("x").type();
  assert(xType);
  assert(xType->isTupleType());
  auto outerTuple = xType->toTupleType();
  assert(outerTuple->numElements() == 2);

  auto innerTuple0 = outerTuple->elementType(0).type()->toTupleType();
  assert(innerTuple0);
  assert(innerTuple0->numElements() == 2);
  assert(innerTuple0->elementType(0).type() == RealType::get(context, 0));
  assert(innerTuple0->elementType(1).type() == RealType::get(context, 0));

  auto innerTuple1 = outerTuple->elementType(1).type()->toTupleType();
  assert(innerTuple1);
  assert(innerTuple1->numElements() == 2);
  assert(innerTuple1->elementType(0).type() == RealType::get(context, 0));
  assert(innerTuple1->elementType(1).type() == RealType::get(context, 0));
}

// Deeply nested tuple cast with conversions
static void test55() {
  printf("test55\n");
  auto context = buildStdContext();

  std::string program = "var x = (((1, 2), 3), 4) : (((real, real), real), real);";
  auto vars = resolveTypesOfVariables(context, program, {"x"});
  auto xType = vars.at("x").type();
  assert(xType);
  assert(xType->isTupleType());
  auto outerTuple = xType->toTupleType();
  assert(outerTuple->numElements() == 2);

  auto midTuple = outerTuple->elementType(0).type()->toTupleType();
  assert(midTuple);
  assert(midTuple->numElements() == 2);

  auto innerTuple = midTuple->elementType(0).type()->toTupleType();
  assert(innerTuple);
  assert(innerTuple->numElements() == 2);
  assert(innerTuple->elementType(0).type() == RealType::get(context, 0));
  assert(innerTuple->elementType(1).type() == RealType::get(context, 0));

  assert(midTuple->elementType(1).type() == RealType::get(context, 0));
  assert(outerTuple->elementType(1).type() == RealType::get(context, 0));
}


// Error: tuple size mismatch (source larger)
static void test56() {
  printf("test56\n");
  Context* context = buildStdContext();
  ErrorGuard guard(context);

  std::string program = "var x = (1, 2, 3) : (int, int);";
  auto m = parseModule(context, std::move(program));
  resolveModule(context, m->id());

  assert(guard.numErrors() == 1);
  assert(guard.error(0)->type() == ErrorType::TupleCastSizeMismatch);
  assert(guard.realizeErrors() == 1);
}

// Error: tuple size mismatch (destination larger)
static void test57() {
  printf("test57\n");
  Context* context = buildStdContext();
  ErrorGuard guard(context);

  std::string program = "var x = (1, 2) : (int, int, int);";
  auto m = parseModule(context, std::move(program));
  resolveModule(context, m->id());

  assert(guard.numErrors() == 1);
  assert(guard.error(0)->type() == ErrorType::TupleCastSizeMismatch);
  assert(guard.realizeErrors() == 1);
}

// Error: nested tuple size mismatch
static void test58() {
  printf("test58\n");
  Context* context = buildStdContext();
  ErrorGuard guard(context);

  std::string program = "var x = ((1, 2), 3) : ((int, int, int), int);";
  auto m = parseModule(context, std::move(program));
  resolveModule(context, m->id());

  assert(guard.numErrors() == 1);
  assert(guard.error(0)->type() == ErrorType::TupleCastSizeMismatch);
  assert(guard.realizeErrors() == 1);
}

// Error: invalid element type conversion
static void test59() {
  printf("test59\n");
  auto context = buildStdContext();
  ErrorGuard guard(context);

  std::string program =
    R"""(
    record R {}
    var x = (new R(), 1) : (int, int);
    )""";
  auto m = parseModule(context, std::move(program));
  resolveModule(context, m->id());

  assert(guard.numErrors() >= 1);
  assert(guard.error(0)->type() == ErrorType::InvalidTupleCast);
  assert(guard.realizeErrors() >= 1);
}

int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
  test17();
  // test18();
  test19();
  test20();
  test21();
  test22();
  test23();
  test24();
  test25();
  test26();
  test27();
  test28();
  test29();
  test30();
  test31();
  test32();
  test33();
  test34();
  test35();
  // test36();
  test37();
  test38();
  test39();
  test40();
  test41();
  test42();
  test43();
  test44();
  test45();
  test46();
  test47();
  test48();
  test49();
  test50();
  test51();
  test52();
  test53();
  test54();
  test55();
  test56();
  test57();
  test58();
  test59();

  return 0;
}
