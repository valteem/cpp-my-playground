#include<functional>
#include <iostream>

int product(int a, int b) {
    return a * b;
};

int main() {

    using namespace std::placeholders; // _1, _2, ...

    auto f = std::bind(product, _1, 2);
    auto g = std::bind(product, 3, _1);

    std::cout << f(2) << std::endl;
    std::cout << g(2) << std::endl;

    return 0;

}
