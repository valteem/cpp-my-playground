#include "print_expression.hpp"

template <typename T>
void Voice(T t) {
    PrintExpression(t);
};

template void Voice<int>(int);
template void Voice<double>(double);
template void Voice<>(char);

int main() {
    
    int a = 1;
    double b = 2.0
    PrintExpression(a*b + 1);

    Voice(1);
    Voice(2.0);
    Voice('C');
 
}