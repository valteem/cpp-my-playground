#include "base.h"

#include <cassert>
#include <string>

// Enable test debugging: https://stackoverflow.com/a/76447033

int main() {
    Base* b = new Base(1);
    int n = b->Get();

    std::string s = "foo";
    assert(s.compare(b->Foo()) == 0);

    const Base* bb = new Base(1);
    std::string sc("foo const");
    assert(sc.compare(bb->Foo()) == 0);

    return 0;
}