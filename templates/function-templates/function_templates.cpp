#include <iostream>

template <typename Type>
Type max(Type a, Type b) {
    return (a >= b ? a : b);
}

template <class TypeC>
TypeC min(TypeC a, TypeC b) {
    return (a < b ? a : b);
}

int main() {

    const int a1 = 5, a2 = 7, a3 = 15;
    std::cout << max<int>(max<int>(a1, a2), a3) << std::endl;
    std::cout << min<int>(min<int>(a1, a2), a3) << std::endl;

    return 0;
}
