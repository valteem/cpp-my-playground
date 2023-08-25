#include <iostream>

#define open std::cout <<
#define close << std::endl

#define add_one_left 1 +
#define add_one_right + 1

int main() {

    open "output" close;

    auto u = 1;
    open (add_one_left u add_one_right) close;

    return 0;
    
}