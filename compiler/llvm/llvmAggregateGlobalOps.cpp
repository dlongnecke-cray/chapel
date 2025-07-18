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


// Merges sequences of loads or sequences of stores
// on address space(globalSpace) into memcpy operations so
// that we can do fewer puts or gets. For example
// %i1 = getelementptr ... %p, ..., 1
// %i2 = getelementptr ... %p, ..., 2
// %v1 = load %i1
// %v2 = load %i2
//
// will be replaced by
// %tmp = alloca
// memcpy(%tmp, %p, ...)
// %i1 = getelementptr ... %tmp, ..., 1
// %i2 = getelementptr ... %tmp ..., 2
// %v1 = load %i1
// %v2 = load %i2
//
// This optimization doesn't worry about combining such loads
// or stores into memcpys or memsets since MemCpyOptimizer
// should do that. It's just small cases where there are
// a few elements - MemCpyOptimizer might decide it's better
// to load/store to inline the memcpy for example, or the
// code generator might have started with loads and stores.

// This code was based upon the LLVM optimization MemCpyOptimizer.cpp
// TODO: MemCpyOptimizer has evolved quite a bit since then,
// so look at making a new version of this pass.
#include "llvmAggregateGlobalOps.h"

#ifdef HAVE_LLVM

#include "llvmTracker.h"
#include "llvmUtil.h"

#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"
#include "llvm/ADT/SmallSet.h"
#include "llvm/ADT/Statistic.h"

#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/GetElementPtrTypeIterator.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"

#include "llvm/Analysis/CallGraph.h"
#include "llvm/Analysis/LazyCallGraph.h"
#include "llvm/Analysis/ValueTracking.h"
#include "llvm/Transforms/Utils/ValueMapper.h"

#include <cstdio>
#include <list>
#include <string>
#include <unordered_map>
#include <memory>

#include "chpl/util/memory.h"

using namespace llvm;

namespace {


static const bool DEBUG = false;
static const bool extraChecks = true;
// Set a function name here to get lots of debugging output.
static const char* debugThisFn = "";


// If there is a gap between memory that we are loading,
// for example due to padding, or just because we didn't
// need some data, and the gap is < this amount, we
// will do one get and then just fish out the parts we
// used.
#define GET_EXTRA 64

static inline
bool isMergeableGlobalLoadOrStore(Instruction* I,
                                  unsigned globalSpace,
                                  bool findLoad, bool findStore)
{
  if( findLoad && isa<LoadInst>(I) ) {
    LoadInst *load = cast<LoadInst>(I);
    if( load->getPointerAddressSpace() == globalSpace &&
        load->isSimple() ) {
      return true;
    }
  }
  if( findStore && isa<StoreInst>(I)) {
    StoreInst *store = cast<StoreInst>(I);
    if( store->getPointerAddressSpace() == globalSpace &&
        store->isSimple() ) {
      return true;
    }
  }
  return false;
}
static inline
Value* getLoadStorePointer(Instruction* I)
{
  if( isa<LoadInst>(I) ) {
    LoadInst *load = cast<LoadInst>(I);
    return load->getPointerOperand();
  }
  if( isa<StoreInst>(I)) {
    StoreInst *store = cast<StoreInst>(I);
    return store->getPointerOperand();
  }
  return NULL;
}

// Given a start and end load/store instruction (in the same basic block),
// reorder the instructions so that any uses of loaded values are
// after Last.
// Returns the last instruction in the reordering.
static
Instruction* postponeDependentInstructions(
   Instruction *First,
   Instruction *Last,
   const SmallSet<Instruction*, 8>& toAggregate,
   bool DebugThis)
{
  // memopsUses stores uses of toAggregate
  SmallPtrSet<Instruction*, 8> memopsUses;
  Instruction *LastMemopUse = NULL;

  // Gather any instructions using the result of a load
  for (BasicBlock::iterator BI = First->getIterator();
       !BI->isTerminator();
       ++BI)
  {
    Instruction& insnRef = *BI;
    Instruction* insn = &insnRef;
    bool isUseOfMemop = false;

    // Check -- are any operands to this instruction memopsUses?
    for (User::op_iterator i = insn->op_begin(), e = insn->op_end(); i != e; ++i) {
      Value *v = *i;
      if (Instruction *used_insn = dyn_cast<Instruction>(v)) {
        if (toAggregate.count(used_insn) ||
            memopsUses.count(used_insn)){
          isUseOfMemop = true;
          break;
        }
      }
    }

    if( isUseOfMemop ) memopsUses.insert(insn);

    if( insn == Last ) break;
  }

  LastMemopUse = Last;

  // Reorder the instructions here.
  // Move all addressing instructions before StartInst.
  // Move all uses of loaded values before LastLoadOrStore (which will be removed).
  for (BasicBlock::iterator BI = First->getIterator();
       !BI->isTerminator();)
  {
    Instruction& insnRef = *BI;
    Instruction* insn = &insnRef;
    ++BI; // don't invalidate iterator.

    if (memopsUses.count(insn)) {
      if( DebugThis ) {
        dbgs() << "reorder found dependent instruction: ";
        insn->print(dbgs(), true);
        dbgs() << '\n';
      }
      // Move instruction dependent on load after final insn
      insn->removeFromParent();
      insn->insertAfter(LastMemopUse);
      LastMemopUse = insn;
    }
    if( insn == Last ) break;
  }

  return LastMemopUse;
}

// The next several fns are stolen almost totally unmodified from MemCpyOptimizer.
// modified code areas say CUSTOM.


static chpl::optional<int64_t> getPointerOffset(Value *Ptr1,
                                               Value *Ptr2,
                                               const DataLayout &DL) {
  chpl::optional<int64_t> optOffset;
#if HAVE_LLVM_VER >= 170
  optOffset = Ptr2->getPointerOffsetFrom(Ptr1, DL);
#else
  optOffset = isPointerOffset(Ptr1, Ptr2, DL);
#endif
  return optOffset;
}


struct MemOpRange { // from MemsetRange in MemCpyOptimizer
  // Start/End - A semi range that describes the span that this range covers.
  // The range is closed at the start and open at the end: [Start, End).
  int64_t Start, End;
  // CUSTOM: End including slack space, to allow for gaps
  int64_t SlackEnd;
  /// StartPtr - The getelementptr instruction that points to the start of the
  /// range.
  Value *StartPtr;
  /// Alignment - The known alignment of the first store.
  unsigned Alignment;
  // The load or store instructions. Called TheStores because
  // we stole this code from MemCpyOptimizer, but it might also store load instructions.
  SmallVector<Instruction*, 16> TheStores;
};
struct MemOpRanges { // from MemsetRanges in MemCpyOptimizer
  /// Ranges - A sorted list of the memset ranges.  We use std::list here
  /// because each element is relatively large and expensive to copy.
  std::list<MemOpRange> Ranges;
  typedef std::list<MemOpRange>::iterator range_iterator;
  const DataLayout &DL;
  MemOpRanges(const DataLayout &td) : DL(td) { }
  typedef std::list<MemOpRange>::const_iterator const_iterator;
  const_iterator begin() const { return Ranges.begin(); }
  const_iterator end() const { return Ranges.end(); }
  bool empty() const { return Ranges.empty(); }
  bool moreThanOneOp() const {
    if( Ranges.size() > 1 ) return true;
    MemOpRanges::const_iterator I = begin();
    MemOpRanges::const_iterator E = end();
    if( I != E ) {
      const MemOpRange &Range = *I;
      if( Range.TheStores.size() > 1 ) return true;
    }
    return false;
  }
  void addInst(int64_t offsetFromFirst, Instruction *Inst) {
    if( StoreInst *SI = dyn_cast<StoreInst>(Inst) ) {
      addStore(offsetFromFirst, SI);
    }
    if( LoadInst *LI = dyn_cast<LoadInst>(Inst) ) {
      addLoad(offsetFromFirst, LI);
    }
  }
  void addStore(int64_t OffsetFromFirst, StoreInst *SI) {
    int64_t StoreSize = DL.getTypeStoreSize(SI->getOperand(0)->getType());
    int64_t Slack = 0; // TODO - compute slack based on structure padding.
                       // Make slack include padding if it is after this
                       // element in a structure.

    addRange(OffsetFromFirst, StoreSize, Slack,
             SI->getPointerOperand(),
#if HAVE_LLVM_VER >= 150
             SI->getAlign().value(),
#else
             SI->getAlignment(),
#endif
             SI);
  }
  // CUSTOM because MemsetRanges doesn't work with LoadInsts.
  void addLoad(int64_t OffsetFromFirst, LoadInst *LI) {
    int64_t LoadSize = DL.getTypeStoreSize(LI->getType());
    int64_t Slack =  GET_EXTRA; // Pretend loads use more space...

    addRange(OffsetFromFirst, LoadSize, Slack,
             LI->getPointerOperand(),
#if HAVE_LLVM_VER >= 150
             LI->getAlign().value(),
#else
             LI->getAlignment(),
#endif
             LI);
  }
  // CUSTOM adds Slack
  void addRange(int64_t Start, int64_t Size, int64_t Slack, Value *Ptr,
                unsigned Alignment, Instruction *Inst);
};

/// addRange - Add a new store to the MemOpRanges data structure.  This adds a
/// new range for the specified store at the specified offset, merging into
/// existing ranges as appropriate.
///
/// Do a linear search of the ranges to see if this can be joined and/or to
/// find the insertion point in the list.  We keep the ranges sorted for
/// simplicity here.  This is a linear search of a linked list, which is ugly,
/// however the number of ranges is limited, so this won't get crazy slow.
// CUSTOM -- uses SlackEnd instead of End
void MemOpRanges::addRange(int64_t Start, int64_t Size, int64_t Slack, Value *Ptr,
                            unsigned Alignment, Instruction *Inst) {
  int64_t End = Start+Size;
  int64_t SlackEnd = Start+Size+Slack;
  range_iterator I = Ranges.begin(), E = Ranges.end();

  while (I != E && Start > I->SlackEnd)
    ++I;

  // We now know that I == E, in which case we didn't find anything to merge
  // with, or that Start <= I->End.  If End < I->Start or I == E, then we need
  // to insert a new range.  Handle this now.
  if (I == E || SlackEnd < I->Start) {
    MemOpRange &R = *Ranges.insert(I, MemOpRange());
    R.Start        = Start;
    R.End          = End;
    R.SlackEnd     = SlackEnd;
    R.StartPtr     = Ptr;
    R.Alignment    = Alignment;
    R.TheStores.push_back(Inst);
    return;
  }

  // This store overlaps with I, add it.
  I->TheStores.push_back(Inst);

  // CUSTOM: Update End too.
  if (End > I->End) I->End = End;

  // At this point, we may have an interval that completely contains our store.
  // If so, just add it to the interval and return.
  if (I->Start <= Start && I->SlackEnd >= SlackEnd)
    return;

  // Now we know that Start <= I->End and End >= I->Start so the range overlaps
  // but is not entirely contained within the range.

  // See if the range extends the start of the range.  In this case, it couldn't
  // possibly cause it to join the prior range, because otherwise we would have
  // stopped on *it*.
  if (Start < I->Start) {
    I->Start = Start;
    I->StartPtr = Ptr;
    I->Alignment = Alignment;
  }

  // Now we know that Start <= I->End and Start >= I->Start (so the startpoint
  // is in or right at the end of I), and that End >= I->Start.  Extend I out to
  // End.
  if (SlackEnd > I->SlackEnd) {
    I->SlackEnd = SlackEnd;
    range_iterator NextI = I;
    while (++NextI != E && SlackEnd >= NextI->Start) {
      // Merge the range in.
      I->TheStores.append(NextI->TheStores.begin(), NextI->TheStores.end());
      if (NextI->SlackEnd > I->SlackEnd)
        I->SlackEnd = NextI->SlackEnd;
      if (NextI->End > I->End)
        I->End = NextI->End;
      Ranges.erase(NextI);
      NextI = I;
    }
  }
}

// END stolen from MemCpyOptimizer.

} // end anon namespace.

AggregateGlobalOpsOpt::AggregateGlobalOpsOpt() {
  errs() << "Warning: aggregate-global-opts using default configuration\n";
}

AggregateGlobalOpsOpt::AggregateGlobalOpsOpt(unsigned _globalSpace)
  : globalSpace(_globalSpace) {
}

bool LegacyAggregateGlobalOpsOptPass::runOnFunction(Function &F) {
  return pass.run(F);
}

void
LegacyAggregateGlobalOpsOptPass::getAnalysisUsage(AnalysisUsage &AU) const {
  // TODO -- update these better
  AU.setPreservesCFG();
  /*AU.addRequired<DominatorTree>();
  AU.addRequired<MemoryDependenceAnalysis>();
  AU.addRequired<AliasAnalysis>();
  AU.addRequired<TargetLibraryInfo>();*/
  //AU.addPreserved<AliasAnalysis>();
  //AU.addPreserved<MemoryDependenceAnalysis>();
}

char LegacyAggregateGlobalOpsOptPass::ID = 0;
static RegisterPass<LegacyAggregateGlobalOpsOptPass> X("aggregate-global-ops", "Aggregate Global Pointer Operations", false /* only looks at CFG */, false /* Analysis pass */ );

// createAggregateGlobalOpsOptPass - The public interface to this file...
FunctionPass* createLegacyAggregateGlobalOpsOptPass(unsigned globalSpace)
{
  return new LegacyAggregateGlobalOpsOptPass(globalSpace);
}

PreservedAnalyses AggregateGlobalOpsOptPass::run(Function &F,
                                                 FunctionAnalysisManager &AM) {
  bool changed = pass.run(F);
  if (!changed) {
    return PreservedAnalyses::all();
  }

  PreservedAnalyses preserved;
  preserved.preserve<CallGraphAnalysis>();
  //preserved.preserve<LazyCallGraphAnalysis>();
  // TODO: I'm sure there is more that could be marked as preserved
  return preserved;
}

/// tryAggregating - When scanning forward over instructions, we look for
/// other loads or stores that could be aggregated with this one.
/// Returns the last instruction added (if one was added) since we might have
/// removed some loads or stores and that might invalidate an iterator.
Instruction *AggregateGlobalOpsOpt::tryAggregating(Instruction *StartInst, Value *StartPtr,
    bool DebugThis) {
  if (DL == 0) return 0;

  Module* M = StartInst->getParent()->getParent()->getParent();
  LLVMContext& Context = StartInst->getContext();

  Type* int8Ty = Type::getInt8Ty(Context);
  Type* sizeTy = DL->getIntPtrType(Context, 0);
  Type* globalInt8PtrTy = llvm::PointerType::get(int8Ty, globalSpace);
  bool isLoad = isa<LoadInst>(StartInst);
  bool isStore = isa<StoreInst>(StartInst);
  Instruction *lastAddedInsn = NULL;

  DenseMap<Instruction*, int> bbPos; // pos in basic block

  // Okay, so we now have a single global load/store. Scan to find
  // all subsequent stores of the same value to offset from the same pointer.
  // Join these together into ranges, so we can decide whether contiguous blocks
  // are stored.
  MemOpRanges Ranges(*DL);

  // Put the first store in since we want to preserve the order.
  Ranges.addInst(0, StartInst);

  BasicBlock::iterator BI(StartInst);
  int pos = 0;
  for (++BI; !BI->isTerminator(); ++BI) {

    pos++;
    Instruction& insnRef = *BI;
    Instruction* insn = &insnRef;
    if( isMergeableGlobalLoadOrStore(insn, globalSpace, isLoad, isStore) ) {
      // OK!
    } else {
      // If the instruction is readnone, ignore it, otherwise bail out.  We
      // don't even allow readonly here because we don't want something like:
      // A[1] = 2; strlen(A); A[2] = 2; -> memcpy(A, ...); strlen(A).
      if (BI->mayWriteToMemory())
        break;
      if (isStore && BI->mayReadFromMemory())
        break;
      continue;
    }

    if ( isStore && isa<StoreInst>(BI) ) {
      StoreInst *NextStore = cast<StoreInst>(BI);
      // If this is a store, see if we can merge it in.
      if (!NextStore->isSimple()) break;

      // Check to see if this store is to a constant offset from the start ptr.

      chpl::optional<int64_t> optOffset =
        getPointerOffset(StartPtr, NextStore->getPointerOperand(), *DL);
      if (!optOffset)
        break;
      int64_t Offset = *optOffset;

      Ranges.addStore(Offset, NextStore);
      bbPos[NextStore] = pos;
    } else {
      LoadInst *NextLoad = cast<LoadInst>(BI);
      if (!NextLoad->isSimple()) break;

      // Check to see if this load is to a constant offset from the start ptr.
      chpl::optional<int64_t> optOffset =
        getPointerOffset(StartPtr, NextLoad->getPointerOperand(), *DL);
      if (!optOffset)
        break;
      int64_t Offset = *optOffset;

      Ranges.addLoad(Offset, NextLoad);
      bbPos[NextLoad] = pos;
    }
  }

  // If we have no ranges, then we just had a single store with nothing that
  // could be merged in.  This is a very common case of course.
  if (!Ranges.moreThanOneOp())
    return 0;

  // Print out debugging information before reordering
  if (DebugThis) {
    for (MemOpRanges::const_iterator I = Ranges.begin(), E = Ranges.end();
         I != E; ++I) {
      const MemOpRange &Range = *I;

      if (Range.TheStores.size() == 1) continue;

      StartPtr = Range.StartPtr;

      if( DebugThis ) {
        dbgs() << "base is:";
        StartPtr->print(dbgs(), true);
        dbgs() << '\n';
      }

      if( isStore ) {
        for (SmallVector<Instruction*, 16>::const_iterator
             SI = Range.TheStores.begin(),
             SE = Range.TheStores.end(); SI != SE; ++SI) {
          StoreInst* oldStore = cast<StoreInst>(*SI);

          if( DebugThis ) {
            dbgs() << "have store in range:";
            oldStore->print(dbgs(), true);
            dbgs() << '\n';
          }
        }
      }

      if( isLoad ) {
        for (SmallVector<Instruction*, 16>::const_iterator
             SI = Range.TheStores.begin(),
             SE = Range.TheStores.end(); SI != SE; ++SI) {
          LoadInst* oldLoad = cast<LoadInst>(*SI);
          if( DebugThis ) {
            dbgs() << "have load in range:";
            oldLoad->print(dbgs(), true);
            dbgs() << '\n';
          }
        }
      }
    }
  }

  // Now that we have full information about ranges, loop over the ranges and
  // emit memcpy's for anything big enough to be worthwhile.
  for (MemOpRanges::const_iterator I = Ranges.begin(), E = Ranges.end();
       I != E; ++I) {
    const MemOpRange &Range = *I;

    if (Range.TheStores.size() == 1) continue; // Don't bother if there's only one thing...

    // Figure out the start and end instruction
    // and the set of loads and stores in the Range
    SmallSet<Instruction*, 8> toAggregate;
    Instruction *First = NULL;
    Instruction *Last = NULL;
    for (SmallVector<Instruction*, 16>::const_iterator
         SI = Range.TheStores.begin(),
         SE = Range.TheStores.end(); SI != SE; ++SI) {
      Instruction* insn = *SI;
      if (First == NULL || bbPos[insn] < bbPos[First])
        First = insn;
      if (Last == NULL || bbPos[insn] > bbPos[Last])
        Last = insn;

      toAggregate.insert(insn);
    }
    assert(First != NULL && Last != NULL);
    assert(bbPos[First] < bbPos[Last]); // < because at least 2 ops
    assert(toAggregate.count(First));
    assert(toAggregate.count(Last));

    // Move any instructions between First and Last that depend on
    // the loaded values to just after Last.
    postponeDependentInstructions(First, Last, toAggregate, DebugThis);

    // Compute the insert point for the new instructions
    // - just before the last load/store (which will be removed)
    Instruction* insertBefore = Last;
    IRBuilder<> irBuilder(insertBefore);

    // Get the starting pointer of the block.
    StartPtr = Range.StartPtr;

    if( DebugThis ) {
      dbgs() << "working on base:";
      StartPtr->print(dbgs(), true);
      dbgs() << '\n';
    }

    // Determine alignment
    unsigned Alignment = Range.Alignment;
    if (Alignment == 0) {
      Type* eltType = nullptr;
      if (LoadInst* ld = dyn_cast<LoadInst>(First)) {
        eltType = ld->getType();
      } else if (StoreInst* st = dyn_cast<StoreInst>(First)) {
        eltType = st->getValueOperand()->getType();
      }
      if (eltType) {
#if HAVE_LLVM_VER >= 160
        Alignment = DL->getABITypeAlign(eltType).value();
#else
        Alignment = DL->getABITypeAlignment(eltType);
#endif
      } else {
        assert(false && "expected eltType when computing natural alignment");
      }
    }

    Instruction *alloc = NULL;

    // create temporary alloca space to communicate to/from.
    alloc = makeAlloca(int8Ty, "agg.tmp", insertBefore,
                       Range.End-Range.Start, Alignment);

    // If storing, do the stores we had into our alloca'd region.
    if( isStore ) {
      for (SmallVector<Instruction*, 16>::const_iterator
           SI = Range.TheStores.begin(),
           SE = Range.TheStores.end(); SI != SE; ++SI) {
        StoreInst* oldStore = cast<StoreInst>(*SI);

        int64_t offset = 0;

        chpl::optional<int64_t> optOffset =
          getPointerOffset(StartPtr, oldStore->getPointerOperand(), *DL);
        assert(!!optOffset);
        offset = *optOffset;
        assert(offset >= 0);

        assert(!(oldStore->isVolatile() || oldStore->isAtomic()));

        Constant* offsetC = ConstantInt::get(sizeTy, offset, true);
        Value* offsets[] = {offsetC};
        Value* i8Dst = irBuilder.CreateInBoundsGEP(int8Ty,
                                                   alloc,
                                                   offsets);
        trackLLVMValue(i8Dst);

        Type* StoreType = oldStore->getValueOperand()->getType();
        Type* PtrType = llvm::PointerType::getUnqual(StoreType);
        Value* Dst = irBuilder.CreatePointerCast(i8Dst, PtrType);
        trackLLVMValue(Dst);

        StoreInst* newStore =
          irBuilder.CreateStore(oldStore->getValueOperand(), Dst);
        trackLLVMValue(newStore);
        newStore->setAlignment(oldStore->getAlign());
        newStore->takeName(oldStore);
      }
    }

    // cast the pointer that was load/stored to i8 if necessary.
    Value *globalPtr = irBuilder.CreatePointerCast(StartPtr, globalInt8PtrTy);
    trackLLVMValue(globalPtr);

    // Get a Constant* for the length.
    Constant* len = ConstantInt::get(sizeTy, Range.End-Range.Start, false);

    // Now add the memcpy instruction
    unsigned addrSpaceDst,addrSpaceSrc;
    addrSpaceDst = addrSpaceSrc = 0;
    if( isStore ) addrSpaceDst = globalSpace;
    if( isLoad ) addrSpaceSrc = globalSpace;

    Type *types[3];
    types[0] = llvm::PointerType::get(int8Ty, addrSpaceDst);
    types[1] = llvm::PointerType::get(int8Ty, addrSpaceSrc);
    types[2] = sizeTy;

#if LLVM_VERSION_MAJOR >= 20
    Function *func = Intrinsic::getOrInsertDeclaration(M, Intrinsic::memcpy, types);
#else
    Function *func = Intrinsic::getDeclaration(M, Intrinsic::memcpy, types);
#endif
    // LLVM 7 and later: memcpy has no alignment argument
    Value* args[4]; // dst src len isvolatile

    if( isStore ) {
      // it's a store (ie put)
      args[0] = globalPtr;
      args[1] = alloc;
    } else {
      // it's a load (ie get)
      args[0] = alloc;
      args[1] = globalPtr;
    }
    args[2] = len;

    // LLVM 7 and later: memcpy has no alignment argument

    // isvolatile
    args[3] = ConstantInt::get(Type::getInt1Ty(Context), 0, false);

    Instruction* aMemCpy = irBuilder.CreateCall(func, args);
    trackLLVMValue(aMemCpy);

    if (!Range.TheStores.empty())
      aMemCpy->setDebugLoc(Range.TheStores[0]->getDebugLoc());

    lastAddedInsn = aMemCpy;

    // If loading, load from the memcpy'd region
    if( isLoad ) {
      for (SmallVector<Instruction*, 16>::const_iterator
           SI = Range.TheStores.begin(),
           SE = Range.TheStores.end(); SI != SE; ++SI) {
        LoadInst* oldLoad = cast<LoadInst>(*SI);
        int64_t offset = 0;

        chpl::optional<int64_t> optOffset =
          getPointerOffset(StartPtr, oldLoad->getPointerOperand(), *DL);
        assert(!!optOffset);
        offset = *optOffset;
        assert(offset >= 0);

        assert(!(oldLoad->isVolatile() || oldLoad->isAtomic()));

        Constant* offsetC = ConstantInt::get(sizeTy, offset, true);
        Value* offsets[] = {offsetC};
        Value* i8Src = irBuilder.CreateInBoundsGEP(int8Ty,
                                                   alloc,
                                                   offsets);
        trackLLVMValue(i8Src);

        Type* LoadType = oldLoad->getType();
        Type* PtrType = llvm::PointerType::getUnqual(LoadType);

        Value* Src = irBuilder.CreatePointerCast(i8Src, PtrType);
        trackLLVMValue(Src);

        LoadInst* newLoad = irBuilder.CreateLoad(LoadType, Src);
        trackLLVMValue(newLoad);

        newLoad->setAlignment(oldLoad->getAlign());
        oldLoad->replaceAllUsesWith(newLoad);
        newLoad->takeName(oldLoad);
        lastAddedInsn = newLoad;
      }
    }

    // Zap all the old loads/stores
    for (SmallVector<Instruction*, 16>::const_iterator
         SI = Range.TheStores.begin(),
         SE = Range.TheStores.end(); SI != SE; ++SI) {
      (*SI)->eraseFromParent();
    }
  }

  return lastAddedInsn;
}

// AggregateGlobalOpsOpt::run - This is the main transformation
// entry point for a function. Returns true if it changed the function.
//
bool AggregateGlobalOpsOpt::run(Function &F) {
  bool ChangedFn = false;
  bool DebugThis = DEBUG;

  if( debugThisFn[0] && F.getName() == debugThisFn ) {
    DebugThis = true;
  }

  //MD = &getAnalysis<MemoryDependenceAnalysis>();
  DL = & F.getParent()->getDataLayout();
  //TLI = &getAnalysis<TargetLibraryInfo>();

  // Walk all instruction in the function.
  for (Function::iterator BB = F.begin(), BBE = F.end(); BB != BBE; ++BB) {

    bool ChangedBB = false;

    if( DebugThis ) {
      dbgs() << "Working on BB ";
      BB->print(dbgs(), nullptr, false, true);
      dbgs() << '\n';
    }

    for (BasicBlock::iterator BI = BB->begin(), BE = BB->end(); BI != BE;) {
      // Avoid invalidating the iterator.
      Instruction& insnRef = *BI;
      Instruction *I = &insnRef;
      ++BI;

      if( isMergeableGlobalLoadOrStore(I, globalSpace, true, true) ) {
        Instruction* lastAdded = tryAggregating(I, getLoadStorePointer(I), DebugThis);
        if( lastAdded ) {
          ChangedBB = true;
          ChangedFn = true;
          BI = lastAdded->getIterator();
        }
      }
    }

    if( DebugThis && ChangedBB ) {
      dbgs() << "in function " << F.getName() << "\n";
      dbgs() << "After transform BB is ";
      BB->print(dbgs(), nullptr, false, true);
      dbgs() << '\n';
    }

  }

  if( extraChecks ) {
    assert(!verifyFunction(F, &errs()));
  }

  if (DebugThis && ChangedFn)
    printf("AggregateGlobalOpsOpt changed %s\n", F.getName().str().c_str());

  //MD = 0;
  return ChangedFn;
}

#endif
