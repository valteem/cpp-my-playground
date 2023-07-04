#include <iostream>

template<typename... Values>
auto sum(Values const&... values) {
    return (values + ...);
}

int main() {
    std::cout << sum(1, 2, 3, 4) << std::endl;
}