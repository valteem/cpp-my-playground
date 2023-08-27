#include <iostream>

template<typename X, typename Y>
auto MultiplyXY(X x, Y y) -> decltype(x * y) {
    return x * y;
};

int main() {
    std::cout << MultiplyXY<int, int>(10, 10) << std::endl;
}