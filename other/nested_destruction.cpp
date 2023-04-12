#include <iostream>

class A {
    public:
    virtual ~A() {
        std::cout << "deleting A" << std::endl;
    }; 
};

class B : public A {
    public:
    ~B() {
        std::cout << "deleting B" << std::endl;
    }
};

class C : public B {
    public:
    ~C() {
        std::cout << "deleting C" << std::endl;
    }
};

int main() {
// Each direct and indirect base class is present, as base class subobject, within the object representation of the derived class at an ABI-dependent offset
// https://en.cppreference.com/w/cpp/language/derived_class
    B *b = new C();
    delete b;
}