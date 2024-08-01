#include <cassert>

#include <multexec/shared.h>

int main() {

    float a{1.0}, b{1.0};
    assert(a==b);

    multexec::Shared s{2, 2};
    assert(s.same());
    

    return 0;
}