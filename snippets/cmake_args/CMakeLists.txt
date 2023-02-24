cmake_minimum_required(VERSION 3.10)

include(CMakePrintHelpers)

function(use_llvm TARGET)
message("ARGC=\"${ARGC}\"")
message("ARGN=\"${ARGN}\"")
message("ARGV=\"${ARGV}\"")
message("ARGV0=\"${ARGV0}\"")
message("ARGV1=\"${ARGV1}\"")
message("ARGV2=\"${ARGV2}\"")
endfunction()

macro(list_args args_list)
message("ARGC=\"${ARGC}\"")
message("ARGN=\"${ARGN}\"")
message("ARGV=\"${ARGV}\"")
message("ARGV0=\"${ARGV0}\"")
message("ARGV1=\"${ARGV1}\"")
endmacro()

macro(add_glob cur_list)
    cmake_print_variables(cur_list)
    file(GLOB __tmp CONFIGURE_DEPENDS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${ARGN})
    cmake_print_variables(__tmp)
    list(APPEND ${cur_list} ${__tmp})
endmacro()

macro(set_folders prefix path)
  add_glob(${prefix}_headers ${CMAKE_CURRENT_SOURCE_DIR} ${path}/*.*)
endmacro()

use_llvm(baz core bitwriter more)

list_args(arg0 arg1 arg2)

cmake_print_variables(CMAKE_CURRENT_SOURCE_DIR)

set_folders(example .)
cmake_print_variables(example_headers)
