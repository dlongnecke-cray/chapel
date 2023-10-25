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

#ifndef CHPL_TOOLS_CHPLDEF_TEXT_REGISTRY_H
#define CHPL_TOOLS_CHPLDEF_TEXT_REGISTRY_H

#include "IterAdapter.h"
#include <string>
#include <unordered_map>

namespace chpldef {

class TextRegistry {
  struct Entry {
    int64_t version = -1;
    int64_t lastRevisionUpdated = -1;
    int64_t lastRevisionResolved = -1;
    bool isOpen = false;
  };
  using UriToEntryMap = std::unordered_map<std::string, Entry>;
  UriToEntryMap m_;
  const std::string* lastUriUpdated_ = nullptr;
  const std::string* lastUriResolved_ = nullptr;
  int64_t latestRevisionAnyUriUpdated_ = -1;
  int64_t latestRevisionAnyUriResolved_ = -1;
  size_t numOpenEntries_ = 0;
  Entry* entryOrNull(const std::string& uri);
  const Entry* entryOrNull(const std::string& uri) const;

public:
  /** A simple constant iterator over the URIs in the registry. */
  using iter = ConstIterAdapter<std::string, UriToEntryMap, IterMode::KEY>;

  /** Get a constant iterator to the beginning of this. */
  inline iter begin() const { return iter(m_.begin()); }

  /** Get a constant iterator to the end of this. */
  inline iter end() const { return iter(m_.end()); }

  /** Open an entry and set its initial version to 0. */
  void open(const std::string& uri);

  /** Close an entry. */
  void close(const std::string& uri);

  /** Returns 'true' if the registry contains an entry for 'uri'. */
  bool contains(const std::string& uri);

  /** Set the specified version of an entry if the entry exists. Because the
      client dictates the version number, an update always occurs. */
  void setVersion(const std::string& uri, int64_t ver);

  /** Set the last revision an existing entry's contents were updated. No
      update occurs if 'rev' is less than the stored revision for 'uri'. */
  void setLastRevisionUpdated(const std::string& uri, int64_t rev);

  /** Set the last revision an existing entry was resolved. No update occurs
      if 'rev' is less than the stored revision for 'uri'. */
  void setLastRevisionResolved(const std::string& uri, int64_t rev);

  /** Get the revision number for when an existing entry was updated, or
      return '-1' if no entry exists for 'uri'. */
  int64_t lastRevisionUpdated(const std::string& uri) const;

  /** Get the latest revision number for when any entry was updated, or
      return '-1' if none exists. */
  int64_t latestRevisionAnyUriUpdated() const;

  /** Get the revision number for when an existing entry was resolved, or
      return '-1' if no entry exists for 'uri'. */
  int64_t lastRevisionResolved(const std::string& uri) const;

  /** Get the latest revision number for when any entry was resolved, or
      return '-1' if none exists. */
  int64_t latestRevisionAnyUriResolved() const;

  /** Get the last URI to be updated, or 'nullptr' if none exists. */
  const std::string* lastUriUpdatedOrNull() const;

  /** Get the last URI to be resolved, or 'nullptr' if none exists. */
  const std::string* lastUriResolvedOrNull() const;

  /** Get the version of a URI, or return '-1' if 'uri' does not exist. */
  int64_t version(const std::string& uri) const;

  /** Check if a URI is open. */
  bool isOpen(const std::string& uri) const;

  /** Get the number of currently opened entries. */
  size_t numOpenEntries() const;

  /** Get the number of entries. */
  size_t numEntries() const;
};

} // end namespace 'chpldef'

#endif
