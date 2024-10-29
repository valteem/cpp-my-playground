g++ -D USE_OUTPUT_APPLES preprocessor_name_if.cpp -o apples.out
./apples.out
rm apples.out

g++ -D USE_OUTPUT_CHERRIES preprocessor_name_if.cpp -o cherries.out
./cherries.out
rm cherries.out

g++ preprocessor_name_if.cpp -o onions.out
./onions.out
rm onions.out