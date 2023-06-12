#include <iostream>

int main() {
    int r[3] {1, 2, 3}; // array of int
    int *p[3];          // array of pointers to int
    int (*q)[3];        // pointer to array of int
    
    p[0] = &r[0];
    p[1] = &r[1];
    q = &r;
    std::cout << p << " " << *p << " " << "\n";
    std::cout << *p[0] << " " << *p[1] << " " << p[0] << " " << p[1] << " " << (p[1] - p[0]) << "\n";
    std::cout << q << " " << *q << "\n";
    std::cout << *q[0] << " " << (*q)[1] << " " << (*q)[2] << " " << q[0] << " " << q[1] << " " << (q[1] - q[0]) << "\n";

    return 1;
}