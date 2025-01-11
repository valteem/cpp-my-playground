#include <iostream>

inline const char*& test_name()
{
  static const char* name = 0;
  return name;
}

template<void (*Test)()>
void run_test(const char* name) {
    std::cout << name << " and " << test_name() << " should be the same" << std::endl;
    Test();
}

namespace s1 {
    void a() {
        std::cout << "function call - s1::a" << std::endl;
    }
} // namespace s1

namespace s2 {
    void a() {
        std::cout << "function call - s2::a" << std::endl;
    }
} // namespace s2


int main(int argc, char* argv[]) {

    test_name() = "s1::a";
    run_test<&s1::a>(test_name());

    test_name() = "s2::a";
    run_test<&s2::a>(test_name());

    return 0;

}