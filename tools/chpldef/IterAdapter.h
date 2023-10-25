/*
 * Copyright 2020-2023 Hewlett Packard Enterprise Development LP
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

#ifndef CHPL_TOOLS_CHPLDEF_ITER_ADAPTER_H
#define CHPL_TOOLS_CHPLDEF_ITER_ADAPTER_H

#include <map>
#include <vector>

/**
    A common pattern is for types that are built over a map or vector to
    want to offer an iterator over just keys or values, without exposing
    the iterator of the underlying collection.

    This 'IterAdapter' type is a simple wrapper over a pair of collection
    iterators 'begin' and 'end'. It helps avoid the tedium of having to
    embed a bunch of bite-sized iterator definitions into every type that
    wants to "forward" an existing iterator.
*/
namespace chpldef {

/** Use this macro to stamp out the 'using' declarations iterators need. */
#define CHPLDEF_ITER_ADAPTER_DETAILS(SELF__, T__, C__, ITER__) \
  using difference_type = typename C__::difference_type; \
  using value_type = T__; \
  using pointer = T__*; \
  using reference = T__&; \
  using iterator_category = std::forward_iterator_tag; \
  using self = SELF__; \
  using forwarded_iterator = typename C__::ITER__

#define CHPLDEF_CONST_ITER_ADAPTER_DETAILS(SELF__, T__, C__) \
  CHPLDEF_ITER_ADAPTER_DETAILS(SELF__, const T__, C__, const_iterator)

/** What part of the slot an iterator is yielding, by default 'CONTENTS'.
    In which case this iterator just returns whatever the underlying
    iterator is returning. */
enum class IterMode { KEY, VALUE, CONTENTS };

template <typename T, typename C, IterMode M=IterMode::CONTENTS>
struct ConstIterAdapter {
  CHPLDEF_CONST_ITER_ADAPTER_DETAILS(ConstIterAdapter, T, C);
  forwarded_iterator it_;
  explicit ConstIterAdapter(forwarded_iterator it) : it_(it) {}
  inline self& operator++() { it_++; return *this; }
  inline const T& operator*() const { return *it_; }
  inline bool operator==(const self& it) const { return it_ == it.it_; }
  inline bool operator!=(const self& it) const { return it_ != it.it_; }
};

/** Specialization to yield only e.g., map keys. You can specialize the type
    if your collection does not store K/V pairs in 'std::pair' as the
    standard maps do. */
template <typename T, typename C>
struct ConstIterAdapter<T, C, IterMode::KEY> {
  CHPLDEF_CONST_ITER_ADAPTER_DETAILS(ConstIterAdapter, T, C);
  forwarded_iterator it_;
  explicit ConstIterAdapter(forwarded_iterator it) : it_(it) {}
  inline self& operator++() { it_++; return *this; }
  inline const T& operator*() const { return (*it_).first; }
  inline bool operator==(const self& it) const { return it_ == it.it_; }
  inline bool operator!=(const self& it) const { return it_ != it.it_; }
};

/** Specialization to yield only e.g., map values. You can further specialize
    over the collection type 'C' if your collection does not store K/V pairs
    in 'std::pair' as the standard maps do. */
template <typename T, typename C>
struct ConstIterAdapter<T, C, IterMode::VALUE> {
  CHPLDEF_CONST_ITER_ADAPTER_DETAILS(ConstIterAdapter, T, C);
  forwarded_iterator it_;
  explicit ConstIterAdapter(forwarded_iterator it) : it_(it) {}
  inline self& operator++() { it_++; return *this; }
  inline const T& operator*() const { return *it_->second; }
  inline bool operator==(const self& it) const { return it_ == it.it_; }
  inline bool operator!=(const self& it) const { return it_ != it.it_; }
};

} // end namespace 'chpldef'

#endif
