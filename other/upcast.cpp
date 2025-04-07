#include <iostream>

struct A {
    virtual int f() {return 1;};
};

struct B : A {
    virtual int f() {return 2;};
};

struct C : B {
    virtual int f() {return 3;};
};

struct X {
    int f() {return 1;}
};

struct Y : X {
    int f() {return 2;}
};

int main(int argc, char *argv[]) {

    // Upcasting object with virtual functions

    C c;
    A *acp = &c;
    std::cout << "A* object, implicit cast from C,     emits " << acp->f() << std::endl;
    B *bcp = &c;
    std::cout << "B* object, implicit cast from C,     emits " << bcp->f() << std::endl;
    B b;
    A *abp = &b;
    std::cout << "A* object, implicit cast from B,     emits " << abp->f() << std::endl;

    A *as = static_cast<A*>(&c);
    std::cout << "A* object, static cast from C,       emits " << as->f() << std::endl;

    A *ad = dynamic_cast<A*>(&c);
    std::cout << "A* object, dynamic cast from C,      emits " << ad->f() << std::endl;

    A *ar = reinterpret_cast<A*>(&c);
    std::cout << "A* object, reinterpret cast from C,  emits " << ar->f() << std::endl;

    A a1 = static_cast<A>(c); 
    std::cout << "A object, static_cast from C,        emits " << a1.f() << std::endl;
    A a2 = (A)c; 
    std::cout << "A object, old-style cast from C,     emits " << a2.f() << std::endl;

    // dynamic_cast and reinterpret_cast apply only to pointers and references

    //////////////////////////////////////////////////////////////////////////////////////

    // Upcasting object with no virtual functions
    Y y;
    X* x1 = &y;
    std::cout << "X* object, implicit cast from Y,  emits " << x1->f() << std::endl;
    X* x2 = (X*)(&y);
    std::cout << "X* object, old-style cast from Y, emits " << x2->f() << std::endl;
    X x3 = static_cast<X>(y);
    std::cout << "X object, static_cast from Y,     emits " << x3.f() << std::endl;

    return 0;
}