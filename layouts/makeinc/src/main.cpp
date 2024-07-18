#include <iostream>

#include "simple.hpp"
#include "mult.hpp"

int main() {

    int a = Add(1, 2);
    int b = Mult(3, 4);
    
    std::cout << a + b << std::endl;

    return 0;

}
