cmake_minimum_required(VERSION 3.0)

if (WIN32)
    set(_WIN32 TRUE)
endif (WIN32)

set(CMAKE_CXX_FLAGS_RELEASE "/MT")
set(CMAKE_CXX_FLAGS_DEBUG "/MTd")
set(CMAKE_CXX_STANDARD 11)

set(LIBNAME "OWTP")
set(TESTNAME "TestRunner")

set(LIB_MAJOR_VERS "0")
set(LIB_MINOR_VERS "0")
set(LIB_PATCH_VERS "0")

#define the product
project(${LIBNAME} LANGUAGES C
	VERSION
		${LIB_MAJOR_VERS}.${LIB_MINOR_VERS}.${LIB_PATCH_VERS})

#build source
add_subdirectory(src)

#define test runner
project(${TESTNAME} CXX)

#build tests
add_subdirectory(test)
