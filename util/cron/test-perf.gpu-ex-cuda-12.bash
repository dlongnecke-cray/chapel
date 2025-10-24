#!/usr/bin/env bash
#
# Run GPU performance testing on a Cray EX

UTIL_CRON_DIR=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)
source $UTIL_CRON_DIR/common-native-gpu.bash
source $UTIL_CRON_DIR/common-hpe-cray-ex.bash
source $UTIL_CRON_DIR/common-gpu-nvidia-hpe-cray-ex.bash
source $UTIL_CRON_DIR/common-gpu-nvidia-hpe-cray-ex-cuda-12.bash

export CHPL_COMM=none
export CHPL_GPU=nvidia  # amd is detected automatically

export CHPL_NIGHTLY_TEST_CONFIG_NAME="perf.gpu-ex-cuda-12"

export CHPL_TEST_PERF_CONFIG_NAME="1-node-a100" # pinoak has ampere GPUs
source $UTIL_CRON_DIR/common-native-gpu-perf.bash
# make sure this comes after setting SUBDIR (set by native-gpu-perf) and
# CONFIG_NAME
source $UTIL_CRON_DIR/common-perf.bash

module list

nightly_args="${nightly_args} -startdate 04/04/24"

$UTIL_CRON_DIR/nightly -cron ${nightly_args}
