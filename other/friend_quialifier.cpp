// https://en.cppreference.com/w/cpp/language/friend

#include <iostream>

class A {
    int a;
    friend class B; // has access to private mambers of A
    friend void set_a(A &a, int inp) {
        a.a = inp;
    }
    public:
    int get_a() {
        return a;
    }
};

class B {
    public:
    int get_a(A &a) {
        return a.a;
    };
};


int main() {

    A a;
    B b;
    set_a(a, 1);
    std::cout << a.get_a() << " " << b.get_a(a) << "\n";
    return 0;

}