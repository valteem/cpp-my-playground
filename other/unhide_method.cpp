// https://gitlab.com/libeigen/eigen/-/blame/master/Eigen/src/Core/Array.h?ref_type=heads#L65

#include <iostream>

struct P {
    int i;
    P(int i): i(i) {};
};

class A {
    public:
    void announce(P p) {
        std::cout << p.i << std::endl;
    }
    void announce(std::string s) {
    std::cout << s << std::endl;
    }
};

class B : public A {
    public:
    using A::announce;
    void announce(double d) {
        std::cout << d << std::endl;
    }
};

int main() {

    B b;
    P p(1);
    // This works for double arguments because announce() is overloaded for B
    b.announce(1.0);
    // This works only when 'using A::annouce' is present in definition of B
    b.announce(p);
    std::string s("str");
    b.announce(s);

    return 0;
    
}
