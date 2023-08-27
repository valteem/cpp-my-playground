#include <iostream>
#include <utility>

class A { // class with default constructor
    public:
    int a() const {return 1;};
};

class B { // class without default constructor
    public:
    B() = delete;
    int b() const {return 1;};
};

int main() {
    decltype(A().a()) n1 = 2;
    // decltype(B().b()) n2 = 2; // the default constructor of B cannot be referenced - it is a `delete` functions
    decltype(std::declval<B>().b()) n2 = 3;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    return 0;
}