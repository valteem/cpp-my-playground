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

int main() {
    Point p(1, 2);
    p.Show();
    p = {11, 12}; // conversion constructor
    p.Show();
}