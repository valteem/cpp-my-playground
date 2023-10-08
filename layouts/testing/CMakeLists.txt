cmake_minimum_required(VERSION 3.22)

project(testing)

#---------------------------------------------------------------------------------
# GTest bootstrapping
#---------------------------------------------------------------------------------
enable_testing()
add_subdirectory(googletest)
include_directories(googletest/include)

add_executable(testing)

#---------------------------------------------------------------------------------
# Package files
#---------------------------------------------------------------------------------
add_subdirectory(src)
include_directories($(PROJECT_SOURCE_DIR)/include)

#---------------------------------------------------------------------------------
# Test files
#---------------------------------------------------------------------------------
add_subdirectory(tests)
# add_executable(tests src/add.cc tests/add_test.cc)

target_link_libraries(testing GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(testing)