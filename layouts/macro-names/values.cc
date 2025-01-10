#include <iostream>

// https://stackoverflow.com/a/240370
#define STRING(s) #s
#define TOSTRING(s) STRING(s)

int main(int argc, char* argv[]) {

    #ifdef ARG_1
    int a = ARG_1;
    const char* a_str = TOSTRING(ARG_1);
    #else
    int a = 1;
    const char* a_str = "1";
    #endif

    #ifdef ARG_2
    int b = ARG_2;
    const char* b_str = TOSTRING(ARG_2);
    #else
    int b = 2;
    const char* b_str = "2";
    #endif

    std::cout << a_str << " * " << b_str << " = " << a * b << std::endl;

    return 0;

}