#include <iostream>
#include <string>

template<typename T>
void output(T t) {
    std::cout << t << std::endl;
}

class A {

    public:
    int a;

    A(int a) : a(a) {output("explicit ctor " + std::to_string(a));};
    ~A(){
        output("dtor " + std::to_string(a));
    }

    // Copy constructors should generally take their argument by reference
    // to avoid unnecessary copying of objects. If the argument is passed by value,
    // the copy constructor would be called recursively to make a copy of the argument,
    // resulting in an infinite loop and stack overflow
    A(A& A) :a(A.a) {output("copy ctor " + std::to_string(a));}

    A& operator=(const A& ac) {
        a = ac.a;
        output("copy assignment " + std::to_string(a));
        return *this;
    }

};

int main() {
    
    A a1 = A(1);
    A a2 = A(a1); // invokes copy constructor
    A a3 = A(0);
    a3 = a2;      // invokes copy assignment
    A& a4 = a2;   // reference, no new class instance
    output(&a2);
    output(&a4);
    a4.a = 2;     // changing by reference ...
    output(a2.a); // ... causes same change of the referenced object

    return 0;
    // dtor 1 - destroy a3
    // dtor 2 - destroy a2
    // dtor 1 - destroy a1

}