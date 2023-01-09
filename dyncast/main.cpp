#include <iostream>

class Base {
    protected:
        int n;
        char c;
    public:
        Base(const int & n, const char & c): n(n), c(c) {}
        virtual void announce() {
            std::cout << "This is Base type object" << std::endl;
        }
};

class Derive : public Base {
    public:
        Derive(const int & n, const char & c):Base(n, c) {}
        void announce() {
            std::cout << "This is Derive type object" << std::endl;
        }
};

class Base1 {
    public:
        Base1() {}
        virtual ~Base1() {}
        void announce() {
            std::cout << "This is Base type object" << std::endl;
        }
};

class Derive1 : public Base1 {
    public:
        Derive1() {}
        void announce() {
            std::cout << "This is Derive type object" << std::endl;
        }
};

int main() {

    Derive *pd = new Derive(1, 'Y');
    Base *pb = dynamic_cast<Base*>(pd);
    pb->announce();

    Derive1 o1 ;
    Base1 *pb1 = dynamic_cast<Base1*>(&o1);
    pb1->announce();

    Derive1 *op1 = dynamic_cast<Derive1*>(pb1);
    op1->announce();

// Does not work, need dynamic_cast to reference Derive1 pointer from Base1 type object
    // Base1 ob;
    // Derive *op2 = &ob;
    // op2->announce();

    return 0;
}