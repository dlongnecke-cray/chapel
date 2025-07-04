/*
 * Copyright 2020-2025 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
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

/*
*/
module ChapelTuple {
  use ChapelStandard, DSIUtil;

  pragma "tuple" record _tuple {
    param size : int;
  }

  pragma "tuple init fn"
  inline proc chpl__init_tuple(param size : int) {
    // body inserted during generic instantiation
  }

  //
  // syntactic support for tuples
  //

  // tuple type (refs for types with blank intent=ref intent)
  pragma "build tuple"
  pragma "build tuple type"
  inline proc _build_tuple(type t...) type {
    // body inserted during generic instantiation
  }

  // tuple value (refs)
  pragma "build tuple"
  inline proc _build_tuple(x...) {
      return x;
  }

  // tuple type (no refs)
  pragma "do not allow ref"
  pragma "build tuple"
  pragma "build tuple type"
  inline proc _build_tuple_noref(type t...) type {
    // body inserted during generic instantiation
  }

  // tuple value allowing refs (ref actuals)
  pragma "allow ref"
  pragma "build tuple"
  pragma "suppress lvalue error"
  // suppressing lvalue errors -- workaround forall exprs yielding owned
  inline proc _build_tuple_always_allow_ref(x...) do
    return x;

  inline proc chpl__unref(type t) type {
    if isTupleType(t) then
      return _build_tuple_noref((...t));
    else
      return t;
  }

   // homogeneous tuple type
  pragma "build tuple"
  pragma "build tuple type"
  pragma "star tuple"
  @chpldoc.nodoc
  operator *(param p: int, type t) type {
    // body inserted during generic instantiation
  }

  @chpldoc.nodoc
  operator *(param p: uint, type t) type {
    if p > max(int) then
      compilerError("Tuples of size >" + max(int):string + " are not currently supported");
    param pAsInt = p: int;
    return pAsInt*t;
  }

  pragma "last resort"
  @chpldoc.nodoc
  operator *(param p: bool, type t) type {
    compilerError("Tuple types cannot be defined using boolean sizes");
  }

  pragma "last resort"
  @chpldoc.nodoc
  operator *(p: bool, type t) type {
    compilerError("Tuple types cannot be defined using boolean sizes");
  }

  pragma "do not allow ref"
  pragma "build tuple"
  pragma "build tuple type"
  pragma "star tuple"
  proc _build_star_tuple_noref(param p: int, type t) type {
    // body inserted during generic instantiation
  }

  pragma "last resort"
  @chpldoc.nodoc
  operator *(type t, param p: int) {
    compilerError("<type>*<param int> not supported.  If you're trying to specify a homogeneous tuple type, use <param int>*<type>.");
  }

  // last resort since if this resolves some other way, OK
  pragma "last resort"
  @chpldoc.nodoc
  operator *(p: integral, type t) type {
    compilerError("tuple size must be known at compile-time");
  }

  // make it a tuple if it is not already
  inline proc chpl__tuplify(x) {
    if isTuple(x) then return x; else return (x,);
  }

  @chpldoc.nodoc
  proc _check_tuple_var_decl(const ref x: _tuple, param p) param {
    if p == x.size {
      return true;
    } else {
      compilerError("tuple size ("+x.size:string+") must match the number of grouped variables (" + p:string + ")");
      return false;
    }
  }
  @chpldoc.nodoc
  proc _check_tuple_var_decl(const ref x, param p) param {
    compilerError("illegal tuple variable declaration with non-tuple initializer");
    return false;
  }


  //
  // tuple assignment
  //
  pragma "compiler generated"
  pragma "last resort"
  pragma "no array view elision"
  @chpldoc.nodoc
  inline operator =(ref x: _tuple,
                    pragma "intent ref maybe const formal" y: _tuple)
  where x.size == y.size {
    for param i in 0..x.size-1 do
      x(i) = y(i);
  }

  //
  // homogeneous tuple accessor
  // the result is const when the tuple is
  //
  pragma "reference to const when const this"
  pragma "star tuple accessor"
  @chpldoc.nodoc
  proc _tuple.this(i : integral) ref {
    if !isHomogeneousTuple(this) then
      compilerError("invalid access of non-homogeneous tuple by runtime value");
    if boundsChecking then
      if i < 0 || i > size-1 then
        halt("tuple index out of bounds\n",
             "note: index was ", i, " but the tuple type ", this.type:string,
             " has bounds 0..", size-1);
    return __primitive("get svec member", this, i);
  }

  pragma "reference to const when const this"
  pragma "star tuple accessor"
  @chpldoc.nodoc
  proc _tuple.this(i : bool) ref {
    if !isHomogeneousTuple(this) then
      compilerError("invalid access of non-homogeneous tuple by runtime value");
    if boundsChecking then
      if i < 0 || i > size-1 then
        halt("tuple index out of bounds\n",
             "note: index was ", i, " but the tuple type ", this.type:string,
             " has bounds 0..", size-1);

    return __primitive("get svec member", this, i);
  }


  // This is controlled with --[no-]warn-tuple-iteration
  // so we are not chpldoc-ing it.
  //
  // When this param is set to the string "true",
  // the compiler will issue a warning when iterating over components
  // of a homogeneous tuple, e.g. ``for i in (A,B,C)``.
  //
  // This is useful to expose code where zippered iteration,
  // e.g. ``for abc in zip(A,B,C)``, may have been intended.
  //
  @chpldoc.nodoc
  config param CHPL_WARN_TUPLE_ITERATION = "unset";

  //
  // iterator support for tuples
  //
  pragma "reference to const when const this"
  @chpldoc.nodoc
  iter ref _tuple.these() ref
  {

    // If we hit this error, it generally means that the compiler wasn't
    // successful at unrolling a loop over a heterogeneous tuple, either
    // because the IR changed (in the event of a regression) or because
    // it's a pattern that isn't handled yet (such as zippered iteration
    // or a forall loop over a heterogeneous tuple).  See preFold.cpp,
    // specifically unrollHetTupleLoop().
    //
    if !isHomogeneousTuple(this) then
      compilerError("Heterogeneous tuples don't support this style of loop yet");

    if CHPL_WARN_TUPLE_ITERATION == "true" then
      compilerWarning("Iterating over tuples. If you intended to use zippered iteration, add the new keyword 'zip' before the tuple of iterable expressions.");

    foreach i in 0..#this.size with (ref this) {
      yield(this(i));
    }
  }

  @chpldoc.nodoc
  iter _tuple.these(param tag:iterKind)
      where tag == iterKind.leader
  {

    const numTasks = if dataParTasksPerLocale==0 then here.maxTaskPar
                     else dataParTasksPerLocale;
    const ignoreRunning = dataParIgnoreRunningTasks;
    const minIndicesPerTask = dataParMinGranularity;
    const length = this.size;
    const myRange = (0..#length,);
    var (numChunks, _) = _computeChunkStuff(numTasks, ignoreRunning,
                                            minIndicesPerTask,
                                            myRange);

    coforall chunk in 0..#numChunks {
      // _computeBlock assumes 0-based ranges
      const (lo,hi) = _computeBlock(length, numChunks, chunk, length-1);
      yield (lo..hi,);
    }
  }

  pragma "reference to const when const this"
  @chpldoc.nodoc
  iter ref _tuple.these(param tag:iterKind, followThis: _tuple) ref
      where tag == iterKind.follower
  {
    if followThis.size != 1 then
      compilerError('Tuple zipped with incompatible iterator expression.');

    var fThis = followThis(0);

    foreach i in fThis with (ref this) {
      yield this(i);
    }
  }

  proc _tuple.indices {
    return 0..<this.size;
  }

  //
  // tuple methods
  //

  //
  // tuple casts to complex(64) and complex(128)
  //
  // TODO: These could instead use 'noinit' and manually assign the fields.
  //
  // Note: statically inlining the _chpl_complex runtime functions is necessary
  // for good performance
  //
  /*
  Cast from a generic two-tuple to a ``complex(64)``
  */
  inline operator :(x: (?,?), type t: complex(64)) {
    pragma "fn synchronization free"
    extern proc _chpl_complex64(re:real(32),im:real(32)) : complex(64);
    return _chpl_complex64(x(0):real(32),x(1):real(32));
  }

  /*
  Cast from a generic two-tuple to a ``complex(128)``
  */
  inline operator :(x: (?,?), type t: complex(128)) {
    pragma "fn synchronization free"
    extern proc _chpl_complex128(re:real(64),im:real(64)):complex(128);
    return _chpl_complex128(x(0):real(64),x(1):real(64));
  }

  //
  // General tuple cast function
  //
  pragma "tuple cast fn"
  pragma "unsafe"
  @chpldoc.nodoc
  inline operator :(x: _tuple, type t:_tuple) {
    // body filled in during resolution
  }

  //
  // helper function to return a tuple of all of the components in a
  // tuple except the first
  //
  inline proc chpl__tupleRest(t: _tuple) {
    inline proc chpl__tupleRestHelper(first, rest...) do
      return rest;
    return chpl__tupleRestHelper((...t));
  }

  //
  // standard overloaded unary operators on tuples.
  //
  @chpldoc.nodoc
  inline operator +(a: _tuple) {
    var result: a.type;
    for param d in 0..a.size-1 do
      result(d) = +a(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator -(a: _tuple) {
    var result: a.type;
    for param d in 0..a.size-1 do
      result(d) = -a(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator ~(a: _tuple) {
    var result: a.type;
    for param d in 0..a.size-1 do
      result(d) = ~a(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator !(a: _tuple) {
    var result: a.type;
    for param d in 0..a.size-1 do
      result(d) = !a(d);
    return result;
  }

  /*
    Returns a tuple of type t with each component set to ``max``
    of the type in the corresponding component of the argument.
  */
  proc max(type t): t where isTupleType(t) {
    var result: t;
    for param i in 0..result.size-1 {
      result(i) = max(t(i));
    }
    return result;
  }

  /*
  Returns a tuple of type t with each component set to ``min``
  of the type in the corresponding component of the argument.
  */
  proc min(type t): t where isTupleType(t) {
    var result: t;
    for param i in 0..result.size-1 {
      result(i) = min(t(i));
    }
    return result;
  }

  proc chpl_TwoHomogTuples(t1, t2) param {
    return isHomogeneousTuple(t1) && isHomogeneousTuple(t2);
  }

  //
  // standard overloaded binary operators on tuples.  Each pair starts
  // with a case optimized for homogeneous tuples (because the result
  // type is easy to express)...
  @chpldoc.nodoc
  inline operator +(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to + have different sizes");

    var result: a.size*(a(0) + b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) + b(d);

    return result;
  }

  // ...followed by a more complicated/general case for heterogeneous
  // tuples because the result type is more complex to describe.
  //
  @chpldoc.nodoc
  inline operator +(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to + have different sizes");
    if a.size == 1 then
      return (a(0)+b(0),);
    else
      return (a(0)+b(0), (...chpl__tupleRest(a)+chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator -(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to - have different sizes");

    var result: a.size*(a(0) - b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) - b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator -(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to - have different sizes");
    if a.size == 1 then
      return (a(0)-b(0),);
    else
      return (a(0)-b(0), (...chpl__tupleRest(a)-chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator *(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to * have different sizes");

    var result: a.size*(a(0) * b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) * b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator *(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to * have different sizes");
    if a.size == 1 then
      return (a(0)*b(0),);
    else
      return (a(0)*b(0), (...chpl__tupleRest(a)*chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator /(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to / have different sizes");

    var result: a.size*(a(0) / b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) / b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator /(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to / have different sizes");
    if a.size == 1 then
      return (a(0)/b(0),);
    else
      return (a(0)/b(0), (...chpl__tupleRest(a)/chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator %(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to % have different sizes");

    var result: a.size*(a(0) % b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) % b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator %(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to % have different sizes");
    if a.size == 1 then
      return (a(0)%b(0),);
    else
      return (a(0)%b(0), (...chpl__tupleRest(a)%chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator **(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to ** have different sizes");

    var result: a.size*(a(0) ** b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) ** b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator **(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to ** have different sizes");
    if a.size == 1 then
      return (a(0)**b(0),);
    else
      return (a(0)**b(0), (...chpl__tupleRest(a)**chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator &(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to & have different sizes");

    var result: a.size*(a(0) & b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) & b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator &(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to & have different sizes");
    if a.size == 1 then
      return (a(0)&b(0),);
    else
      return (a(0)&b(0), (...chpl__tupleRest(a)&chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator |(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to | have different sizes");

    var result: a.size*(a(0) | b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) | b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator |(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to | have different sizes");
    if a.size == 1 then
      return (a(0)|b(0),);
    else
      return (a(0)|b(0), (...chpl__tupleRest(a)|chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator ^(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to ^ have different sizes");

    var result: a.size*(a(0) ^ b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) ^ b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator ^(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to ^ have different sizes");
    if a.size == 1 then
      return (a(0)^b(0),);
    else
      return (a(0)^b(0), (...chpl__tupleRest(a)^chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator <<(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to << have different sizes");

    var result: a.size*(a(0) << b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) << b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator <<(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to << have different sizes");
    if a.size == 1 then
      return (a(0)<<b(0),);
    else
      return (a(0)<<b(0), (...chpl__tupleRest(a)<<chpl__tupleRest(b)));
  }

  @chpldoc.nodoc
  inline operator >>(a: _tuple, b: _tuple) where chpl_TwoHomogTuples(a,b) {
    if a.size != b.size then
      compilerError("tuple operands to >> have different sizes");

    var result: a.size*(a(0) >> b(0)).type;
    for param d in 0..a.size-1 do
      result(d) = a(d) >> b(d);

    return result;
  }

  @chpldoc.nodoc
  inline operator >>(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to >> have different sizes");
    if a.size == 1 then
      return (a(0)>>b(0),);
    else
      return (a(0)>>b(0), (...chpl__tupleRest(a)>>chpl__tupleRest(b)));
  }

  //
  // standard overloaded relational operators on tuples
  //
  @chpldoc.nodoc
  inline operator >(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to > have different sizes");
    for param i in 0..a.size-1 do
      if a(i) > b(i) then
        return true;
      else if a(i) < b(i) then
        return false;
    return false;
  }

  @chpldoc.nodoc
  inline operator >=(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to >= have different sizes");
    for param i in 0..a.size-1 do
      if a(i) > b(i) then
        return true;
      else if a(i) < b(i) then
        return false;
    return true;
  }

  @chpldoc.nodoc
  inline operator <(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to < have different sizes");
    for param i in 0..a.size-1 do
      if a(i) < b(i) then
        return true;
      else if a(i) > b(i) then
        return false;
    return false;
  }

  @chpldoc.nodoc
  inline operator <=(a: _tuple, b: _tuple) {
    if a.size != b.size then
      compilerError("tuple operands to <= have different sizes");
    for param i in 0..a.size-1 do
      if a(i) < b(i) then
        return true;
      else if a(i) > b(i) then
        return false;
    return true;
  }

  @chpldoc.nodoc
  inline operator ==(a: _tuple, b: _tuple) {
    if a.size != b.size {
      return false;
    } else {
      for param i in 0..a.size-1 do
        if a(i) != b(i) then
          return false;
    }
    return true;
  }

  @chpldoc.nodoc
  inline operator !=(a: _tuple, b: _tuple) {
    if a.size != b.size {
      return true;
    } else {
      for param i in 0..a.size-1 do
        if a(i) != b(i) then
          return true;
    }
    return false;
  }

  //
  // standard overloaded binary operators on homog tuple / scalar
  // pairs.
  //
  @chpldoc.nodoc
  inline operator +(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) + y;
    return result;
  }

  @chpldoc.nodoc
  inline operator +(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x + y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator -(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) - y;
    return result;
  }

  @chpldoc.nodoc
  inline operator -(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x - y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator *(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) * y;
    return result;
  }

  @chpldoc.nodoc
  inline operator *(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x * y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator /(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) / y;
    return result;
  }

  @chpldoc.nodoc
  inline operator /(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x / y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator %(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) % y;
    return result;
  }

  @chpldoc.nodoc
  inline operator %(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x % y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator **(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) ** y;
    return result;
  }

  @chpldoc.nodoc
  inline operator **(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                             isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x ** y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator &(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) & y;
    return result;
  }

  @chpldoc.nodoc
  inline operator &(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x & y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator |(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) | y;
    return result;
  }

  @chpldoc.nodoc
  inline operator |(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x | y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator ^(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) ^ y;
    return result;
  }

  @chpldoc.nodoc
  inline operator ^(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                            isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x ^ y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator <<(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) << y;
    return result;
  }

  @chpldoc.nodoc
  inline operator <<(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                             isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x << y(d);
    return result;
  }

  @chpldoc.nodoc
  inline operator >>(x: _tuple, y: x(0).type) where isHomogeneousTuple(x) {
    var result: x.size * x(0).type;
    for param d in 0..x.size-1 do
      result(d) = x(d) >> y;
    return result;
  }

  @chpldoc.nodoc
  inline operator >>(x: ?t, y: _tuple) where isHomogeneousTuple(y) &&
                                             isCoercible(t, (y(0).type)) {
    var result: y.size * y(0).type;
    for param d in 0..y.size-1 do
      result(d) = x >> y(d);
    return result;
  }


}
