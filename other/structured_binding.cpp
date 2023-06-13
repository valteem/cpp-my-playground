#include <iostream>
#include <string>
#include <typeinfo>

struct Person {
    int age = 0;
    std::string name;
};

int main() {
    Person p;
    std::string blank = " ";
    auto [a, n] = p; // structured binding (C++17)
    std::cout << "age " << a << blank << typeid(a).name() << " name " << n << blank << typeid(n).name() << std::endl;
}