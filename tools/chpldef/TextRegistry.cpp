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

#include "TextRegistry.h"

namespace chpldef {

TextRegistry::Entry* TextRegistry::entryOrNull(const std::string& uri) {
  auto it = m_.find(uri);
  return it != m_.end() ? &it->second : nullptr;
}

const TextRegistry::Entry*
TextRegistry::entryOrNull(const std::string& uri) const {
  auto it = m_.find(uri);
  return it != m_.end() ? &it->second : nullptr;
}

void TextRegistry::open(const std::string& uri) {
  auto pair = m_.emplace(std::make_pair(uri, TextRegistry::Entry()));
  if (pair.second) {
    auto it = pair.first;
    auto& e = it->second;
    e.isOpen = true;
    numOpenEntries_++;
  }
}

void TextRegistry::close(const std::string& uri) {
  if (auto e = entryOrNull(uri)) {
    e->isOpen = false;
    numOpenEntries_--;
  }
}

bool TextRegistry::contains(const std::string& uri) {
  return (entryOrNull(uri) != nullptr);
}

void TextRegistry::setVersion(const std::string& uri, int64_t ver) {
  if (auto e = entryOrNull(uri)) e->version = ver;
}

void
TextRegistry::setLastRevisionUpdated(const std::string& uri, int64_t rev) {
  auto it = m_.find(uri);
  if (it == m_.end()) return;
  auto& stored = it->second.lastRevisionUpdated;
  if (stored < rev) {
    stored = rev;
    lastUriUpdated_ = &it->first;
    if (rev > latestRevisionAnyUriUpdated_) {
      latestRevisionAnyUriUpdated_ = rev;
    }
  }
}

void
TextRegistry::setLastRevisionResolved(const std::string& uri, int64_t rev) {
  auto it = m_.find(uri);
  if (it == m_.end()) return;
  auto& stored = it->second.lastRevisionResolved;
  if (stored < rev) {
    stored = rev;
    lastUriResolved_ = &it->first;
    if (rev > latestRevisionAnyUriResolved_) {
      latestRevisionAnyUriResolved_ = rev; 
    }
  }
}

int64_t TextRegistry::lastRevisionUpdated(const std::string& uri) const {
  if (auto e = entryOrNull(uri)) return e->lastRevisionUpdated;
  return -1;
}

int64_t TextRegistry::latestRevisionAnyUriUpdated() const {
  return latestRevisionAnyUriUpdated_; 
}

int64_t TextRegistry::lastRevisionResolved(const std::string& uri) const {
  if (auto e = entryOrNull(uri)) return e->lastRevisionResolved;
  return -1;
}

int64_t TextRegistry::latestRevisionAnyUriResolved() const {
  return latestRevisionAnyUriResolved_;
}

const std::string* TextRegistry::lastUriUpdatedOrNull() const {
  return lastUriUpdated_;
}

const std::string* TextRegistry::lastUriResolvedOrNull() const {
  return lastUriResolved_;
}

int64_t TextRegistry::version(const std::string& uri) const {
  if (auto e = entryOrNull(uri)) return e->version;
  return -1;
}

bool TextRegistry::isOpen(const std::string& uri) const {
  if (auto e = entryOrNull(uri)) return e->isOpen;
  return false;
}

size_t TextRegistry::numOpenEntries() const {
  return numOpenEntries_;  
}

size_t TextRegistry::numEntries() const {
  return m_.size();
};

} // end namespace 'chpldef'
