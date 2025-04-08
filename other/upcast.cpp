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

void BlankLine() {
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {

    std::cout << "Upcasting object with virtual functions" << std::endl;
    BlankLine();

    // Bypass virtual dispatch using a->A::foo()
    // https://stackoverflow.com/questions/71641560/c-cast-pointer-to-base-class-pointer-for-virtual-method-call#comment126614564_71641560

    C c;
    A *acp = &c;
    std::cout << "A* object, implicit cast from C,     emits  " << acp->f() << std::endl;
    std::cout << "Bypassing virtual dispatch with a->A::f()   "  << acp->A::f() << std::endl;
    A ac_obj = *acp;
    std::cout << "Bypassing virtual dispatch by dereferencing "  << ac_obj.f() << std::endl;
    BlankLine();
    B *bcp = &c;
    std::cout << "B* object, implicit cast from C,     emits  " << bcp->f() << std::endl;
    std::cout << "Bypassing virtual dispatch with b->B::f()   "  << bcp->B::f() << std::endl;
    B bc_obj = *bcp;
    std::cout << "Bypassing virtual dispatch by dereferencing "  << bc_obj.f() << std::endl;
    BlankLine();
    B b;
    A *abp = &b;
    std::cout << "A* object, implicit cast from B,     emits " << abp->f() << std::endl;
    std::cout << "Bypassing virtual dispatch with a->A::f()  "  << abp->A::f() << std::endl;
    A ab_obj = *abp;
    std::cout << "Bypassing virtual dispatch by dereferencing "  << ab_obj.f() << std::endl;

    A *as = static_cast<A*>(&c);
    std::cout << "A* object, static cast from C,       emits " << as->f() << std::endl;
    std::cout << "Bypassing virtual dispatch with a->A::f()  "  << as->A::f() << std::endl;
    A as_obj = *as;
    std::cout << "Bypassing virtual dispatch by dereferencing "  << as_obj.f() << std::endl;
    BlankLine();

    A *ad = dynamic_cast<A*>(&c);
    std::cout << "A* object, dynamic cast from C,      emits " << ad->f() << std::endl;
    std::cout << "Bypassing virtual dispatch with a->A::f()  "  << ad->A::f() << std::endl;
    A ad_obj = *ad;
    std::cout << "Bypassing virtual dispatch by dereferencing "  << ad_obj.f() << std::endl;
    BlankLine();

    A *ar = reinterpret_cast<A*>(&c);
    std::cout << "A* object, reinterpret cast from C,  emits " << ar->f() << std::endl;
    std::cout << "Bypassing virtual dispatch with a->A::f()  "  << ar->A::f() << std::endl;
    A ar_obj = *ar;
    std::cout << "Bypassing virtual dispatch by dereferencing "  << ar_obj.f() << std::endl;
    BlankLine();

    A a1 = static_cast<A>(c); 
    std::cout << "A object, static_cast from C,        emits " << a1.f() << std::endl;
    A a2 = (A)c; 
    std::cout << "A object, old-style cast from C,     emits " << a2.f() << std::endl;

    // dynamic_cast and reinterpret_cast apply only to pointers and references
    BlankLine();

    //////////////////////////////////////////////////////////////////////////////////////

    std::cout << "Upcasting object with no virtual functions" << std::endl;
    Y y;
    X* x1 = &y;
    std::cout << "X* object, implicit cast from Y,  emits " << x1->f() << std::endl;
    X* x2 = (X*)(&y);
    std::cout << "X* object, old-style cast from Y, emits " << x2->f() << std::endl;
    X x3 = static_cast<X>(y);
    std::cout << "X object, static_cast from Y,     emits " << x3.f() << std::endl;

    return 0;
}