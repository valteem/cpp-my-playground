#include <assert.h>

int add(int x, int y) {
    return x + y;
};

int (*funcPtr)(int, int);

int main(int argc, char *argv[]) {

    funcPtr = &add;

    assert(funcPtr(1, 1) == 2);

    return 0;

}