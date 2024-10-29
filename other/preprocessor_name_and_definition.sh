g++ -D OUTPUT_FUNCTION=apples preprocessor_name_and_definition.cpp -o apples.out
./apples.out
rm apples.out

g++ -D OUTPUT_FUNCTION=cherries preprocessor_name_and_definition.cpp -o cherries.out
./cherries.out
rm cherries.out

g++ preprocessor_name_and_definition.cpp -o nothing.out
./nothing.out
rm nothing.out