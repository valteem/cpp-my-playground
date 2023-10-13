#include <iostream>
#include<type_traits>

class A {
    public:
    int i;
};

class B {
    private:
    int i;
    public:
    B(int i) : i(i) {};
    int get_i() {return i;}
};

int main() {

    std::cout << std::is_constructible_v<A, int> << std::endl; // helper variable template, equivalent of std::constructible<>::value 
    std::cout << std::is_constructible<A, int>::value << std::endl;
    std::cout << std::is_constructible<A>::value << std::endl;

//    A a = A(1); // does not complile
    A a1;
    std::cout << a1.i << std::endl; // 32767 (0b111111111111111) https://stackoverflow.com/a/12863825

    A* a2 = new A;
    std::cout << a2->i << std::endl; // 0

    std::cout << std::is_constructible<B, int>::value << std::endl;
    std::cout << std::is_constructible<B>::value << std::endl;

    B b(1);
//    B b;  // does not compile: 'no default constructor' 

    return 0;

}