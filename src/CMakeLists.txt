#get all of the source files
set(SRCS Export.c
	All.h
	Regions/ReferenceConstants.h
	Regions/Region1.h
	Regions/Region2.h
	Regions/Region3.h
	Regions/Boundaries/RegionBoundaries/R2andR3.h
	Regions/Boundaries/SubregionBoundaries/Region3/Boundaries_vTP.h)

add_library(${LIBNAME} SHARED ${SRCS})

# Build output setup
set_target_properties(${LIBNAME}
PROPERTIES
ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/test/lib
LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/test/lib
RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/test/bin
ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/src/lib
LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/src/lib
RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/src/bin
)
