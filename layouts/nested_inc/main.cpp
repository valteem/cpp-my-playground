#include <iostream>

#include "nested/add2.h"
#include "./nested/add3.h"
#include "nested/add4/add4.h"

int main(){
    std::cout << add2(1, 1) << std::endl;
    std::cout << add3(1, 1, 1) << std::endl;
    std::cout << add4(1, 1, 1, 1) << std::endl;
    return 0;    
}