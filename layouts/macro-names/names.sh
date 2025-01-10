#!/bin/dash

# https://stackoverflow.com/a/33785069

g++ names.cc -o names
./names
echo "expect 0\n"

g++ names.cc -DADD_1 -o names
./names
echo "expect 1\n"

g++ names.cc -DADD_1 -DADD_2 -o names
./names
echo "expect 3\n"

g++ names.cc -DADD_1 -DADD_3 -o names
./names
echo "expect 4\n"

g++ names.cc -DADD_2 -DADD_3 -o names
./names
echo "expect 5\n"

rm -f names