cmake_minimum_required(VERSION 3.22)

project(nested_lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

set(ALL_OBJECT_FILES ${ALL_OBJECT_FILES})
add_executable(nl ${PROJECT_SOURCE_DIR}/src/main.cpp ${ALL_OBJECT_FILES})

#add_library(nl_lib  ${ALL_OBJECT_FILES})
#target_link_libraries(nl nl_lib)