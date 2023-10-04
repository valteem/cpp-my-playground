#include <iostream>

class A {
    private:
    int x;
    public:
    A(int x) : x(x) {std::cout << "regular constructor" << std::endl;};
    A(A& a) {
        x = a.x;
        std::cout << "copy constructor" << std::endl;
    }
    int sum(int y) {
        return x + y;
    } 
};

int main() {

    A a1(1);
    A a2 = A(2);
    A a3 = A(a2);
    a2 = a1;
    std::cout << a1.sum(1) << std::endl;
    std::cout << a2.sum(1) << std::endl;
    std::cout << a3.sum(1) << std::endl;

// Since C++1 {} are also allowed along with (): https://stackoverflow.com/a/49802943
    A a11_1{1};
    A a11_2 = A{1};

    std::cout << a11_1.sum(1) << std::endl;
    std::cout << a11_2.sum(1) << std::endl;

    return 0;

}