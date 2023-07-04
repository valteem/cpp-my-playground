// https://www.fluentcpp.com/2021/03/12/cpp-fold-expressions/
#include <iostream>

template<typename... Values>
auto sum(Values const&... values) {
    return (0 + ... + values); // (0 + values + ...) throws error
}

template<typename... Values>
auto subRight(Values const&... values) {
    return (values - ...);
}

template<typename... Values>
auto subLeft(Values const&... values) {
    return (... - values);
}

int main() {
    std::cout << sum() << std::endl;
    std::cout << sum(1, 2, 3, 4) << std::endl;
    std::cout << subRight(1, 2, 3) << std::endl;  // 1 - (2 - 3) = 2
    std::cout << subLeft(1, 2, 3) << std::endl; // (1 - 2) - 3 = -4
}