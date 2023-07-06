#include <iostream>
#include <algorithm>

template<typename T>
void output(T t) {
    std::cout << t << std::endl;
};

template<typename T>
void swap(T t1, T t2) {
    T t3 = t1;
    t1 = t2;
    t2 = t3;
    output("custom swap");
};

namespace myswap {
    template<typename T>
    void swap(T t1, T t2) {
        T t3 = t1;
        t1 = t2;
        t2 = t3;
        output("namespace swap");
    };
};  // namespace swap

int main() {

    using std::swap;
    int a = 1;
    int b = 2;
    output("invoke std::swap");
    swap(a, b);   // std::swap
    output("invoke custom swap");
    ::swap(a, b); // custom swap
    output("invoke namespace swap");
    myswap::swap(a, b); // namespace swap

    return 0;
}