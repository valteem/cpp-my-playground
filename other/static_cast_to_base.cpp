#include <iostream>

class Base1 {
    public:
    int a1;
    int b1;
    Base1(int a, int b) : a1(a), b1(b) {
        std::cout << "Creating Base1 with " << a1 << " and " << b1 << "\n";
    };
    virtual ~Base1(){
        std::cout << "Removing Base1 with " << a1 << " and " << b1 << "\n";
    };
};

class Base2 {
    public:
    int a2;
    int b2;
    Base2(int a, int b) : a2(a), b2(b) {
        std::cout << "Creating Base2 with " << a2 << " and " << b2 << "\n";
    };
    virtual ~Base2(){
        std::cout << "Removing Base2 with " << a2 << " and " << b2 << "\n";
    };
};
class Derived : public Base1, public Base2 {
    public:
    Derived(int m, int n, int p, int q) : Base1(m, n), Base2(p, q) {
        std::cout << "Creating Derived with " << a1 << "," << b1 <<  " and " << a2 << ", " << b2 << "\n";
    };
    ~Derived() {
        std::cout << "Removing Derived with " << a1 << "," << b1 <<  " and " << a2 << ", " << b2 << "\n";
    };
};

int main() {

    Derived d(1, 2, 3, 4);
    Base1& b1 = static_cast<Base1&>(d);
    Base2& b2 = static_cast<Base2&>(d);

    Base1 *bp1 = &d;
    Base2 *bp2 = &d;

    return 0;

// The ouput definitely requires further investigation:

// Creating Base1 with 1 and 2
// Creating Base2 with 3 and 4
// Creating Derived with 1,2 and 3, 4
// Removing Derived with 1,2 and 3, 4
// Removing Base2 with 3 and 4
// Removing Base1 with 1 and 2
}