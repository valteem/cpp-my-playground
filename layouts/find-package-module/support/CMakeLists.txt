cmake_minimum_required(VERSION 3.22)

project(find-package-module-support)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(support STATIC src/support.cc)

# make install
install(TARGETS support DESTINATION "${CMAKE_SOURCE_DIR}/lib")
