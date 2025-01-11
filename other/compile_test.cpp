#include <iostream>

#define TEST_CASE(test) compile_test<&test>(#test)

// void (*) is function pointer, not a function
template <void (*)()>
inline void compile_test(const char* name)
{
  std::cout << name << " passed" << std::endl;
}

// a::test() and b::test() are not invoked - this is just to make sure that the code is compiled successfully

namespace a {
    void test() {
        std::cout << "test case a" << std::endl;
    }
} // namespace a

namespace b {
    void test() {
        std::cout << "test case b" << std::endl;
    }
} // namespace b

int main(int argc, char* argv[]) {
    TEST_CASE(a::test);
    TEST_CASE(b::test);
    return 0;
}