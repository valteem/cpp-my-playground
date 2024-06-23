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

    int var = 1;
    int& ref_to_var = var;
    int another_var = 2;
    ref_to_var = another_var;
    std::cout << var << " " << another_var << std::endl;

    int var_ = 1;
    int* pointer_to_var_ = &var_;
    int another_var_ = 2;
    // pointer_to_var_ = another_var_; // cannot be assigned
    *pointer_to_var_ = another_var_;
    std::cout << var_ << " " << another_var_ << std::endl;
}