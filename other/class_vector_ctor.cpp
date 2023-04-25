#include <iostream>
#include <vector>
#include <initializer_list>

class A {
    public:
    std::vector<int> v;
    int create_flag;
    A(std::vector<int> u) : v(u), create_flag(1) {std::cout << "std::vector\n";};
    A(std::initializer_list<int> u) : v(u), create_flag(2) {std::cout << "std::initializer_list\n";};
};

int main() {

    std::vector<int> w = {1, 3, 7, 11, 87};
    A a(w);

    for (size_t i = 0, e = w.size(); i < e; i++) {
        std::cout << a.v[i] << " ";
    }
    std::cout << "\n";

    A ai = {2, 14, 38, 44};
    std::cout << ai.create_flag << "\n";


}