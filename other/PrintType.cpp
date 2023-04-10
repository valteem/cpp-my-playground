#include <iostream>

template <typename T>
void PrintType()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main() {
    int a1 = 1;
    int a2 = 2;

    int&& r = a1 + a2; // rvalue reference
    r++;
    std::cout << r << std::endl;

    PrintType<decltype(&r)>();
    int* p = &r;
    std::cout << &r << " " << p << " " << *p << std::endl;

    *p++;
    std::cout << &r << " " << p << " " << *p << std::endl;
}