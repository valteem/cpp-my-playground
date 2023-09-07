#include <iostream>
#include <vector>

void out(std::vector<int>& v) {
    std::cout << "by ref\n";
};

void out(const std::vector<int>& v) {
    std::cout << "by const ref\n";
};

void out(std::vector<int>&& v) {
    std::cout << "by rvalue ref\n";
};

int main() {
    
    std::vector v {1, 2, 3};
    const std::vector cv {4, 5, 6};

    out(v);
    out(cv);
    out({7, 8, 9});
    out(static_cast<std::vector<int>&&>(v));
    out(std::move(v));

}