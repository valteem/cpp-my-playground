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
    
    std::cout << b2.GetAttrA() << blank << b2.GetAttrB() << std::endl; // 1 4

}