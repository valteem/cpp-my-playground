// Difference between declaring attribute as value as opposed to pointer or reference

#include <iostream>

class AttrValue {
    public:
    int attr_;
    AttrValue(int v): attr_(v) {};
};

class AttrPoint {
    public:
    int* attr_;
    AttrPoint(int v): attr_(&v) {};
};

class AttrRefer {
    public:
    int& attr_;
    AttrRefer(int v): attr_(v) {}; // somewhat artificial concept
};

void PrintAttrValue(AttrValue av) {
    std::cout << &av << " " << &av.attr_ << std::endl;
}

void PrintAttrPoint(AttrPoint ap) {
    std::cout << &ap << " " << ap.attr_ << std::endl;
}

void PrintAttrRefer(AttrRefer ar) {
    std::cout << &ar << " " << &ar.attr_ << " " << ar.attr_  << std::endl;
}

int main() {

    int v = 1;

    auto av = AttrValue(v);
    std::cout << &av << " " << &av.attr_ << std::endl; // returns different addresses of attr_ from main()
    PrintAttrValue(av);                                // and PrintAttrValue()

    auto ap = AttrPoint(v);
    std::cout << &ap << " " << ap.attr_ << std::endl; // returns same address of attr_ from both main()
    PrintAttrPoint(ap);                               // and PrintAttrPoint()

    auto ar = AttrRefer(v);
    std::cout << &ar << " " << &ar.attr_ << " " << ar.attr_ << std::endl; // returns same address of attr_ from both main()
    PrintAttrRefer(ar);                                                   // and PrintAttrRefer()

    return 0;
    
}