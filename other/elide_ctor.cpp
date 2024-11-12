// https://stackoverflow.com/a/8755062
// -fno-elide-constructors

#include <iostream>

struct A {
    static int counter;
    int counter_instant;
    A(): counter_instant(counter++) {
        std::cout << "Create with counter set at " << counter_instant \
                  << ", memory address " << this << std::endl;
    };
    A(const A&): counter_instant(counter++) {
        std::cout << "Copy with counter set at "<< counter_instant \
                  << ", memory address " << this << std::endl;
    };
    ~A() {
        std::cout << "Destroy with counter set at " << counter_instant \
                  << ", memory address " << this << std::endl;
    };
};

// Need to set static member value, otherwise code does not compile
int A::counter = 1; // access to static members

A produce() {
    A a = A();
    return a;
}

int main(int argc, char* argv[]) {
    A a = produce();
    return 0;
}

/*

Output with -fno-elide-constructors:

Create with counter set at 1, memory address 0x7fffffffdb44
Copy with counter set at 2, memory address 0x7fffffffdb74
Destroy with counter set at 1, memory address 0x7fffffffdb44
Destroy with counter set at 2, memory address 0x7fffffffdb74


Output without -fno-elide-constructors:

Create with counter set at 1, memory address 0x7fffffffdb64
Destroy with counter set at 1, memory address 0x7fffffffdb64

*/