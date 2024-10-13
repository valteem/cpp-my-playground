#include <cassert>
#include <iostream>

class Point {
    int a;
    int b;
    public:
    Point(int i, int j):a(i), b(j) {};
    void Show() {
        std::cout << "(" << a << "," << b << ")" << std::endl;
    };
};

class A {
    public:
    A() {};
    A(int) {};
    A(int, int) {};
};

int main() {

    Point p(1, 2);
    p.Show();
    p = {11, 12}; // conversion constructor
    p.Show();

// https://en.cppreference.com/w/cpp/language/converting_constructor
// Need more elaboration on this
    A a1 = 1;
    A a2{1};
    A a3{1, 2};

    [](...){}(a1, a2, a3);
}