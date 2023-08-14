#include <cmath> // std::cos(), std::sin()
#include <iostream>
#include <utility>

// https://www.geeksforgeeks.org/can-constructor-private-cpp/

class A {
    int a;
    A(int a) : a(a) {};
    friend class B;
    friend int get_a(A &a) {
        return a.a;
    }
};

class B {
    public:
    A create_a(int i) {
        A a(i);
        return a; 
    }
};

// https://stackoverflow.com/a/6568587
// Named C'tors

class Point {
    public:
    static Point Polar(double, double);     // 'static' eliminates ambiguity in c'tor overloading
    static Point Cartesian(double, double);
    std::pair<double, double> Coord() ;
    private:
    Point(double, double);
    double x_, y_; // Data members of classes, both static and non-static, are named like ordinary nonmember variables, but with a trailing underscore 
};

inline std::pair<double, double> Point::Coord() {
    return std::make_pair(x_, y_);
}

inline Point::Point(double x, double y): x_(x), y_(y) {};

inline Point Point::Cartesian(double x, double y) {
    return Point(x, y);
};

inline Point Point::Polar(double x, double y) {
    return Point(x * std::cos(y), x * std::sin(y));
};



int main() {
    B b;
    A a = b.create_a(1);
    std::cout << get_a(a) << "\n";

    auto p1 = Point::Cartesian(1, 1);
    std::cout << p1.Coord().first << " " << p1.Coord().second << std::endl;
    auto p2 = Point::Polar(1, 1);
    std::cout << p2.Coord().first << " " << p2.Coord().second << std::endl;
    
    return 0;

}