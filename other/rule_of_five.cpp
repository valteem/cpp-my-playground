#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

template<typename T>
void output(const T s) {
    std::cout << s << std::endl;
};

class A {
    public:
    int a;
    explicit A(int a): a(a) {
        output("regular ctor");
    };
    ~A() {
        output("dtor");
    };
    A(const A& al): a(al.a) {};    // copy ctor
    A& operator=(const A& ao) {
            output("copy assignment");
            return *this = A(ao);
    };
    A(A&& ar) {
        a = ar.a;
        output("move ctor");
    };
    A& operator=(A&& am) noexcept {
        std::swap(a, am.a);
        output("move assignment");
        return *this;
    }
};

void pass_by_val(A a) {
    output("inside pass_by_val");
}

void pass_by_ref(A& a) {
    output("inside pass_by_ref");
}

int main() {
    output("1");
    A a1 = A(1);
    A& a1_r = a1;
    output("2");
    A& a2 = a1_r;
    output("3");
    A a3 = std::move(a2);
    output("4");
    A a4 = A(a3);
    output(a4.a);
    output("5");
    a2 = a4;
    output("6");
    pass_by_val(a1);
    output("7");
    pass_by_ref(a1);
    output("8");
    pass_by_ref(a1_r);

    return 0;
}