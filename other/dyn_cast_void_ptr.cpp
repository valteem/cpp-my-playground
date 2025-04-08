// dynamic_cast<T>(v)
// If T is a void pointer, then dynamic_cast will return the starting address
// of the object pointed to by v
// https://www.ibm.com/docs/en/i/7.3.0?topic=expressions-dynamic-cast-operator-c-only

#include <cassert>

struct A {
    // int i;
    // A() {i = 1;};
    virtual void f() {}
};

struct B : A {};

int main(int argc, char* argv[]) {

    B b;
    A* ap = &b;
    void* vp = dynamic_cast<void*>(ap);

    assert(vp == &b);

    return 0;
}