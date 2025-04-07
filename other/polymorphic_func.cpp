#include <iostream>

struct A {
    int f() {return 1;}
};

struct B : A {
    int f() {return 2;}
};

int f(A a) {
    return a.f();
};

int f(A* a) {
    return a->f();
};

struct X {
    virtual int g() {return 1;}
};

struct Y : X {
    int g() {return 2;}
};

int g(X x) { return x.g(); };

int g(X* x) { return x->g(); };

int main(int argc, char* argv[]) {

    // no polymorphic behavior without virtual functions

    B b_obj;
    std::cout << f(b_obj) << std::endl; // emits 1 (A.f())
    B* b_ptr = &b_obj;
    std::cout << f(b_ptr) << std::endl; // emits 1 (A*->f())

    // polymorphic behavior enabled with pointers and virtual function in base class
    // https://stackoverflow.com/a/15188950

    Y y_obj;
    std::cout << g(y_obj) << std::endl; // emits 1 (X.g()) - no polymorphism with objects
    Y* y_ptr = &y_obj;
    std::cout << g(y_ptr) << std::endl; // emits 2 (Y*->g())

    return 0;

}