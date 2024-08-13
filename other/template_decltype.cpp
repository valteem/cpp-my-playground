#include <iostream>

template<typename T>
int GetParamType();

template<>
int GetParamType<int>() { return 1;};

template<>
int GetParamType<int&>() { return 2;};

template<>
int GetParamType<int&&>() { return 3;};

int main() {
    int a{1}, b, c;
    std::cout << GetParamType<decltype(a)>() << std::endl;            // prvalue
    std::cout << GetParamType<decltype(a=b+c)>() << std::endl;        // lvalue
    std::cout << GetParamType<decltype(b+c)>() << std::endl;          // prvalue
    std::cout << GetParamType<decltype(std::move(a))>() << std::endl; // xvalue
    return 0;
}