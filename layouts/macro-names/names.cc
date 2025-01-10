#include <iostream>

int main(int argc, char* argv[]) {

    int a = 0;

#ifdef ADD_1
    a += 1;
#endif

#ifdef ADD_2
    a += 2;
#endif

#ifdef ADD_3
    a += 3;
#endif

    std::cout << "get " << a << std::endl;

    return 0;

}