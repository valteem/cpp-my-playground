cmake_minimum_required(VERSION 3.22)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(app1)
add_subdirectory(app2)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)