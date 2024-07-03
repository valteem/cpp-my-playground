#include <cassert>
// #include <iostream>
#include <string>
#include <tuple>
// #include <typeinfo>

struct Person {
    int age = 0;
    std::string name;
};

void StructBindDataMembers() {

    Person p {21, "SomeName"};

    auto [a, n] = p;

    assert((a == 21) && (n == "SomeName"));

}

void StructBindArray() {

    int a[2] {1, 2};
    
    auto[x, y] = a;
    assert((x == 1) && (y == 2));
    x = 11;
    y = 12;
    assert((a[0] == 1) && (a[1] == 2));

    auto& [xr, yr] = a;
    assert((xr == 1) && (yr == 2));
    xr == 21; // no effect
    yr == 22; // xr, yr are just references to a[0], a[1]
    assert((a[0] == 1) && (a[1] == 2));
    a[0] = 31;
    a[1] = 32;
    assert((xr == 31) && (yr == 32));

}

void StructBindTuple() {

    float x{1.0};
    int y{2};
    std::string s{"text"};

    std::tuple<float, int&&, std::string&> tpl(x, std::move(y), s);
    auto& [a, b, c] = tpl;
    assert((a == 1.0) && (b == 2) && (c == "text"));

}

int main() {

/*  
    Person p;
    std::string blank = " ";
    auto [a, n] = p; // structured binding (C++17)
    std::cout << "age " << a << blank << typeid(a).name() << " name " << n << blank << typeid(n).name() << std::endl;
 */

    StructBindArray();

    StructBindDataMembers();

    StructBindTuple();

}