// https://stackoverflow.com/a/751783/16648033

#include <iostream>

class A {
    mutable int m;
    public:
    A();
    A(int m) : m(m) {};
    int get_m() const {
        m *= 2;
        return m;
    }
};

int main() {

    A a(1);
    std::cout << a.get_m() << a.get_m() << a.get_m() << "\n";
    return 0;
    
}