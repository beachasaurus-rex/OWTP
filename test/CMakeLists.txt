#Fetch googletest from its git repository
project(googletest-git NONE)
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(CMAKE_USE_WIN32_THREADS_INIT ON CACHE BOOL "" FORCE)
set(gtest_disable_pthreads ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#collect all test files
set(STEST
    AccuracyTests/AccTestsRegionBoundaries.cpp
    AccuracyTests/AccTestsRegion1.cpp
    AccuracyTests/AccTestsRegion2.cpp
    AccuracyTests/AccTestsRegion3.cpp
    AccuracyTests/AccTestsRegion4.cpp
    AccuracyTests/AccTestsRegion5.cpp
    AccuracyTests/AccTestsRegion3SubBoundaries.cpp
    AccuracyTests/AccTestBase.h)

add_executable(${TESTNAME} ${STEST})

set_target_properties(${TESTNAME}
PROPERTIES
ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/test/lib
LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/test/lib
RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/test/bin
)

#link test executable against gtest, gtest_main, and src lib
target_link_libraries(${TESTNAME} ${LIBNAME} gtest gtest_main)

enable_testing()
add_test(${TESTNAME} ${TESTNAME})
