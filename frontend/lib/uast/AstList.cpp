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

#include "chpl/uast/AstList.h"

#include "chpl/framework/Context.h"
#include "chpl/uast/AstNode.h"

namespace chpl {
namespace uast {


bool updateAstList(AstList& keep, AstList& addin) {
  /*
   It's kind of like swapping 'keep' and 'addin' but it tries
   to keep old AST nodes when they are the same. This allows
   for more reuse of results in the query framework.

   'keep' is some old AST
   'addin' is some new AST we wish to replace it with

   on exit, 'keep' stores the AST we need to keep, and anything
   not kept is stored in 'addin'.

   The function returns 'true' if anything changed in 'keep'.
   */

  size_t keepSize = keep.size();
  size_t addinSize = addin.size();
  size_t keepIdx = 0;
  size_t addinIdx = 0;
  bool anyChanged = false;

  // handle some common short scenarios directly
  if (keepSize == 0 && addinSize == 0) {
    // both have zero length
    return false;
  } else if (keepSize == 0 || addinSize == 0) {
    // one has zero length but the other does not
    keep.swap(addin);
    return true;
  } else if (keepSize == 1 && addinSize == 1) {
    return AstNode::update(keep[0], addin[0]);
  }

  AstList newList;
  AstList junkList;

  // Append the elements from addin to newList, but
  // if we find an existing element that matches,
  // keep that.

  // checks for:
  //   insertion
  //   deletion
  //   replacement
  while (addinIdx < addinSize) {
    bool eltChanged = true;
    if (keepIdx < keepSize &&
        keep[keepIdx]->shallowMatch(addin[addinIdx].get())) {
      owned<AstNode> keepElt;
      owned<AstNode> addinElt;
      keepElt.swap(keep[keepIdx]);
      addinElt.swap(addin[addinIdx]);
      // it seems like a close enough match, so update it
      eltChanged = AstNode::update(keepElt, addinElt);
      // updateAST might have swapped the elements but
      // now keepElt is the one to put in newList.
      newList.push_back(std::move(keepElt));
      // put the other thing in junkList
      junkList.push_back(std::move(addinElt));
      addinIdx++;
      keepIdx++;
    } else if (keepIdx < keepSize && addinIdx+1 < addinSize &&
               keep[keepIdx]->shallowMatch(addin[addinIdx+1].get())) {
      // like an element was added in addin,
      // so add two elements from addin and pass 1 keep element
      owned<AstNode> keepElt;
      owned<AstNode> addinEltOne;
      owned<AstNode> addinEltTwo;
      keepElt.swap(keep[keepIdx]);
      addinEltOne.swap(addin[addinIdx]);
      addinEltTwo.swap(addin[addinIdx+1]);

      // keepElt matched addinEltTwo so try to update them
      AstNode::update(keepElt, addinEltTwo);
      // now keepElt is the one to keep and addinEltTwo is junk
      newList.push_back(std::move(addinEltOne));
      newList.push_back(std::move(keepElt));
      junkList.push_back(std::move(addinEltTwo));
      addinIdx += 2;
      keepIdx++;
    } else if (keepIdx+1 < keepSize &&
               keep[keepIdx+1]->shallowMatch(addin[addinIdx].get())) {
      // like an element was deleted from keep,
      // so add an element from addin but pass 2 keep elements
      owned<AstNode> addinElt;
      owned<AstNode> keepEltOne;
      owned<AstNode> keepEltTwo;
      addinElt.swap(addin[addinIdx]);
      keepEltOne.swap(keep[keepIdx]);
      keepEltTwo.swap(keep[keepIdx+1]);

      // keepEltTwo matched addinElt so try to update them
      AstNode::update(keepEltTwo, addinElt);
      // now keepEltTwo is the one to keep and addinElt is junk
      newList.push_back(std::move(keepEltTwo));
      junkList.push_back(std::move(keepEltOne));
      junkList.push_back(std::move(addinElt));
      addinIdx++;
      keepIdx += 2;
    } else if (keepIdx+1 < keepSize && addinIdx+1 < addinSize &&
               keep[keepIdx+1]->shallowMatch(addin[addinIdx+1].get())) {
      // like an element was replaced from keep,
      // so add 2 elements from addin and pass 2 keep elements
      owned<AstNode> addinEltOne;
      owned<AstNode> addinEltTwo;
      owned<AstNode> keepEltOne;
      owned<AstNode> keepEltTwo;
      addinEltOne.swap(addin[addinIdx]);
      addinEltTwo.swap(addin[addinIdx+1]);
      keepEltOne.swap(keep[keepIdx]);
      keepEltTwo.swap(keep[keepIdx+1]);

      // keepEltTwo matched addinEltTwo so try to update them
      AstNode::update(keepEltTwo, addinEltTwo);
      // now keepEltTwo is the one to keep and addinEltTwo is junk
      newList.push_back(std::move(addinEltOne));
      newList.push_back(std::move(keepEltTwo));
      junkList.push_back(std::move(keepEltOne));
      junkList.push_back(std::move(addinEltTwo));
      addinIdx += 2;
      keepIdx += 2;
    } else {
      // give up on trying to match things
      anyChanged = true;
      break;
    }

    anyChanged |= eltChanged;
  }

  // if we gave up trying to match things, we end up in this loop
  for (; addinIdx < addinSize; addinIdx++) {
    owned<AstNode> addinElt;
    addinElt.swap(addin[addinIdx]);
    newList.push_back(std::move(addinElt));
    anyChanged = true;
  }
  for (; keepIdx < keepSize; keepIdx++) {
    owned<AstNode> keepElt;
    keepElt.swap(keep[keepIdx]);
    junkList.push_back(std::move(keepElt));
    anyChanged = true;
  }

  CHPL_ASSERT(newList.size() == addin.size());
  // Swap the lists into place.
  keep.swap(newList);
  addin.swap(junkList);

  return anyChanged;
}

void markAstList(Context* context, const AstList& keep) {
  for (const auto& elt: keep) {
    context->markPointer(elt);
  }
}


} // end namespace uast
} // end namespace chpl
