#include <iostream>
#include "derive.hpp"

namespace SimpleDeriveExample {

SimpleDeriveClass::SimpleDeriveClass(const int & n, const char & c):SimpleBaseClass(n, c){}

void SimpleDeriveClass::ShowVariableValues() {
    std::cout << c << std::endl;
    std::cout << n << std::endl;
}

}