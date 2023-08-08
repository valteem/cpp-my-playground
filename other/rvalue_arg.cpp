#include <iostream>

void print(int x) {
    std::cout << x << std::endl;
};

// void print(int& x) {} does not compile

// (const int& x) compiles just right
void printc(const int& x) {
    std::cout << x << std::endl;
};

void printr(int&& x) {
    std::cout << x << std::endl;
};

int main() {
    int x = 1;
    print(x);
    print(1);

    printc(x);
    printc(1);

 //   printr(x); // cannot bind rvalue reference to lvalue
    printr(1);
    printr(1 + 1);

    return 0;
}