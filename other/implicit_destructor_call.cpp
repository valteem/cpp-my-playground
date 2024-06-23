#include <iostream>

struct A {
    int a;
    A(int a) : a(a) {};
    ~A() {
        std::cout << "destroying an A object " << a<< "\n";
    }
};

int main() {
    A a{1};
    // add subscope
    {
        A a{2};
    }
    return 0;
}