// https://stackoverflow.com/questions/301203/extract-c-template-parameters

#include <iostream>

template<int N>
struct A {
    static const int value = N;
    int a;
    // Does not compile: invalid use of member ‘A<N>::a’ in static member function
    /*     
    static const int mult(int b) {
        return a * b;
    }
    */
};

int main() {

    A<1> a1{1};
    A<2> a2{2};
    std::cout << a1.value << " " << a2.value << std::endl;

    return 0; 
}