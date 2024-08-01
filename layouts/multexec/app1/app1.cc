#include <cassert>

#include <multexec/shared.h>

int main() {

    int a{1}, b{1};
    assert(a==b);

    multexec::Shared s{2, 2};
    assert(s.same());
    
    return 0;
}