#!/usr/bin/env bash

#------------------------------------------------------------------------------
# Common options: https://valgrind.org/docs/manual/manual-core.html#manual-core.options
#
TRACE_CHILDREN=yes        # yes|no
GEN_SUPPRESSION=all       # yes|no|all
VERBOSE_FLAG=             # <none>|-q|-v

# Memcheck options: https://valgrind.org/docs/manual/mc-manual.html#mc-manual.options
LEAK_CHECK=yes            # yes|no
SHOW_LEAK_KINDS=definite  # a comma separated list of one or more of definite,indirect,possible,reachable
TRACK_ORIGIN=yes          # yes|no

#------------------------------------------------------------------------------
help() {
  cat >&2 <<ENDHELP
Usage:

  runValgrind /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/MINSApp-real [args]

  runValgrind /path/to/executable [args]

ENDHELP
exit 1
}

if [[ $# == 0 ]]; then
  help
fi

executable=$1
valgrind_output=${executable}_valgrind_output.txt

echo ""
echo "Valgrind output saved to: ${valgrind_output}"
echo ""

#------------------------------------------------------------------------------
# Source environment
#

eval $(/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS --launcher-show-set-environment-commands)

#------------------------------------------------------------------------------
# Run valgrind
#
valgrind \
 --tool=memcheck \
 ${VERBOSE_FLAG} \
 --trace-children=${TRACE_CHILDREN} \
 --gen-suppressions=${GEN_SUPPRESSION} \
 --suppressions=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK/CMake/CTKValgrind.supp \
 --suppressions=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK/CMake/InsightValgrind.supp \
 --suppressions=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Python-3.9.10/Misc/valgrind-python.supp \
 --suppressions=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerValgrind.supp \
 --suppressions=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK/CMake/VTKValgrindSuppressions.supp \
 --leak-check=${LEAK_CHECK} \
 --show-leak-kinds=${SHOW_LEAK_KINDS} \
 --track-origins=${TRACK_ORIGIN} \
 $* |& tee ${valgrind_output}
