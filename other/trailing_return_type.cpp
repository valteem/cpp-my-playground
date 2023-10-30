#include <iostream>

template<typename T1, typename T2>
auto add(T1 x, T2 y) -> decltype(x + y) {
    return x + y;
}

int main() {

    int a = 1;
    float b = 1.;
    std::cout << add<int, float>(a, b) << std::endl;

    return 0;
}