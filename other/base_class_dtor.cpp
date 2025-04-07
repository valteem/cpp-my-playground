#include <iostream>

class A {
    public:
    A() {std::cout << "creating A with nothing" <<std::endl;}
    A(int i) {std::cout << "creating A with " << i <<std::endl;}
    protected:
    ~A() {std::cout << "destroying A\n";}
};

class B : public A {
    public:
    B() {std::cout << "creating B with nothing" <<std::endl;}
    B(int i) {std::cout << "creating B with " << i <<std::endl;}
    ~B() {std::cout << "destroying B\n";}
};

int main(int argc, char* argv[]) {

    A* a1 = new B(11);

    // Herb Sutter: "Guideline #4: A base class destructor should be either public and virtual,
    // or protected and nonvirtual."
    // delete a1; // does not compile - ~A() is inaccessible

    A* a2 = new A(1); // compiles because memory must be freed manually
    // delete a2; // has no access to protected destructor

    // A a3 = A(3); // does not compile because memory would be freed automatically

    B* b1 = new B(101);
    delete b1; // has access to protected ~A()

    B b2 = B(102);

   

}