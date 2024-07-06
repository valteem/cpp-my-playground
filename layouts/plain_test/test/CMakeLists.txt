add_executable(ltest ltest.cc)
add_test(NAME ltest COMMAND ltest)

add_executable(rtest run_test.cc ${SOURCEFILES})
add_test(NAME rtest COMMAND rtest)