// https://stackoverflow.com/a/68696701

#if defined(USE_OUTPUT_APPLES)
    #define OUTPUT "APPLES"
#elif defined(USE_OUTPUT_CHERRIES)
    #define OUTPUT "CHERRIES"
#else
    #define OUTPUT "ONIONS"
#endif

#include <iostream>

int main(int argc, char*argv[]) {
    std::cout << OUTPUT << std::endl;
    return 0;
} 
