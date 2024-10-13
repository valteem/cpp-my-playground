#include <cassert>

class A {
    public:
    int Value() {return 1;}
    virtual int viValue() {return 2;}
};

class B : public A {
    public:
    int Value() {return 101;}
    int viValue() override {return 102;};
};

int main() {
    A base;
    B derived;

    A *pointer_to_base = &base;
    B *pointer_to_derived = &derived;
    A *pointer_to_derived_cast_to_base = &derived; // some kind of casting?

    assert(base.Value() == 1);
    assert(base.viValue() == 2);
    assert(derived.Value() == 101);
    assert(derived.viValue() == 102);

    assert(pointer_to_base->Value() == 1);
    assert(pointer_to_base->viValue() == 2);
    assert(pointer_to_derived->Value() == 101);
    assert(pointer_to_derived->viValue() == 102);
    // non-virtual - invokes base class function
    assert(pointer_to_derived_cast_to_base->Value() == 1);  
    // virtual - invokes derived class function despite 'casting' to base class pointer
    assert(pointer_to_derived_cast_to_base->viValue() == 102); 

    return 0;

 }
