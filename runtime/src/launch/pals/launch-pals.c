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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "chpllaunch.h"
#include "pals-utils.h"


#define CPU_BIND_OPT_STR "-cc"
static const char *ccArg = NULL;


int chpl_launch(int argc, char* argv[], int32_t numLocales,
                int32_t numLocalesPerNode) {
  if (numLocalesPerNode > 1) {
    chpl_launcher_no_colocales_error(NULL);
  }

  char **launchCmd = chpl_create_pals_cmd(argc, argv, numLocales, ccArg);
  return chpl_launch_using_exec(launchCmd[0], launchCmd, argv[0]);
}


int chpl_launch_handle_arg(int argc, char* argv[], int argNum,
                           int32_t lineno, int32_t filename) {
  int numArgs = 0;
  if (!strcmp(argv[argNum], CPU_BIND_OPT_STR)) {
    ccArg = argv[argNum+1];
    numArgs = 2;
  } else if (!strncmp(argv[argNum], CPU_BIND_OPT_STR"=",
                      strlen(CPU_BIND_OPT_STR) + 1)) {
    ccArg = &(argv[argNum][strlen(CPU_BIND_OPT_STR) + 1]);
    numArgs = 1;
  }
  if (numArgs > 0) {
      //
      // We don't support "list" or "mask" yet, though we may someday.
      //
    if (strcmp(ccArg, "none") &&
        strcmp(ccArg, "numa") &&
        strcmp(ccArg, "socket") &&
        strcmp(ccArg, "core") &&
        strcmp(ccArg, "thread") &&
        strcmp(ccArg, "depth")) {
      char msg[100];
      snprintf(msg, sizeof(msg), "'%s' is not a valid cpu assignment", ccArg);
      chpl_error(msg, 0, 0);
    }
  }
  return numArgs;
}


const argDescTuple_t* chpl_launch_get_help(void) {
  static const
    argDescTuple_t args[] =
    { { CPU_BIND_OPT_STR " keyword",
        "specify cpu assignment within a node:" },
      { "",
        "none (default), numa, socket, core, thread, depth" },
      { NULL, NULL },
    };
  return args;
}
