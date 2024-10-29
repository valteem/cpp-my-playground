#ifndef OUTPUT_FUNCTION
    #define OUTPUT_FUNCTION nothing
#endif

#include <iostream>

void apples() {
    std::cout << "APPLES" << std::endl;
}

void cherries() {
    std::cout << "CHERRIES" << std::endl;
}

void nothing() {
    std::cout << "NOTHING" << std::endl;
}

int main(int argc, char* argv[]) {

    OUTPUT_FUNCTION();
    
    return 0;

}
