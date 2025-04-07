#include <iostream>

struct A {
    virtual int f() {return 1;}
};

struct B : A {
    virtual int f() {return 2;}
};

int main(int argc, char* argv[]) {

    A a1;
    B *b1 = (B*)(&a1);
    std::cout << "B* object, old-style    downcast from &A,     emits " << b1->f() << std::endl;

// https://stackoverflow.com/a/41213894
// dynamic_cast returns nullptr if base class pointer does not refer to derived class object
/*     
    A *a2 = &a1;
    B *b2 = dynamic_cast<B*>(a2);
    std::cout << "B* object, dynamic_cast downcast from A*, emits " << b2->f() << std::endl;
 */

    B b;
    A *a2 = &b;
    B *b2 = dynamic_cast<B*>(a2);
    std::cout << "B* object, dynamic_cast downcast from A*,     emits " << b2->f() << std::endl;
    B *b3 = reinterpret_cast<B*>(a2);
    std::cout << "B* object, reinterpret_cast downcast from A*, emits " << b2->f() << std::endl;


    return 0;

}