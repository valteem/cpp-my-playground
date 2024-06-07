#include "base.h"
#include "templspec.h"

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

    Pair<int, int>* p = new Pair<int, int>();
    p->a = 1;
    p->b = 1;
    assert(p->pairAddValues() == 2);

    Pair1<int>* p1 = new Pair1<int>();
    p1->a = 1;
    p1->b = 1;
    assert(p1->pairAddValues() == 5);

   Pair2<int>* p2 = new Pair2<int>();
    p2->a = 1;
    p2->b = 1;
    assert(p2->pairAddValues() == 7);

    return 0;
}