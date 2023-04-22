// https://stackoverflow.com/questions/57858607/define-before-function-return-type

#include <iostream>

#define SOMEDEF

class MyClass {
    public:
    MyClass() {};
    ~MyClass() {};
    SOMEDEF int getdoubled(int inp) {
        return 2 * inp;
    };
};

int main() {
    MyClass M;
    std::cout << M.getdoubled(1) << "\n";
}