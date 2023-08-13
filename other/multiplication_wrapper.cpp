#include <iostream>

struct Product{
    template<typename Factor1, typename Factor2>
    Factor1 operator()(const Factor1& f1, const Factor2& f2) const {
        return f1 * f2;
    }
};

int main() {

    auto p = Product{};

    std::cout << p(1.4, 2) << std::endl;
    std::cout << p(2, 1.4) << std::endl;

    return 0;
}