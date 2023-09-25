// https://github.com/boostorg/algorithm/blob/32c5a6327cfdca5d41ce0f1d8849b811886daa2f/include/boost/algorithm/searching/detail/bm_traits.hpp#L36

#include <iostream>

template<bool>class A;

template<>
class A<true> {
    public:
    A() {
        std::cout << "true" << std::endl;
    }
};

template<>
class A<false> {
    public:
    A() {
        std::cout << "false" << std::endl;
    }
};

int main() {

    A a1 = A<true>();
    A a2 = A<false>();

}
