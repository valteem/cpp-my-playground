#include <iostream>
#include <cassert>

#define CHECK_EXPR(expr) \
    do { \
        if (!(expr)) { \
            std::cout << __FILE__ << "(" << __LINE__ << "): " \
            << "check '" << #expr << "' failed" << std::endl; \
        } \
    } while(0)

#define RUN_TEST_CASE(test) run_test<&test>(#test)

template<void (*Test)()>
inline void run_test(const char* name) {
    std::cout << "running test case " << name << std::endl;
    Test();
}

namespace a {
    void test() {
        CHECK_EXPR(1 == 1);
    }
} // namespace a

namespace b {
    void test() {
        CHECK_EXPR (1 == 2);
    }
} // namespace b

int main(int argc, char* argv[]) {
    RUN_TEST_CASE(a::test);
    RUN_TEST_CASE(b::test);
    return 0;
}