#!/bin/dash

g++ values.cc -o values
./values
echo "expect 1 * 2 = 2\n"

g++ -DARG_1=2 values.cc -o values
./values
echo "expect 2 * 2 = 4\n"

g++ -DARG_1=3 -DARG_2=7 values.cc -o values
./values
echo "expect 3 * 7 = 21\n"

rm -f values