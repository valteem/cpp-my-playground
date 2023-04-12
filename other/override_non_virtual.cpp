#include <iostream>

class Base {
    public:
    void Show() {
        std::cout << "Non-virtual Base" << std::endl;
    };
    virtual void vShow() {
        std::cout << "Virtual Base" << std::endl;
    };
};

class Derived : public Base {
    public:
    void Show() {
        std::cout << "Show - Derived" << std::endl;
    };
    void vShow() {
    std::cout << "vShow - Derived" << std::endl;
    };
};

int main() {
    Base b;
    Derived d;

    Base *pb = &b;
    Derived *pd = &d;
    Base *ps = &d; // some kind of casting?

    b.Show();
    b.vShow();
    d.Show();
    d.vShow();

    pb->Show();
    pb->vShow();
    pd->Show();
    pd->vShow();
    ps->Show();
    ps->vShow();

    return 0;

 }
