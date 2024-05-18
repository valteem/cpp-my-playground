cmake_minimum_required(VERSION 3.22)

project(plain_test)

enable_testing()

include_directories($(PROJECT_SOURCE_DIR)/include)

add_executable(rtest test/run_test.cc src/base.cc)

add_test(NAME rtest COMMAND rtest)