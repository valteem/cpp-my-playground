#include <cassert>
#include <iostream>

struct A {
    int count;
// A default constructor is a constructor which can be called with no arguments
//  A(int a) = default;
    A(int a): count(a) {};
    virtual int mangleCount() {return 2 * count;} // polymorphic
};

struct B : A {
    bool flag;
    B(int b): A(b), flag(true) {};
    int mangleCount() {return count + (flag) ? 1 : 0;}
};

template<typename T>
void typeName(T t) {
    std::cout << typeid(t).name() << std::endl;
}

int main(int argc, char* argv[]) {

    A a = A(1);
    B b = B(2);
    A* ap = &a;
    B* bp = &b;
    A* upcast_ptr = bp;
//  B* downcast_ptr = ap;
    B* downcast_ptr = dynamic_cast<B*>(ap); // operand must be polymorphic

// https://stackoverflow.com/a/37187465
// dynamic_cast is used when you want to test whether a pointer to a base class object
// actually points to a subclass or not. If it is a subclass object, the dynamic_cast
// will give you a valid pointer, and if it is not, you just get a nullptr
    assert(downcast_ptr == nullptr);

    B* up_and_down_cast_ptr = dynamic_cast<B*>(upcast_ptr);
    assert(up_and_down_cast_ptr != nullptr);
    assert(up_and_down_cast_ptr->count == 2); //B(2)
    assert(up_and_down_cast_ptr->flag == true);
    
    typeName(a);
    typeName(b);
    typeName(ap);
    typeName(bp);
    typeName(upcast_ptr);
    typeName(downcast_ptr);

    return 0;

}
