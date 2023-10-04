// https://stackoverflow.com/a/356993

#include <iostream>

struct add_x {
  add_x(int val) : x(val) {}  // Constructor
  int operator()(int y) const { return x + y; }

private:
  int x;
};


int main() {

    add_x add42(42); // create an instance of the functor class
    int i = add42(8);

    std::cout << i << std::endl;

    return 0;
}
