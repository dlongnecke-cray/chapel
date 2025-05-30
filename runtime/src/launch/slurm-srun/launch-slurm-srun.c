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

#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "chpllaunch.h"
#include "chpl-env.h"
#include "chpl-mem.h"
#include "chpltypes.h"
#include "error.h"

#define baseSBATCHFilename ".chpl-slurm-sbatch-"

#define CHPL_WALLTIME_FLAG "--walltime"
#define CHPL_GENERATE_SBATCH_SCRIPT "--generate-sbatch-script"
#define CHPL_NODELIST_FLAG "--nodelist"
#define CHPL_PARTITION_FLAG "--partition"
#define CHPL_EXCLUDE_FLAG "--exclude"
#define CHPL_GPUS_PER_NODE_FLAG "--gpus-per-node"


static char* debug = NULL;
static char* walltime = NULL;
static int generate_sbatch_script = 0;
static char* nodelist = NULL;
static char* partition = NULL;
static char* reservation = NULL;
static char* exclude = NULL;
static char* gpusPerNode = NULL;

char* slurmFilename = NULL;

// /tmp is always available on cray compute nodes (it's a memory mounted dir.)
// If we ever need this to run on non-cray machines, we should update this to
// look for the ISO/IEC 9945 env var options first, then P_tmpdir, then "/tmp"
static const char* getTmpDir(void) {
  return "/tmp";
}

// Check what version of slurm is on the system
// Returns 0 on success, 1 and prints an error message on failure
static int checkSlurmVersion(void) {
  const int buflen = 256;
  char versionBuf[buflen];
  char *argv[3];
  argv[0] = (char *) "sbatch";
  argv[1] = (char *) "--version";
  argv[2] = NULL;

  char* version = getenv("CHPL_LAUNCHER_SLURM_VERSION");
  if (version == NULL) {
    version = versionBuf;
    memset(version, 0, buflen);
    if (chpl_run_utility1K("sbatch", argv, version, buflen) <= 0) {
      chpl_error("Error trying to determine slurm version", 0, 0);
    }
  }
  if (!strstr(version, "slurm")) {
    printf("Error: This launcher is only compatible with native slurm\n");
    printf("Output of \"sbatch --version\" was: %s\n", version);
    return 1;
  }
  return 0;
}

static int nomultithread(int batch) {
  char* hint;
  if ((hint = getenv("SLURM_HINT")) && strcmp(hint, "nomultithread") == 0)
    return 1;
  if (batch && (hint = getenv("SBATCH_HINT")) && strcmp(hint, "nomultithread") == 0)
    return 1;
  return 0;
}


// Get the number of locales from the environment variable or if that is not
// set just use sinfo to get the number of cpus and divide by the number
// of locales per node.
static int getCoresPerLocale(int nomultithread, int32_t localesPerNode) {
  int numCores = -1;
  int threadsPerCore = -1;
  const int buflen = 1024;
  char buf[buflen];
  char orig[buflen];
  char partition_arg[128];
  char* argv[7];
  char reservationBuf[128];
  char* numCoresString = getenv("CHPL_LAUNCHER_CORES_PER_LOCALE");
  char* cpusPerTaskString = getenv("SLURM_CPUS_PER_TASK");

  if (numCoresString) {
    numCores = atoi(numCoresString);
    if (numCores > 0)
      return numCores;
    chpl_warning("CHPL_LAUNCHER_CORES_PER_LOCALE must be > 0.", 0, 0);
  }

  if (cpusPerTaskString) {
    numCores = atoi(cpusPerTaskString);
    return numCores;
  }

  // We need the information about the partition that srun/sbatch will
  // use.

  argv[0] = (char *)  "sinfo";            // use sinfo to get num cpus
  argv[1] = (char *)  "--exact";        // get exact otherwise you get 16+, etc
  argv[2] = (char *)  "--format=%c %Z %i"; // format for cpu/node,
                                           // threads/cpu, and reservation
                                           // (%c %Z %i)
  argv[3] = (char *)  "--sort=+c";      // sort by num cpu (lower to higher)
  argv[4] = (char *)  "--noheader";     // don't show header (hide "CPU" header)
  argv[5] = NULL;
  // Set the partition if it was specified
  if (partition) {
    snprintf(partition_arg, sizeof(partition_arg), "--partition=%s",
             partition);
    argv[5] = partition_arg;
    argv[6] = NULL;
  }

  // We may have to run sinfo twice -- once with %i and once without
  for (int i = 0; i < 2; i++) {
    memset(buf, 0, buflen);
    int rc = chpl_run_utility1K("sinfo", argv, buf, buflen);
    if ((rc == 0) && partition) {
      // if sinfo produced no output it might be because the partition does
      // not exist.
      char msg[2048];
      snprintf(msg, sizeof(msg),
               "'sinfo' produced no output. Verify that partition "
               "'%s' exists.", partition);

      chpl_error(msg, 0, 0);
    } else if (rc <= 0) {
        chpl_error("Error trying to determine number of cores per node", 0, 0);
    }

    if (strstr(buf, "Invalid node format specification: i")) {
      // older versions of sinfo don't support the %i format. Try again
      // without it. We won't be able to exclude reservations, but there's
      // not much we can do about that.
      argv[2] = (char *)  "--format=%c %Z";
    } else {
      // sinfo produced non-error output
      break;
    }
  }

  char *cursor = buf;
  char *line;
  strcpy(orig, buf);
  chpl_bool found = false;
  while ((line = strsep(&cursor, "\n")) != NULL) {
    if (*line != '\0') {
      int scanned = sscanf(line, "%d %d %127s", &numCores, &threadsPerCore,
                         reservationBuf);
      if (scanned == 2) {
        if (!reservation) {
          found = true;
          break;
        }
      } else if (scanned == 3) {
        if (reservation && (!strcmp(reservation, reservationBuf))) {
          found = true;
          break;
        }
      }
    }
  }
  if (!found) {
    char msg[2048];
    snprintf(msg, sizeof(msg),
            "unable to determine number of cores per locale; "
             "please set CHPL_LAUNCHER_CORES_PER_LOCALE\n"
             "Output of \"sinfo\" was:\n%s", orig);
    chpl_error(msg, 0, 0);
  }

  if (nomultithread) {
    if (localesPerNode == 1) {
      numCores /= threadsPerCore;
    } else {
      chpl_env_set("CHPL_RT_NO_MULTITHREAD", "true", 0);
    }
  }
  return numCores / localesPerNode;
}


static chpl_bool getSlurmDebug(chpl_bool batch) {
  chpl_bool result = false;
  const char *varName = (batch) ? "SBATCH_DEBUG" : "SLURM_DEBUG";
  char *debugString = getenv(varName);
  if (debugString) {
    result = (atoi(debugString) != 0) ? true : false;
  }
  return result;
}


// create the command that will actually launch the program and
// create any files needed for the launch like the batch script
static char* chpl_launch_create_command(int argc, char* argv[],
                                        int32_t numLocales,
                                        int32_t numLocalesPerNode) {
  int i;
  int size;
  char* baseCommand=NULL;
  char* command;
  FILE* slurmFile;
  char* account = getenv("CHPL_LAUNCHER_ACCOUNT");
  char* constraint = getenv("CHPL_LAUNCHER_CONSTRAINT");
  char* outputfn = getenv("CHPL_LAUNCHER_SLURM_OUTPUT_FILENAME");
  char* errorfn = getenv("CHPL_LAUNCHER_SLURM_ERROR_FILENAME");
  char* nodeAccessEnv = getenv("CHPL_LAUNCHER_NODE_ACCESS");
  char* memEnv = getenv("CHPL_LAUNCHER_MEM");
  const char* nodeAccessStr = NULL;
  const char* memStr = NULL;
  char* basenamePtr = strrchr(argv[0], '/');
  pid_t mypid;
  char  jobName[128];

  // For programs with large amounts of output, a lot of time can be
  // spent syncing the stdout buffer to the output file. This can cause
  // tests to run extremely slow and can cause stdout and stderr to
  // become mixed in odd ways since stdout is buffered but stderr isn't.
  // To alleviate this problem (and to allow accurate external timings
  // of tests) this allows the output to be "buffered" to <tmpDir> and
  // copied once the job is done.
  //
  // Note that this should work even for multi-locale tests since all
  // the output is piped through a single node.
  //
  // The *NoFmt versions are the same as the regular version, except
  // that instead of using slurms output formatters, they use the
  // corresponding env var. e.g. you have to use '--output=%j.out to
  // have the output file be <jobid>.out, but when we copy the tmp file
  // to the real output file, the %j and other formatters aren't
  // available so we have to use the equivalent slurm env var
  // (SLURM_JOB_ID.) The env vars can't be used when specifying --output
  // because they haven't been initialized yet
  char* bufferStdout    = getenv("CHPL_LAUNCHER_SLURM_BUFFER_STDOUT");
  const char* tmpDir    = getTmpDir();
  char* stdoutFile         = NULL;
  char* stdoutFileNoFmt    = NULL;
  char* tmpStdoutFileNoFmt = NULL;

  // Note: if numLocalesPerNode > numLocales then some cores will go unused. This
  // is by design, as it allows for scalability testing by increasing the
  // number of locales per node. If the user wants a single locale to use all
  // of the cores they should set CHPL_RT_LOCALES_PER_NODE to 1 or not set it
  // at all.

  // command line walltime takes precedence over env var
  if (!walltime) {
    walltime = getenv("CHPL_LAUNCHER_WALLTIME");
  }

  // command line nodelist takes precedence over env var
  if (!nodelist) {
    nodelist = getenv("CHPL_LAUNCHER_NODELIST");
  }

  // command line partition takes precedence over Chapel env var
  if (!partition) {
    partition = getenv("CHPL_LAUNCHER_PARTITION");
  }

  // Chapel env var takes precedence over Slurm
  if (!partition) {
    partition = getenv("SLURM_PARTITION");
  }

  // job's partition trumps everything
  char *tmp = getenv("SLURM_JOB_PARTITION");
  if (tmp) {
    partition = tmp;
  }

  // command line exclude takes precedence over env var
  if (!exclude) {
    exclude = getenv("CHPL_LAUNCHER_EXCLUDE");
  }

  // command line gpus per node takes precedence over env var
  if (!gpusPerNode) {
    gpusPerNode = getenv("CHPL_LAUNCHER_GPUS_PER_NODE");
  }

  reservation = getenv("SLURM_RESERVATION");

  // request exclusive node access by default, but allow user to override
  if (nodeAccessEnv == NULL || strcmp(nodeAccessEnv, "exclusive") == 0) {
    nodeAccessStr = "exclusive";
  } else if (strcmp(nodeAccessEnv, "shared") == 0 ||
             strcmp(nodeAccessEnv, "share") == 0 ||
             strcmp(nodeAccessEnv, "oversubscribed") == 0  ||
             strcmp(nodeAccessEnv, "oversubscribe") == 0) {
    nodeAccessStr = "share";
  } else if (strcmp(nodeAccessEnv, "unset") == 0) {
    nodeAccessStr = NULL;
  } else {
    chpl_warning("unsupported 'CHPL_LAUNCHER_NODE_ACCESS' option", 0, 0);
    nodeAccessStr = "exclusive";
  }

  // request all memory by default ("0"), but allow user to override
  if (memEnv == NULL) {
    memStr = "0";
  } else if (strcmp(memEnv, "unset") == 0) {
    memStr = NULL;
  } else {
    memStr = memEnv;
  }

  if (basenamePtr == NULL) {
    basenamePtr = argv[0];
  } else {
    basenamePtr++;
  }

  chpl_launcher_get_job_name(basenamePtr, jobName, sizeof(jobName));

  chpl_compute_real_binary_name(argv[0]);

  if (debug) {
    mypid = 0;
  } else {
    mypid = getpid();
  }

  // Elliot, 12/02/14: TODO we have a bunch of similar commands to build up the
  // interactive and batch versions. It would be nicer to build up the commands
  // and postprocess depending on interactive vs batch. As in build up "--quiet
  // --nodes ..." and afterwards split on ' ' and then add #SBATCH and a
  // newline for batch mode and leave it as is for interactive"

  // if were running a batch job
  if (getenv("CHPL_LAUNCHER_USE_SBATCH") != NULL || generate_sbatch_script) {

    const int filename_size = strlen(baseSBATCHFilename) +
                              snprintf(NULL, 0, "%d", (int)mypid) + 1;

    if (filename_size <= 0) {
      chpl_internal_error("An unexpected error occured while computing \
                          sbatch filename size");
    }

    slurmFilename = (char*)chpl_mem_allocMany(filename_size, sizeof(char),
                                              CHPL_RT_MD_FILENAME, -1, 0);

    // set the sbatch filename
    const int ret = snprintf(slurmFilename, filename_size, "%s%d",
                             baseSBATCHFilename, (int)mypid);

    if (ret <= 0) {
      chpl_internal_error("An unexpected error occured while generating \
                          sbatch filename");
    }

    // open the batch file and create the header

    slurmFile = fopen(slurmFilename, "w");
    fprintf(slurmFile, "#!/bin/sh\n\n");

    // set the job name
    fprintf(slurmFile, "#SBATCH --job-name=%s\n", jobName);

    if (!getSlurmDebug(/*batch=*/true)) {
      // suppress informational messages, will still display errors
      fprintf(slurmFile, "#SBATCH --quiet\n");
    }

    int32_t numNodes = (numLocales + numLocalesPerNode - 1) / numLocalesPerNode;

    fprintf(slurmFile, "#SBATCH --nodes=%d\n", numNodes);
    fprintf(slurmFile, "#SBATCH --ntasks=%d\n", numLocales);
    int localesOnNode = (numLocales < numLocalesPerNode) ?
                        numLocales : numLocalesPerNode;
    int cpusPerTask = getCoresPerLocale(nomultithread(true), localesOnNode);
    fprintf(slurmFile, "#SBATCH --cpus-per-task=%d\n", cpusPerTask);

    // request specified node access
    if (nodeAccessStr != NULL)
      fprintf(slurmFile, "#SBATCH --%s\n", nodeAccessStr);

    // request specified amount of memory
    if (memStr != NULL)
      fprintf(slurmFile, "#SBATCH --mem=%s\n", memStr);

    // Set the walltime if it was specified
    if (walltime) {
      fprintf(slurmFile, "#SBATCH --time=%s\n", walltime);
    }

    // Set the nodelist if it was specified
    if (nodelist) {
      fprintf(slurmFile, "#SBATCH --nodelist=%s\n", nodelist);
    }

    // Set the partition if it was specified
    if (partition) {
      fprintf(slurmFile, "#SBATCH --partition=%s\n", partition);
    }

    // Set the exclude list if it was specified
    if (exclude) {
      fprintf(slurmFile, "#SBATCH --exclude=%s\n", exclude);
    }

    // Set the gpus per node if it was specified
    if (gpusPerNode) {
      fprintf(slurmFile, "#SBATCH --gpus-per-node=%s\n", gpusPerNode);
    }

    // If needed a constraint can be specified with the env var CHPL_LAUNCHER_CONSTRAINT
    if (constraint) {
      fprintf(slurmFile, "#SBATCH --constraint=%s\n", constraint);
    }

    // set the account name if one was provided
    if (account && strlen(account) > 0) {
      fprintf(slurmFile, "#SBATCH --account=%s\n", account);
    }

    // set the output file name to either the user specified
    // name or to the binaryName.<jobID>.out if none specified
    if (outputfn != NULL) {
      int stdoutFileLen = strlen(outputfn) + 1;
      stdoutFile = (char*)chpl_mem_allocMany(stdoutFileLen, sizeof(char),
                                             CHPL_RT_MD_FILENAME, -1, 0);
      snprintf(stdoutFile, stdoutFileLen, "%s", outputfn);
      stdoutFileNoFmt = (char*)chpl_mem_allocMany(stdoutFileLen, sizeof(char),
                                                  CHPL_RT_MD_FILENAME, -1, 0);
      snprintf(stdoutFileNoFmt, stdoutFileLen, "%s", outputfn);
    }
    else {
      const char* format="%s.%s.out";
      int stdoutFileLen = strlen(format) + strlen(argv[0]) + strlen("%j");
      stdoutFile = (char*)chpl_mem_allocMany(stdoutFileLen, sizeof(char),
                                             CHPL_RT_MD_FILENAME, -1, 0);
      snprintf(stdoutFile, stdoutFileLen, format, argv[0], "%j");
      const char* tempArg = "$SLURM_JOB_ID";
      int stdoutFileNoFmtLen =
          strlen(format) + strlen(argv[0]) + strlen(tempArg);
      stdoutFileNoFmt = (char*)chpl_mem_allocMany(
          stdoutFileNoFmtLen, sizeof(char), CHPL_RT_MD_FILENAME, -1, 0);
      snprintf(stdoutFileNoFmt, stdoutFileNoFmtLen, format, argv[0], tempArg);
    }
    // We have slurm use the real output file to capture slurm errors/timeouts
    // We only redirect the program output to the tmp file
    fprintf(slurmFile, "#SBATCH --output=%s\n", stdoutFile);

    if (errorfn != NULL) {
      fprintf(slurmFile, "#SBATCH --error=%s\n", errorfn);
    }

    // If we're buffering the output, set the temp output file name.
    // It's always <tmpDir>/binaryName.<jobID>.out.
    if (bufferStdout != NULL) {
      const char* format = "%s/%s.%s.out";
      const char* tempArg = "$SLURM_JOB_ID";
      int tmpStdoutFileNoFmtLen =
          strlen(format) + strlen(tmpDir) + strlen(argv[0]) + strlen(tempArg);
      tmpStdoutFileNoFmt = (char*)chpl_mem_allocMany(
          tmpStdoutFileNoFmtLen, sizeof(char), CHPL_RT_MD_FILENAME, -1, 0);
      snprintf(tmpStdoutFileNoFmt, tmpStdoutFileNoFmtLen, format, tmpDir,
               argv[0], tempArg);
    }

    // add the srun command
    fprintf(slurmFile, "srun --kill-on-bad-exit  ");

    fprintf(slurmFile, "--cpus-per-task=%d ", cpusPerTask);

    if (numLocalesPerNode > 1) {
      fprintf(slurmFile, "--cpu-bind=none ");
    }
    // add the (possibly wrapped) binary name.
    fprintf(slurmFile, "%s %s ",
        chpl_get_real_binary_wrapper(), chpl_get_real_binary_name());


    // add any arguments passed to the launcher to the binary
    for (i=1; i<argc; i++) {
      fprintf(slurmFile, "'%s' ", argv[i]);
    }

    // buffer stdout to the tmp stdout file
    if (bufferStdout != NULL) {
      fprintf(slurmFile, "> %s", tmpStdoutFileNoFmt);
    }
    fprintf(slurmFile, "\n");

    // After the job is run, if we buffered stdout to <tmpDir>, we need
    // to copy the output to the actual output file. The <tmpDir> output
    // will only exist on one node, ignore failures on the other nodes
    if (bufferStdout != NULL) {
      fprintf(slurmFile, "cat %s >> %s\n", tmpStdoutFileNoFmt, stdoutFileNoFmt);
      fprintf(slurmFile, "rm  %s &> /dev/null\n", tmpStdoutFileNoFmt);
      // tmpStdoutFileNoFmt is only allocated memory if bufferStdout!=NULL
      // Hence free up inside this condition.
      chpl_mem_free(tmpStdoutFileNoFmt, 0, 0);
    }

    // close the batch file and change permissions
    fclose(slurmFile);
    chmod(slurmFilename, 0755);

    if (generate_sbatch_script) {
      fprintf(stdout, "SBATCH script written to '%s'\n", slurmFilename);
    }

    // the baseCommand is what will call the batch file
    // that was just created
    const char* format = "sbatch %s\n";
    int baseCommandLen = strlen(slurmFilename) + strlen(format);
    baseCommand = (char*)chpl_mem_allocMany(baseCommandLen, sizeof(char),
                                            CHPL_RT_MD_COMMAND_BUFFER, -1, 0);
    snprintf(baseCommand, baseCommandLen, format, slurmFilename);
  }
  // else we're running an interactive job
  else {
    char* iCom = NULL;
    int len = 0;

    // set the job name
    chpl_append_to_cmd(&iCom, &len, "--job-name=%s ", jobName);
    if (!getSlurmDebug(/*batch=*/false)) {
      // suppress informational messages, will still display errors
      chpl_append_to_cmd(&iCom, &len, "--quiet ");
    }

    // request the number of locales, with 1 task per node, and number of cores
    // cpus-per-task. We probably don't need --nodes and --ntasks specified
    // since 1 task-per-node with n --tasks implies -n nodes
    int32_t numNodes = (numLocales + numLocalesPerNode - 1) / numLocalesPerNode;

    chpl_append_to_cmd(&iCom, &len, "--nodes=%d ", numNodes);
    chpl_append_to_cmd(&iCom, &len, "--ntasks=%d ", numLocales);
    int localesOnNode = (numLocales < numLocalesPerNode) ?
                        numLocales : numLocalesPerNode;
    int cpusPerTask = getCoresPerLocale(nomultithread(false), localesOnNode);
    chpl_append_to_cmd(&iCom, &len, "--cpus-per-task=%d ", cpusPerTask);

    if (numLocalesPerNode > 1) {
      chpl_append_to_cmd(&iCom, &len, "--cpu-bind=none ");
    }

    // request specified node access
    if (nodeAccessStr != NULL)
      chpl_append_to_cmd(&iCom, &len, "--%s ", nodeAccessStr);

    // request specified amount of memory
    if (memStr != NULL)
      chpl_append_to_cmd(&iCom, &len, "--mem=%s ", memStr);

    // kill the job if any program instance halts with non-zero exit status
    chpl_append_to_cmd(&iCom, &len, "--kill-on-bad-exit ");

    // Set the walltime if it was specified
    if (walltime) {
      chpl_append_to_cmd(&iCom, &len, "--time=%s ", walltime);
    }

    // Set the nodelist if it was specified
    if (nodelist) {
      chpl_append_to_cmd(&iCom, &len, "--nodelist=%s ", nodelist);
    }

    // Set the partition if it was specified
    if (partition) {
      chpl_append_to_cmd(&iCom, &len, "--partition=%s ", partition);
    }

    // Set the exclude list if it was specified
    if (exclude) {
      chpl_append_to_cmd(&iCom, &len, "--exclude=%s ", exclude);
    }

    // Set the gpus per node if it was specified
    if (gpusPerNode) {
      chpl_append_to_cmd(&iCom, &len, "--gpus-per-node=%s ", gpusPerNode);
    }

    // set any constraints
    if (constraint) {
      chpl_append_to_cmd(&iCom, &len, "--constraint=%s ", constraint);
    }

    // set the account name if one was provided
    if (account && strlen(account) > 0) {
      chpl_append_to_cmd(&iCom, &len, "--account=%s ", account);
    }

    // add the (possibly wrapped) binary name
    chpl_append_to_cmd(&iCom, &len, "%s %s ",
        chpl_get_real_binary_wrapper(), chpl_get_real_binary_name());

    // add any arguments passed to the launcher to the binary
    for (i=1; i<argc; i++) {
      chpl_append_to_cmd(&iCom, &len, " '%s'", argv[i]);
    }

    // launch the job using srun
    const char* format = "srun %s";
    int baseCommandLen = strlen(format) + len + 1;
    baseCommand = (char*)chpl_mem_allocMany(baseCommandLen, sizeof(char),
                                            CHPL_RT_MD_COMMAND_BUFFER, -1, 0);
    snprintf(baseCommand, baseCommandLen, format, iCom);
    chpl_mem_free(iCom, 0,  0);
  }

  // copy baseCommand into command and return it
  size = strlen(baseCommand) + 1;
  command = chpl_mem_allocMany(size, sizeof(char), CHPL_RT_MD_COMMAND_BUFFER, -1, 0);
  snprintf(command, size, "%s", baseCommand);
  // free dynamically allocated memory
  chpl_mem_free(baseCommand, 0, 0);
  chpl_mem_free(stdoutFile, 0, 0);
  chpl_mem_free(stdoutFileNoFmt, 0, 0);
  if (strlen(command)+1 > size) {
    chpl_internal_error("buffer overflow");
  }

  return command;
}


static void genSBatchScript(int argc, char *argv[], int numLocales,
                            int numLocalesPerNode) {
  chpl_launch_create_command(argc, argv, numLocales, numLocalesPerNode);
}


// clean up the batch file
static void chpl_launch_cleanup(void) {
  // leave file around if dry run or we're debugging
  if (!chpl_doDryRun() && !debug) {
    // remove sbatch file unless it was explicitly generated by the user
    if (getenv("CHPL_LAUNCHER_USE_SBATCH") != NULL && !generate_sbatch_script) {
      if (unlink(slurmFilename)) {
        const int msg_size = strlen(slurmFilename) +
                             strlen(strerror(errno)) + 36;
        char* msg = (char*)chpl_mem_allocMany(msg_size, sizeof(char),
                                              CHPL_RT_MD_FILENAME, -1, 0);
        snprintf(msg, msg_size, "Error removing temporary file '%s': %s",
                 slurmFilename, strerror(errno));
        chpl_warning(msg, 0, 0);
        chpl_mem_free(msg, 0, 0);
      }
    }
  }
}


int chpl_launch(int argc, char* argv[], int32_t numLocales,
                int32_t numLocalesPerNode) {
  int retcode;
  // check the slurm version before continuing
  if (checkSlurmVersion()) {
    return 1;
  }

  debug = getenv("CHPL_LAUNCHER_DEBUG");

  // generate a batch script and exit if user wanted to
  if (generate_sbatch_script) {
    genSBatchScript(argc, argv, numLocales, numLocalesPerNode);
    retcode = 0;
  }
  // otherwise generate the batch file or srun command and execute it
  else {
    char *cmd = chpl_launch_create_command(argc, argv, numLocales,
                                           numLocalesPerNode);
    retcode = chpl_launch_using_system(cmd, argv[0]);

    chpl_launch_cleanup();
  }
  chpl_mem_free(slurmFilename, 0, 0);
  return retcode;
}


// handle launcher args
int chpl_launch_handle_arg(int argc, char* argv[], int argNum,
                           int32_t lineno, int32_t filename) {
  // handle --walltime <walltime> or --walltime=<walltime>
  if (!strcmp(argv[argNum], CHPL_WALLTIME_FLAG)) {
    walltime = argv[argNum+1];
    return 2;
  } else if (!strncmp(argv[argNum], CHPL_WALLTIME_FLAG"=", strlen(CHPL_WALLTIME_FLAG))) {
    walltime = &(argv[argNum][strlen(CHPL_WALLTIME_FLAG)+1]);
    return 1;
  }

  // handle --nodelist <nodelist> or --nodelist=<nodelist>
  if (!strcmp(argv[argNum], CHPL_NODELIST_FLAG)) {
    nodelist = argv[argNum+1];
    return 2;
  } else if (!strncmp(argv[argNum], CHPL_NODELIST_FLAG"=", strlen(CHPL_NODELIST_FLAG))) {
    nodelist = &(argv[argNum][strlen(CHPL_NODELIST_FLAG)+1]);
    return 1;
  }

  // handle --partition <partition> or --partition=<partition>
  if (!strcmp(argv[argNum], CHPL_PARTITION_FLAG)) {
    partition = argv[argNum+1];
    return 2;
  } else if (!strncmp(argv[argNum], CHPL_PARTITION_FLAG"=", strlen(CHPL_PARTITION_FLAG))) {
    partition = &(argv[argNum][strlen(CHPL_PARTITION_FLAG)+1]);
    return 1;
  }

  // handle --exclude <nodes> or --exclude=<nodes>
  if (!strcmp(argv[argNum], CHPL_EXCLUDE_FLAG)) {
    exclude = argv[argNum+1];
    return 2;
  } else if (!strncmp(argv[argNum], CHPL_EXCLUDE_FLAG"=", strlen(CHPL_EXCLUDE_FLAG))) {
    exclude = &(argv[argNum][strlen(CHPL_EXCLUDE_FLAG)+1]);
    return 1;
  }

  // handle --gpus-per-node <gpus> or --gpus-per-node=<gpus>
  if (!strcmp(argv[argNum], CHPL_GPUS_PER_NODE_FLAG)) {
    gpusPerNode = argv[argNum+1];
    return 2;
  } else if (!strncmp(argv[argNum], CHPL_GPUS_PER_NODE_FLAG"=", strlen(CHPL_GPUS_PER_NODE_FLAG))) {
    gpusPerNode = &(argv[argNum][strlen(CHPL_GPUS_PER_NODE_FLAG)+1]);
    return 1;
  }

  // handle --generate-sbatch-script
  if (!strcmp(argv[argNum], CHPL_GENERATE_SBATCH_SCRIPT)) {
    generate_sbatch_script = 1;
    return 1;
  }

  // Elliot, 12/02/14: TODO we should have a core binding option here similar
  // to aprun's -cc to handle binding to cores / numa domains, etc For now you
  // can just set the SLURM_CPU_BIND env var

  return 0;
}


const argDescTuple_t* chpl_launch_get_help(void) {
  static const
    argDescTuple_t args[] =
    { { CHPL_GENERATE_SBATCH_SCRIPT,
        "generate an sbatch script and exit"
      },
      { CHPL_WALLTIME_FLAG " <HH:MM:SS>",
        "specify a wallclock time limit"
      },
      { "",
        "(or use $CHPL_LAUNCHER_WALLTIME)"
      },
      { CHPL_NODELIST_FLAG " <nodelist>",
        "specify a nodelist to use"
      },
      { "",
        "(or use $CHPL_LAUNCHER_NODELIST)"
      },
      { CHPL_PARTITION_FLAG " <partition>",
        "specify a partition to use"
      },
      { "",
        "(or use $CHPL_LAUNCHER_PARTITION)"
      },
      { CHPL_EXCLUDE_FLAG " <nodes>",
        "specify node(s) to exclude"
      },
      { "",
        "(or use $CHPL_LAUNCHER_EXCLUDE)"
      },
      { CHPL_GPUS_PER_NODE_FLAG " <gpus>",
        "specify number of gpus per node"
      },
      { "",
        "(or use $CHPL_LAUNCHER_GPUS_PER_NODE)"
      },
      { NULL, NULL },
    };
  return args;
}
