#include <iostream>

template<typename... Values>
auto sum(Values const&... values) {
    return (values + ...);
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
    std::cout << sum(1, 2, 3, 4) << std::endl;
    std::cout << subRight(1, 2, 3) << std::endl;  // 1 - (2 - 3) = 2
    std::cout << subLeft(1, 2, 3) << std::endl; // (1 - 2) - 3 = -4
}