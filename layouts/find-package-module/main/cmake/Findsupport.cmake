message(STATUS "CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}")

find_path(support_INCLUDE_DIR
NAMES "support.h"
PATHS "${CMAKE_SOURCE_DIR}/../support/include")

message(STATUS "Module file found")