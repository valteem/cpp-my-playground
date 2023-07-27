#include <iostream>

class Container {
    public:
    int a;
    Container(int a): a(a) {};
};

class Receiver {
    public:
    int v;
};

class TwoInt {
    public:
    int a1;
    int a2;
    TwoInt(int a1, int a2): a1(a1), a2(a2) {};
};

class OneDouble {
    public:
    double a;
    OneDouble(double a): a(a) {};
};


int main() {
    
    Container c1 = Container(1);
    Container c2 = Container(2);
    int* r1 = reinterpret_cast<int*>(&c1);
    Receiver* r2 = reinterpret_cast<Receiver*>(&c2);

    std::cout << (*r1 + r2->v) << std::endl;

    TwoInt t = TwoInt(1<<16, 1<<16);
    OneDouble* od = reinterpret_cast<OneDouble*>(&t);

    std::cout << od->a << std::endl;

    return 0;
};