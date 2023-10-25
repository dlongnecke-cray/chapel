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

#include "./TestClient.h"

static void testDiagnostics(const std::string& uri,
                            const std::string& text) {
  auto client = TestClient::create();

  client.advanceServerToReady();

  /** Send 'DidOpen' to communicate text open in the editor. */
  client.sendDidOpen(uri, text);

  /** Collect the Diagnostic messages we should expect to see. */
  const auto diags = TestClient::collectDiagnosticMessages(uri, text);
}

static void test0(void) {
  const auto uri = "test0.chpl";
  const auto text = R"""(
  a;
  b;
  c;
  )""";

  testDiagnostics(uri, text);
}

int main(int argc, char** argv) {
  test0();
  return 0;
}
