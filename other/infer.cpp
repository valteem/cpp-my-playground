// https://github.com/unum-cloud/usearch/blob/b9a9758a06e1d9365c54118868bf27ac042d4ffc/include/usearch/index.hpp#L1

#include <cassert>

#if defined(__linux__)
#define OS "Linux"
#endif

#if defined(__GNUC__)
#define CC "GCC"
#endif

#if defined(__x86_64__)
#define PLATFORM "X86_64"
#endif

#if INTPTR_MAX == INT64_MAX
#define BITS 64
#elif INTPTR_MAX == INT32_MAX
#define BITS 32
#else
#error Unknown pointer size
#endif

int main() {

    assert(__cplusplus == 201703L); // long
    assert(OS == "Linux");
    assert(CC == "GCC");
    assert(PLATFORM == "X86_64");
    assert(BITS == 64);

    return 0;

}
