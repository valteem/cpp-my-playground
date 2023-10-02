#include <iostream>

using char8_t = unsigned char;
using UInt8 = char8_t;

int main() {
    UInt8 _v;
    UInt8 * dst = &_v;
    int counter = 0;
    while (counter < 11){
      *dst = '1';
      std::cout << dst << " " << *dst << std:: endl;
      dst++; // this
      counter++; 
    }
    return 0;
}