#include <iostream>

# if defined(__cpp_impl_coroutine)
#  define HAS_COROUTINES 1
# else
#  define HAS_COROUTINES 0
#endif

const char* support() {
    return ((HAS_COROUTINES) ? "has coroutine support" : "no coroutine support");
}

int main(int argc, char* argv[]) {

    auto output = (HAS_COROUTINES) ? "has coroutine support" : "no coroutine support";
    std::cout << output << std::endl;

    auto lambda_output = []() {return ((HAS_COROUTINES) ? "has coroutine support" : "no coroutine support");}();
    std::cout << lambda_output << std::endl;

    auto func_output = support();
    std::cout << func_output << std::endl;

    return 0;

}