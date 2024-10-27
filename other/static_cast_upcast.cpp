#include <iostream>

class Base {
    public:
    int a;
    int b;
    Base(int a, int b) : a(a), b(b) {
        std::cout << "Creating Base with " << a << " and " << b << "\n";
    };
    virtual ~Base(){
        std::cout << "Removing Base with " << a << " and " << b << "\n";
    };
};

class Derived : public Base {
    public:
    Derived(int m, int n) : Base(m, n) {
        std::cout << "Creating Derived with " << a << " and " << b << "\n";
    };
    ~Derived() {
        std::cout << "Removing Derived with " << a << " and " << b << "\n";
    };
};

int main() {

    std::cout << "Initializing Derived object ...\n";
    Derived d(1, 2);

    std::cout << "Initializing another Derived object ...\n";
    Derived a(3, 4);

    std::cout << "Initializing Base object ...\n";
    Base b = static_cast<Base>(d);

    std::cout << "Destroying objects ...\n";

    return 0;
}