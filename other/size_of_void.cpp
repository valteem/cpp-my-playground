// https://gcc.gnu.org/onlinedocs/gcc-4.4.2/gcc/Pointer-Arith.html#Pointer-Arith

// In GNU C, addition and subtraction operations are supported on pointers to void and on pointers to functions. This is done by treating the size of a void or of a function as 1.
// A consequence of this is that sizeof is also allowed on void and on function types, and returns 1.
// The option -Wpointer-arith requests a warning if these extensions are used.

#include <cassert>

int main(int argc, char *argv[]) {

    #ifdef __GNUC__
        auto size_of_void = sizeof(void); // invalid application of 'sizeof' to a void type
        assert(size_of_void == 1);
    #endif

    return 0;

}