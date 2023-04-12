#include <iostream>

class Base {
    int a;
    public:
    Base(int i) : a(i) {
        std::cout << "New Base with attribute " << a << std::endl;
    };
    virtual ~Base() {
        std::cout << "Removing Base with attribute " << a << std::endl;
    };
};

class Derived : public Base {
    public:
    Derived(int i) : Base(i) {};
};

int main() {
    Base *b = new Derived(1);
    delete b;
}