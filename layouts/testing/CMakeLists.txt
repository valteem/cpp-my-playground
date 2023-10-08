cmake_minimum_required(VERSION 3.22)

project(testing)

#---------------------------------------------------------------------------------
# GTest bootstrapping
#---------------------------------------------------------------------------------
enable_testing()
add_subdirectory(googletest)
include_directories(googletest/include)

#---------------------------------------------------------------------------------
# Package files
#---------------------------------------------------------------------------------
add_subdirectory(src)
include_directories($(PROJECT_SOURCE_DIR)/include)

#---------------------------------------------------------------------------------
# Test files
#---------------------------------------------------------------------------------
add_subdirectory(tests)
add_executable(add_test src/add.cc tests/add_test.cc)
target_link_libraries(add_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(add_test)