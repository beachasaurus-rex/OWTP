CONFIG="Debug"
BUILDIR="build"
SRCDIR=".."
cmake -G"Visual Studio 16 2019" -B${BUILDIR} -H${SRCDIR} -DCMAKE_CONFIGURATION_TYPES=${CONFIG}
cmake --build ${BUILDIR} --config ${CONFIG}
