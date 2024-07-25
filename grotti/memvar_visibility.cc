#include <iostream>

class Toy {
    public:
    int color;
    int size;
    Toy(int c, int s): color(c), size(s) {};
};

class Ball : private Toy {
    public:
    Ball(int c, int s) : Toy(c, s) {};
    int get_color() {return color;}
    int get_size() {return size;}
};

int main() {
    Ball b{1, 2};
    // std::cout << b.color << b.size << std::endl; // member "Toy::color" is inaccessible, member "Toy::size" is inaccessible 
    std::cout << b.get_color() << " " << b.get_size() << std::endl;
}