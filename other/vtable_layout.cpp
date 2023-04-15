#include <iostream>

class A {
    public:
    A(){};
    virtual ~A(){};
    virtual int V(){
        return 1;
    };
    int N(){
        return 2;
    };
};

class B : public A {
    public:
    B(){A();};
    ~B(){};
    int V() {
        return 11;
    };
    int N() {
        return 12;
    };
};

int main() {
    A a;
    B b;
    A& ar = b;
    std::cout << a.V() <<+ " "  << a.N() << " " << b.V() << " " << b.N() <<  " " << ar.V() << " " << ar.N() << "\n";
    return 0;
}