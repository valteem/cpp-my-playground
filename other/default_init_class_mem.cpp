#include <iostream>
#include <string>

struct A {
    int m1;
    float m2;
};

A a0;

int main(int argc, char* argv[]) {
    
    A a1;
    A a2{1, 1.0};
    
    std::cout << a0.m1 << " " << a1.m1 << " " << a2.m1 << std::endl;
    std::cout << a0.m2 << " " << a1.m2 << " " << a2.m2 << std::endl;
    
    return 0;

}