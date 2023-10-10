// https://gitlab.com/libeigen/eigen/-/blame/master/Eigen/src/Core/Array.h?ref_type=heads#L65

#include <iostream>

class Base {
    public:
    void announce(int i) {
        std::cout << i << std::endl;
    }
        void announce(std::string s) {
        std::cout << s << std::endl;
    }
};

class Derive : public Base {
    public:
    using Base::announce;
};

int main() {
    Derive d;
    d.announce(1);
    d.announce("hi");

    return 0;
}
