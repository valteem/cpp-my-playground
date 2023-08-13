#include <iostream>
#include <utility>

template <typename T>
void PrintType() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

template<typename T>
T Square(T&& t) { // T&& t 'not rvalue reference' as per 'Effective Modern C++'
    PrintType<decltype(t)>();
    return t * t;
};

// https://stackoverflow.com/q/42977649
template<typename T>
void Assign(T&& t) { // this definitely sounds like 'universal reference' since it accepts both in& and int&& (see below)
    PrintType<decltype(t)>();
    t = 2;
};

class Place {

};

int main() {

    int a = 1;
    int b = 2;

    int&& c = a + b;
    PrintType<decltype(c)>();

    auto r = Square<int>(std::move(a + b)); // std::move creates rvalue reference, Square<int() does not accept int&&c = a + b as an argument
    PrintType<decltype(r)>();

    std::cout << Square<int>(a + b) << std::endl;

    std::cout << Square<int>(1) << std::endl;

    Place&& p1 = Place();
    auto&& p2 = p1; // 'not rvalue reference' as per 'Effective Modern C++'
    PrintType<decltype(p2)>(); // Place&, definitely not an rvalue reference

    Assign(a);
    std::cout << a << std::endl;
    Assign(1);

}