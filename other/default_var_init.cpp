#include <iostream>

//Variables defined outside any function body are initialized to zero
int outside[5];

int main(int argc, char* argv[]) {

// Uninitialized local variables of built-in type have undefined values
    int inside[5];

    for (const auto v : outside) {
        std::cout << v << " ";
        };
    std::cout << std::endl;

    for (const auto v : inside) {
    std::cout << v << " ";
    };
    std::cout << std::endl;

    return 0;

};