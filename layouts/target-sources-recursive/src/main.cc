#include "add.h"
#include "multiply.h"

#include <iostream>

int main() {
    
    auto a = 1;
    auto b = 2;
    
    std::cout << tsr::add(a, b) << std::endl;
    std::cout << tsr::multiply(a, b) << std::endl;

    return 0;

}