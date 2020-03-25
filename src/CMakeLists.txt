#get all of the source files
set(SRCS Export.c
	OWTP.h
	All.h
	Regions/ReferenceConstants.h
	Regions/Region1.h
	Regions/Region2.h
	Regions/Region3.h
	Regions/Region4.h
	Regions/Region5.h
	Regions/Boundaries/RegionBoundaries/MetastableRegion.h
	Regions/Boundaries/RegionBoundaries/R2andR3.h
	Regions/Boundaries/RegionBoundaries/R3andR4.h
	Regions/Boundaries/SubregionBoundaries/Region3/Boundaries_TP.h
    Regions/Boundaries/SubregionBoundaries/Region3/Boundaries_Ps.h
    Regions/Boundaries/SubregionBoundaries/Region3/Boundaries_Ph.h)

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
