#include <iostream>

int main() {

    int* single {new int{8}};
    int* array {new int[8]};

    std::cout << single << std::endl;
    std::cout << array << std::endl;

    delete []single; // type mismatch! int vs int[]
    delete array;    // type mismatch! int[] bs int

    return 0;

}