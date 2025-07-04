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


// THE REPLICATED DISTRIBUTION IMPLEMENTATION
//
// Classes defined:
//  ReplicatedImpl     -- Global distribution descriptor
//  ReplicatedDom      -- Global domain descriptor
//  LocReplicatedDom   -- Local domain descriptor
//  ReplicatedArr      -- Global array descriptor
//  LocReplicatedArr   -- Local array descriptor
//
// Potential extensions:
// - support other kinds of domains
// - allow run-time change in locales

/* Draft support for replicating complete domains/arrays across target locales. */

@unstable("ReplicatedDist is unstable and may change in the future")
prototype module ReplicatedDist {

use DSIUtil;

// trace certain DSI methods as they are being invoked
config param traceReplicatedDist = false;


/////////////////////////////////////////////////////////////////////////////
// distribution

//
// (global) distribution class
//
// chpldoc TODO
//   nicer example - pull from primers/distributions.chpl

/*
This ``replicatedDist`` distribution causes a domain and its arrays
to be replicated across the desired locales (all the locales by default).
An array receives a distinct set of elements - a "replicand" -
allocated on each locale.

In other words, a replicated-distributed domain has
an implicit additional dimension - over the locales,
making it behave as if there is one copy of its indices per locale.

Consistency among the replicands is not preserved automatically.
That is, changes to one replicand of an array are never propagated to
the other replicands by the distribution implementation.
If desired, consistency needs to be maintained by the user.

When accessing a replicated domain or array from a locale *not* in the
set of target locales, an error is reported if bounds-checking is on;
undefined behavior occurs if it is off.

Otherwise, only the replicand on the current locale is accessed when
referring to the domain or array.

**Example**

.. literalinclude:: ../../../../test/distributions/doc-examples/ReplicatedDistExamples.chpl
   :language: chapel
   :start-after: START_EXAMPLE
   :end-before: STOP_EXAMPLE

When run on 6 locales, the output is:

.. literalinclude:: ../../../../test/distributions/doc-examples/ReplicatedDistExamples.good

See the :ref:`primers-replicated` primer for more examples of the Replicated
distribution.

**Initializer Arguments**

The ``replicatedDist`` initializer is defined as follows:

  .. code-block:: chapel

    proc replicatedDist.init(
      targetLocales: [] locale = Locales,
      purposeMessage: string = "used to create a replicatedDist")

The optional ``purposeMessage`` may be useful for debugging
when the initializer encounters an error.


**Limitations**

* Only rectangular domains are presently supported.

*/


pragma "ignore noinit"
record replicatedDist : writeSerializable {
  forwarding const chpl_distHelp: chpl_PrivatizedDistHelper(unmanaged ReplicatedImpl);

  proc init(targetLocales: [] locale = Locales,
            purposeMessage = "used to create a replicatedDist") {
    const value = new unmanaged ReplicatedImpl(targetLocales, purposeMessage);

    this.chpl_distHelp = new chpl_PrivatizedDistHelper(
                           if _isPrivatized(value)
                             then _newPrivatizedClass(value)
                             else nullPid,
                           value);
  }

  proc init(_pid : int, _instance, _unowned : bool) {
    this.chpl_distHelp = new chpl_PrivatizedDistHelper(_pid,
                                                       _instance,
                                                       _unowned);
  }

  proc init(value) {
    this.chpl_distHelp = new chpl_PrivatizedDistHelper(
                           if _isPrivatized(value)
                             then _newPrivatizedClass(value)
                             else nullPid,
                           _to_unmanaged(value));
  }

  // Note: This does not handle the case where the desired type of 'this'
  // does not match the type of 'other'. That case is handled by the compiler
  // via coercions.
  proc init=(const ref other : replicatedDist) {
    this.init(other._value.dsiClone());
  }

  proc clone() {
    return new replicatedDist(this._value.dsiClone());
  }

  @chpldoc.nodoc
  inline operator ==(d1: replicatedDist, d2: replicatedDist) {
    if (d1._value == d2._value) then
      return true;
    return d1._value.dsiEqualDMaps(d2._value);
  }

  @chpldoc.nodoc
  inline operator !=(d1: replicatedDist, d2: replicatedDist) {
    return !(d1 == d2);
  }

  @chpldoc.nodoc
  proc serialize(writer, ref serializer) throws {
    chpl_distHelp.serialize(writer, serializer);
  }
}


@deprecated("'Replicated' is deprecated, please use 'replicatedDist' instead")
type Replicated = replicatedDist;



@chpldoc.nodoc
class ReplicatedImpl : BaseDist {
  var targetLocDom : domain(here.id.type);

  // the desired locales (an array of locales)
  const targetLocales : [targetLocDom] locale;
}


// initializer: replicate over the given locales
// (by default, over all locales)
proc ReplicatedImpl.init(targetLocales: [] locale = Locales,
                         purposeMessage: string = "used to create a replicatedDist")
{
  init this;

  for loc in targetLocales {
    this.targetLocDom.add(loc.id);
    this.targetLocales[loc.id] = loc;
  }

  if traceReplicatedDist then
    writeln("ReplicatedImpl initializer over ", targetLocales);
}

proc ReplicatedImpl.dsiEqualDMaps(that: ReplicatedImpl) {
  return this.targetLocales.equals(that.targetLocales);
}

proc ReplicatedImpl.dsiEqualDMaps(that) param {
  return false;
}

override proc ReplicatedImpl.dsiDestroyDist() {
  // no action necessary here
}

// privatization

override proc ReplicatedImpl.dsiSupportsPrivatization() param do return true;

proc ReplicatedImpl.dsiGetPrivatizeData() {
  if traceReplicatedDist then writeln("ReplicatedImpl.dsiGetPrivatizeData");

  // TODO: Returning 'targetLocales' here results in a memory leak. Why?
  // Other distributions seem to do this 'return 0' as well...
  return 0;
}

proc ReplicatedImpl.dsiPrivatize(privatizeData)
{
  if traceReplicatedDist then writeln("ReplicatedImpl.dsiPrivatize on ", here);

  const otherTargetLocales = this.targetLocales;

  // make private copy of targetLocales and its domain
  const privDom = otherTargetLocales.domain;
  const privTargetLocales: [privDom] locale = otherTargetLocales;

  const nonNilWrapper: [0..#privTargetLocales.sizeAs(int)] locale =
    for loc in otherTargetLocales do loc;

  return new unmanaged ReplicatedImpl(nonNilWrapper, "used during privatization");
}


/////////////////////////////////////////////////////////////////////////////
// domains

//
// global domain class
//
class ReplicatedDom : BaseRectangularDom(?) {
  // we need to be able to provide the domain map for our domain - to build its
  // runtime type (because the domain map is part of the type - for any domain)
  // (looks like it must be called exactly 'dist')
  const dist : unmanaged ReplicatedImpl; // must be a ReplicatedImpl

  // this is our index set; we store it here so we can get to it easily
  var whole: domain(rank, idxType, strides);

  // local domain objects
  // NOTE: if they ever change after the initializer - Reprivatize them
  var localDoms: [dist.targetLocDom] unmanaged LocReplicatedDom(rank, idxType,
                                                                strides)?;

  proc numReplicands do return localDoms.sizeAs(int);

  //
  // helper function to get the local domain safely
  //
  proc chpl_myLocDom() {
    if boundsChecking then
      if (!dist.targetLocDom.contains(here.id)) then
        halt("locale ", here.id, " has no local replicand");
    // Force unwrap this reference for ease of use.
    return localDoms[here.id]!;
  }
}

//
// local domain class
//
class LocReplicatedDom {
  // copy from the global domain
  param rank: int;
  type idxType;
  param strides: strideKind;

  // our index set, copied from the global domain
  var domLocalRep: domain(rank, idxType, strides);
}


// No explicit ReplicatedDom initializer - use the default one.
// proc ReplicatedDom.init(...){...}


// privatization

override proc ReplicatedDom.dsiSupportsPrivatization() param do return true;

record ReplicatedDomPrvData {
  var distpid;
  var whole;
  var localDoms;
}

proc ReplicatedDom.dsiGetPrivatizeData() {
  if traceReplicatedDist then writeln("ReplicatedDom.dsiGetPrivatizeData");

  return new ReplicatedDomPrvData(dist.pid, whole, localDoms);
}

proc ReplicatedDom.dsiPrivatize(privatizeData) {
  if traceReplicatedDist then writeln("ReplicatedDom.dsiPrivatize on ", here);

  var privdist = chpl_getPrivatizedCopy(this.dist.type, privatizeData.distpid);
  return new unmanaged ReplicatedDom(rank=rank, idxType=idxType,
                           strides=strides,
                           dist = privdist,
                           whole = privatizeData.whole,
                           localDoms = privatizeData.localDoms);
}

proc ReplicatedDom.dsiGetReprivatizeData() {
  return whole;
}

proc ReplicatedDom.dsiReprivatize(other, reprivatizeData): void {
  assert(this.rank == other.rank &&
         this.idxType == other.idxType &&
         this.strides == other.strides);

  this.whole = reprivatizeData;
}


proc ReplicatedImpl.dsiClone(): _to_unmanaged(this.type) {
  if traceReplicatedDist then writeln("ReplicatedImpl.dsiClone");
  var nonNilWrapper: [0..#targetLocales.sizeAs(int)] locale =
    for loc in targetLocales do loc;
  return new unmanaged ReplicatedImpl(nonNilWrapper);
}

// create a new domain mapped with this distribution
override proc ReplicatedImpl.dsiNewRectangularDom(param rank: int,
                                         type idxType,
                                         param strides: strideKind,
                                         inds)
{
  if traceReplicatedDist then writeln("ReplicatedImpl.dsiNewRectangularDom ",
                                      (rank, idxType:string, strides, inds));

  // Have to call the default initializer because we need to initialize 'dist'
  // prior to initializing 'localDoms' (which needs a non-nil value for 'dist'.
  var result = new unmanaged ReplicatedDom(rank=rank, idxType=idxType,
                                 strides=strides, dist=_to_unmanaged(this));

  // create local domain objects
  coforall (loc, locDom) in zip(targetLocales, result.localDoms) do
    on loc do
      locDom = new unmanaged LocReplicatedDom(rank, idxType, strides);
  result.dsiSetIndices(inds);

  return result;
}

// Given an index, this should return the locale that owns that index.
// (This is the implementation of dmap.idxToLocale().)
// For Replicated, we point it to the current locale.
proc ReplicatedImpl.dsiIndexToLocale(indexx): locale {
  return here;
}

// common redirects
override proc ReplicatedDom.dsiLow do           return whole.lowBound;
override proc ReplicatedDom.dsiHigh do          return whole.highBound;
override proc ReplicatedDom.dsiAlignedLow do    return whole.low;
override proc ReplicatedDom.dsiAlignedHigh do   return whole.high;
override proc ReplicatedDom.dsiFirst do         return whole.first;
override proc ReplicatedDom.dsiLast do          return whole.last;
override proc ReplicatedDom.dsiStride do        return whole.stride;
override proc ReplicatedDom.dsiAlignment do     return whole.alignment;
proc ReplicatedDom.dsiNumIndices do    return whole.sizeAs(uint);
proc ReplicatedDom.dsiDim(d) do        return whole.dim(d);
proc ReplicatedDom.dsiDim(param d) do  return whole.dim(d);
proc ReplicatedDom.dsiDims() do        return whole.dims();
//proc ReplicatedDom.dsiGetIndices() do  return whole.getIndices();
proc ReplicatedDom.dsiMember(i) do     return whole.contains(i);
proc ReplicatedDom.doiToString() do    return whole:string;
proc ReplicatedDom.dsiSerialWrite(x) { x.write(whole); }
proc ReplicatedDom.dsiLocalSlice(param strides, ranges) do return whole((...ranges));
override proc ReplicatedDom.dsiIndexOrder(i) do              return whole.indexOrder(i);
override proc ReplicatedDom.dsiMyDist() do                   return dist;

// Call 'setIndices' in order to leverage DefaultRectangular's handling of
// assignments from unstrided domains to strided domains.
proc ReplicatedDom.dsiSetIndices(x) where isTuple(x) && isRange(x(0)) {
  if traceReplicatedDist then
    writeln("ReplicatedDom.dsiSetIndices on ", x.type:string, ": ", x);
  dsiSetIndices({(...x)});
}

proc ReplicatedDom.dsiSetIndices(domArg: domain): void {
  if traceReplicatedDist then
    writeln("ReplicatedDom.dsiSetIndices on domain ", domArg);
  whole = domArg;
  coforall locDom in localDoms do
    on locDom do
      locDom!.domLocalRep = domArg;
}

proc ReplicatedDom.dsiGetIndices(): rank * range(idxType,
                                                 boundKind.both,
                                                 strides) {
  if traceReplicatedDist then writeln("ReplicatedDom.dsiGetIndices");
  return whole.getIndices();
}

// Iterators over the domain's indices (serial, leader, follower).
// Our semantics: yield each of the local domain's indices.

// Serial iterator
iter ReplicatedDom.these() {
  for i in whole do
    yield i;
}

iter ReplicatedDom.these(param tag: iterKind) where tag == iterKind.leader {
  // redirect to DefaultRectangular's leader
  for follow in chpl_myLocDom().domLocalRep.these(tag) do
    yield follow;
}

iter ReplicatedDom.these(param tag: iterKind, followThis) where tag == iterKind.follower {
  // redirect to DefaultRectangular
  for i in whole.these(tag, followThis) do
    yield i;
}

proc ReplicatedDom.dsiGetDist() {
  if _isPrivatized(dist) then
    return new replicatedDist(dist.pid, dist, _unowned=true);
  else
    return new replicatedDist(nullPid, dist, _unowned=true);
}

override proc ReplicatedDom.dsiDestroyDom() {
  coforall localeIdx in dist.targetLocDom {
    on dist.targetLocales(localeIdx) do
      delete localDoms(localeIdx);
  }
}

proc ReplicatedDom.dsiAssignDomain(rhs: domain, lhsPrivate:bool) {
  // Don't do anything for the arrays (no dsiReallocate/dsiPostReallocate)
  this.dsiSetIndices(rhs.getIndices());
}

/////////////////////////////////////////////////////////////////////////////
// arrays

//
// global array class
//
class ReplicatedArr : AbsBaseArr(?) {
  // These two are hard-coded in the compiler - it computes the array's
  // type string as '[dom.type] eltType.type'
  const dom; // must be a ReplicatedDom

  // the replicated arrays
  // NOTE: 'dom' must be initialized prior to initializing 'localArrs'
  var localArrs: [dom.dist.targetLocDom]
     unmanaged LocReplicatedArr(eltType, dom.rank, dom.idxType, dom.strides)?;

  //
  // helper function to get the local array safely
  //
  proc chpl_myLocArr() {
    if boundsChecking then
      if (!dom.dist.targetLocDom.contains(here.id)) then
        halt("locale ", here.id, " has no local replicand");
    // Force unwrap this reference for ease of use.
    return localArrs[here.id]!;
  }

  //
  // Access another locale's local array representation
  //
  proc replicand(loc: locale) ref {
    return localArrs[loc.id]!.arrLocalRep;
  }

  // scan the local locale's replicand
  proc doiScan(op, dom) where ((rank == 1) &&
                               chpl__scanStateResTypesMatch(op)) {
    return localArrs[here.id]!.arrLocalRep._instance.doiScan(op, dom);
  }
}

@chpldoc.nodoc
// TODO: Placeholder until we can do forwarding on _value fields
proc _array.replicand(loc: locale) ref {
  return _value.replicand(loc);
}

//
// local array class
//
class LocReplicatedArr : writeSerializable {
  // these generic fields let us give types to the other fields easily
  type eltType;
  param rank: int;
  type idxType;
  param strides: strideKind;

  var myDom: unmanaged LocReplicatedDom(rank, idxType, strides);
  pragma "local field" pragma "unsafe" pragma "no auto destroy"
  // may be re-initialized separately
  // always destroyed explicitly (to control deiniting elts)
  var arrLocalRep: [myDom.domLocalRep] eltType;

  proc init(type eltType,
            param rank: int,
            type idxType,
            param strides: strideKind,
            myDom: unmanaged LocReplicatedDom(rank, idxType, strides),
            param initElts: bool) {
    this.eltType = eltType;
    this.rank = rank;
    this.idxType = idxType;
    this.strides = strides;
    this.myDom = myDom;

    //
    // Trust that the caller will select the right `initElts` value for this
    // particular replicand.
    //
    this.arrLocalRep = this.myDom.domLocalRep
          .buildArray(eltType, initElts);
  }

  proc deinit() {
    _do_destroy_array(arrLocalRep, deinitElts=true);
  }

  // guard against dynamic dispatch resolution trying to resolve
  // write()ing out an array of sync vars and hitting the sync var
  // type's compilerError()
  @chpldoc.nodoc
  override proc serialize(writer, ref serializer) throws {
    halt("LocReplicatedArr.serialize() is not implemented / should not be needed");
  }
}


// ReplicatedArr initializer.
// We create our own to make field initializations convenient:
// 'eltType' and 'dom' as passed explicitly;
// the fields in the parent class, BaseArr, are initialized to their defaults.
//
proc ReplicatedArr.init(type eltType, dom) {
  super.init(eltType = eltType);
  this.dom = dom;
}

proc ReplicatedArr.strides param {
  return dom.strides;
}

proc ReplicatedArr.idxType type {
  return dom.idxType;
}

proc ReplicatedArr.rank param {
  return dom.rank;
}

// The same across all domain maps
override proc ReplicatedArr.dsiGetBaseDom() do return dom;


// privatization

override proc ReplicatedArr.dsiSupportsPrivatization() param do return true;

record ReplicatedArrPrvData {
  var dompid;
  var localArrs;
}

proc ReplicatedArr.dsiGetPrivatizeData() {
  if traceReplicatedDist then writeln("ReplicatedArr.dsiGetPrivatizeData");

  return new ReplicatedArrPrvData(dom.pid, localArrs);
}

proc ReplicatedArr.dsiPrivatize(privatizeData) {
  if traceReplicatedDist then writeln("ReplicatedArr.dsiPrivatize on ", here);

  var privdom = chpl_getPrivatizedCopy(this.dom.type, privatizeData.dompid);
  var result = new unmanaged ReplicatedArr(eltType, privdom);
  result.localArrs = privatizeData.localArrs;
  return result;
}


// create a new array over this domain
proc ReplicatedDom.dsiBuildArray(type eltType, param initElts:bool)
      : unmanaged ReplicatedArr(eltType, _to_unmanaged(this.type)) {

  // In order to support this, we would have to make copy-initialization
  // for replicated arrays initialize all replicands.
  if !isDefaultInitializable(eltType) then
    compilerError('cannot initialize replicated array because element ',
                  'type ', eltType:string, ' cannot be copied');

  if traceReplicatedDist then writeln("ReplicatedDom.dsiBuildArray");

  var result = new unmanaged ReplicatedArr(eltType, _to_unmanaged(this));

  // The locale where the 'dsiBuildArray' call originally takes place. We
  // need to save this so that we can decide which replicand to build with
  // `initElts=false` in the loop below.
  const globalArrayLocale = here;

  coforall (loc, locDom, locArr)
      in zip(dist.targetLocales, localDoms, result.localArrs) do on loc {

    //
    // When a replicated array is initialized with `initElts=false`, only
    // the replicand on the locale where the global array descriptor is
    // being built is also initialized with `initElts=false`. All the
    // other replicands are initialized with `initElts=true`, because they
    // will be default-initialized.
    //
    if here == globalArrayLocale && !initElts {
      locArr = new unmanaged LocReplicatedArr(eltType, rank, idxType,
                                              strides,
                                              locDom!,
                                              initElts=false);
    } else {
      locArr = new unmanaged LocReplicatedArr(eltType, rank, idxType,
                                              strides,
                                              locDom!,
                                              initElts=true);
    }
  }

  return result;
}

// Return the array element corresponding to the index - on the current locale
proc ReplicatedArr.dsiAccess(indexx) ref {
  return chpl_myLocArr().arrLocalRep[indexx];
}

proc ReplicatedArr.dsiBoundsCheck(indexx) {
  return dom.dist.targetLocDom.contains(here.id);
}

// Write the array out to the given Writer serially.
proc ReplicatedArr.dsiSerialWrite(f): void {
  localArrs[f._readWriteThisFromLocale.id]!.arrLocalRep._value.dsiSerialWrite(f);
}

proc ReplicatedArr.dsiSerialRead(f, loc): void {
  localArrs[f._readWriteThisFromLocale.id]!.arrLocalRep._value.dsiSerialRead(f);
}

proc isReplicatedArr(arr) param {
  return isSubtype(_to_borrowed(chpl__getActualArray(arr)).type, ReplicatedArr);
}

proc chpl_serialReadWriteRectangular(f, arr, dom) where isReplicatedArr(arr) {
  const origloc = f._readWriteThisFromLocale;
  on origloc do
    chpl_serialReadWriteRectangularHelper(f, arr, dom);
}

override proc ReplicatedArr.dsiElementInitializationComplete() {

  // Replicated arrays are weird. If a replicated is created via a coerceCopy,
  // then it was initialized with `initElts=false`. For replicated, this
  // means that only the replicand on the same locale as the newly created
  // array will be initialized with `initElts=false`. For correct behavior,
  // we only call "complete" for the replicand on the locale we're currently
  // on (which should be the same locale as the newly created array).
  chpl_myLocArr().arrLocalRep.dsiElementInitializationComplete();
}

override proc ReplicatedArr.dsiElementDeinitializationComplete() {
}

override proc ReplicatedArr.dsiDestroyArr(deinitElts:bool) {
  coforall (loc, locArr) in zip(dom.dist.targetLocales, localArrs) {
    on loc {
      delete locArr;
    }
  }
}

// iterators

// completely serial
iter ReplicatedArr.these() ref: eltType {
  for a in chpl_myLocArr().arrLocalRep do
    yield a;
}

iter ReplicatedArr.these(param tag: iterKind) where tag == iterKind.leader {
  // redirect to ReplicatedDom's leader
  for follow in dom.these(tag) do
    yield follow;
}

iter ReplicatedArr.these(param tag: iterKind, followThis) ref where tag == iterKind.follower {
  // redirect to DefaultRectangular
  for a in chpl_myLocArr().arrLocalRep.these(tag, followThis) do
    yield a;
}


/////////////////////////////////////////////////////////////////////////////
// reallocation

// This supports reassignment of the array's domain.
/*
This gets invoked upon reassignment of the array's domain,
prior to calling this.dom.dsiSetIndices().
So this needs to adjust anything in the array that won't be taken care of
in this.dom.dsiSetIndices(). In our case, that's nothing.
*/
/* no longer called
proc ReplicatedArr.dsiReallocate(d: domain): void {
  if traceReplicatedDist then
    writeln("ReplicatedArr.dsiReallocate ", dom.whole, " -> ", d, " (no-op)");
}
*/

// Note: returns an associative array
proc ReplicatedImpl.dsiTargetLocales() const ref {
  return targetLocales;
}
proc ReplicatedDom.dsiTargetLocales() const ref {
  return dist.targetLocales;
}
proc ReplicatedArr.dsiTargetLocales() const ref {
  return dom.dist.targetLocales;
}

proc ReplicatedDom.dsiHasSingleLocalSubdomain() param do  return true;
proc ReplicatedArr.dsiHasSingleLocalSubdomain() param do  return true;

proc ReplicatedDom.dsiLocalSubdomain(loc: locale) {
  if localDoms.domain.contains(loc.id) then
    return whole;
  else {
    var d: domain(rank, idxType, strides);
    return d;
  }
}

proc ReplicatedArr.dsiLocalSubdomain(loc: locale) {
  if localArrs.domain.contains(loc.id) then
    return dom.whole;
  else {
    var d: domain(rank, idxType, strides);
    return d;
  }
}

proc ReplicatedArr.dsiLocalSlice(ranges) {
  return chpl_myLocArr().arrLocalRep((...ranges));
}

} // ReplicatedDist
