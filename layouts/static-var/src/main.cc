#include <cassert>

#include "unit1.h"
#include "unit2.h"

int main() {
    assert(unit1::GetMyVar() == 1);
    assert(unit2::GetMyVar() == 2);\
    return 0;
}