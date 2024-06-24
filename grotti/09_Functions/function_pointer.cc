#include <cstdio>

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

// Function type alias 
using op_func = int(*)(int, int);

int main() {
    
    const int x = 2;
    const int y = 3;

    op_func op; // same as `int(*op)(int, int) {}`
    printf("op initialized at %p\n", op);

    op = &add; // assign pointer to function
    printf("&add at %p\n", op);
    printf("x + y = %d\n", op(x, y));

    op = multiply; // assign function name directly
    printf("multiply at %p\n", op);
    printf("x * y = %d\n", op(x, y));

    return 0;

}