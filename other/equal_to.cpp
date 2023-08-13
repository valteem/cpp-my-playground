#include <iostream>

struct EqualTo {
    template <typename L, typename R>
    bool operator()(const L& l, const R& r) const {
        return l == r;
    }
};

int main() {
    EqualTo e = EqualTo{};
    std::cout << e(1, 1) << std::endl;
    std::cout << e(1, 1.0) << std::endl;
    std::cout << e(1, true) << std::endl;
    std::cout << e(1, 2) << std::endl;
    return 0;
}