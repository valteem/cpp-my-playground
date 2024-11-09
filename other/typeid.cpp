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
    
    typeName(a);
    typeName(b);
    typeName(ap);
    typeName(bp);
    typeName(upcast_ptr);
    typeName(downcast_ptr);

    return 0;

}
