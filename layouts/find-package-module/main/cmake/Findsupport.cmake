message(STATUS "Module file found")

message(STATUS "CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}")

set(SUPPORT_ROOT_DIR "${CMAKE_SOURCE_DIR}/../support")

find_path(support_INCLUDE_DIR
NAMES "support.h"
#PATHS "${CMAKE_SOURCE_DIR}/../support/include")
PATHS "${SUPPORT_ROOT_DIR}"
PATH_SUFFIXES "include"
NO_DEFAULT_PATH)

find_library(support_LIB
NAMES "libsupport.a"
#PATHS "${CMAKE_SOURCE_DIR}/../support/lib")
PATHS "${SUPPORT_ROOT_DIR}"
PATH_SUFFIXES "lib"
NO_DEFAULT_PATH)

include(FindPackageHandleStandardArgs)
# shows only first required variable:
#
# if (${_NAME}_FOUND)
# FIND_PACKAGE_MESSAGE(${_NAME} "Found ${_NAME}: ${${_FIRST_REQUIRED_VAR}} ${VERSION_MSG} ${COMPONENT_MSG}" "${DETAILS}")
#
find_package_handle_standard_args(support DEFAULT_MSG support_INCLUDE_DIR support_LIB)

if (support_FOUND)
    message(STATUS "found support module: ${support_INCLUDE_DIR} ${support_LIB}")
else()
    message(STATUS "support module not found")
endif()
