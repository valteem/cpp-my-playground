// https://stackoverflow.com/questions/274626/what-is-object-slicing

#include <iostream>
#include <string>

class A {
    int attr_a;
    public:
    A(int a) : attr_a(a) {};
    int GetAttrA() {return attr_a;};
};

class B : public A {
    int attr_b;
    public:
    B(int a, int b) : A(a), attr_b(b) {};
    int GetAttrB() {return attr_b;};
};

int main() {

    std::string blank = " ";
    
    B b1 = B(1, 2);
    B b2 = B(3, 4);
    A& a_ref = b2;
    a_ref = b1;
    
    std::cout << b2.GetAttrA() << blank << b2.GetAttrB() << std::endl; // 1 4 - slicing
    std::cout << &a_ref << blank << &b1 << blank << &b2 << std::endl;

    B* bb1 = new B(11, 12);
    B* bb2 = new B(21, 22);
    A* aa_ref = bb2;
    aa_ref = bb1;
    std::cout << bb2->GetAttrA() << blank << bb2->GetAttrB() << std::endl; // 21 22 - no slicing when using pointers
    std::cout << aa_ref << blank << bb1 << blank << bb2 << std::endl;

}