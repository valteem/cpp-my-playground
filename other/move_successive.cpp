#include <iostream>
#include <vector>

void out(std::vector<int>& v) {
    std::cout << "by ref\n";
};

void out(std::vector<int>&& v) {
    std::cout << "by rvalue ref\n";
};

int main() {

    std::vector v {1, 2, 3};
    out(std::move(v));
    out(std::move(v));

}