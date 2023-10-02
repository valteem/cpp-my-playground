#include <iostream>

class Transform {
    public:
    std::string input;
    std::string output;
    Transform() : input("in"), output("out") {};
};

int main() {

    Transform t;

    std::cout << t.input << " " << t.output <<std:: endl;

}