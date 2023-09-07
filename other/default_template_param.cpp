#include <iostream>

template <typename _Tp1 = int, typename _Tp2 = int, typename _Tp3 = double>
_Tp3 multiply(_Tp1 a, _Tp2 b) {
    return static_cast<_Tp3>(a * b);
}

template <typename T>
void PrintType()
{
    std::cout <<  __PRETTY_FUNCTION__  << '\n';
}

int main() {
    PrintType<decltype(multiply<>(1, 1))>();
    PrintType<decltype(multiply<double>(1, 1))>();
    PrintType<decltype(multiply<double, double>(1, 1))>();
    PrintType<decltype(multiply<int,int,int>(1, 1))>();
    PrintType<decltype(multiply<double>(1, 1))>();
}