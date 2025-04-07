#include <iostream>

struct A {
    virtual int f() {return 1;}
    int g() {return 101;}
};

struct B {
    virtual int f() {return 2;}
    int g () {return 102;}
};

struct C: A, B {
    virtual int f() {return 3;}
    int g() {return 103;}
};

int main(int argc, char* argv[]) {

    C c_obj;
    C *c_ptr = &c_obj;
    
    A *a = c_ptr;

    B *b = dynamic_cast<B*>(a);

    std::cout << b->f() << std::endl; // emits 3 (C.f())
    std::cout << b->g() << std::endl; // emits 102 (B.g())

    return 0;

}