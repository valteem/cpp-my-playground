#include <cassert>

class A {
    public:
    int getValue() {return 1;};
};

class B {
    public:
    int getValue() {return 2;}
};

class C : public A, public B {
    public:
    void setValue(int v) {/*do nothing*/};
};

class X : public A, public B {
    public:
    int getValue() {return A::getValue();}
};

int main() {
    C* c = new C;
    /* std::cout << c->getValue() <<  std::endl; */ // does not compile: getValue() is ambiguous
    X* x = new X;
    assert(x->getValue()==1);
    return 0;
}

//  g++ -fdump-lang-class=mult_inh_same.txt mult_inh_same.cpp