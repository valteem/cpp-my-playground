// https://www.geeksforgeeks.org/can-constructor-private-cpp/

#include <iostream>

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

int main() {
    B b;
    A a = b.create_a(1);
    std::cout << get_a(a) << "\n";

}