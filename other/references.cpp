#include <iostream>

int main() {

    int a1 = 1;
    int a2 = 2;

    int&& r = a1 + a2; // rvalue reference
    r++;
    std::cout << r << std::endl;

    int* p = &r; // what is this if not pointer to reference?
    std::cout << &r << " " << p << " " << *p << std::endl;

//  *p++ increases address that pointer point to, not the value stored at this address    
    (*p)++;
    std::cout << &r << " " << p << " " << *p << std::endl;

}