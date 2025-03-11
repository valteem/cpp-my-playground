// https://gcc.gnu.org/onlinedocs/cpp/_005f_005fhas_005fcpp_005fattribute.html

// https://lemire.me/blog/2024/07/26/safer-code-in-c-with-lifetime-bounds/

#include <iostream>

#if !defined(__has_cpp_attribute)
#define my_lifetime_bound
#elif __has_cpp_attribute(msvc::lifetimebound)
#define my_lifetime_bound [[msvc::lifetimebound]]
#elif __has_cpp_attribute(clang::lifetimebound)
#define my_lifetime_bound [[clang::lifetimebound]]
#elif __has_cpp_attribute(lifetimebound)
#define sz_lifetime_bound [[lifetimebound]]
#else
#define my_lifetime_bound 0
#endif

int main(int argc, char *argv[]) {

    std::cout << my_lifetime_bound << std::endl;

    return 0;

}