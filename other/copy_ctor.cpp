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
    };
    A(A& A) :a(A.a) {output("copy ctor " + std::to_string(a));};
    A& operator=(const A& ac) {
        a = ac.a;
        output("copy assignment " + std::to_string(a));
        return *this;
    };
};

int main() {
    A a1 = A(1);
    A a2 = A(a1);
    A a3 = A(0);
    a3 = a2;
    A& a4 = a2;
    output(&a2);
    output(&a4);
    a4.a = 2;
    output(a2.a);

    return 0;
}