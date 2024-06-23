#include <iostream>

struct A {
    int a;
    A(int a) : a(a) {};
    ~A() {
        std::cout << "destroying an A object " << a<< "\n";
    }
};

// Object on stack are destroyed implicitly when going out of scope
// Objects on heap need to be destroyed explicitly

int main() {
    A a{0};
    A* pa = new A{1};
    // add subscope
    {
        A a{2};
        A* pa = new A{3};
        delete pa;
    }
    delete pa; 
    return 0;
}