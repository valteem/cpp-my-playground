// https://github.com/boostorg/algorithm/blob/32c5a6327cfdca5d41ce0f1d8849b811886daa2f/include/boost/algorithm/searching/detail/bm_traits.hpp#L36

#include <iostream>

template<bool>class A;

template<>  // template <> introduces full specializations https://stackoverflow.com/a/25308774
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

// partial specialization
template<typename X, int I> class B; //primary template
template<typename X>
class B<X, 1> {
    public:
    B() {std::cout << "1" << std::endl;}
};
template<typename X>
class B<X, 2> {
    public:
    B() {std::cout << "2" << std::endl;}
};

int main() {

// full specialization
    A a1 = A<true>();
    A a2 = A<false>();

// partial specialization
    B b1 = B<int,1>();
    B b2 = B<char*, 2>();

    return 0;

}