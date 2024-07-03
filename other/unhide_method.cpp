// https://gitlab.com/libeigen/eigen/-/blame/master/Eigen/src/Core/Array.h?ref_type=heads#L65

#include <cassert>

// Simple case:
// derived class implicitly inherits method(s) of its base class
class M1 {
    public:
    int Output(int i) {return i;} 
};
class N1 :public M1 {};
void UseBaseClassMethodsImplicit() {    
    N1 n;
    int i{1};
    assert(n.Output(i) == i);
}

// More complicated:
// derived class has method of the same name but with different signature
class M2 {
    public:
    int Output(int i) {return i;} 
};
class N2 :public M2 {
    public:
    using M2::Output; // needed to call Output(int) (not Output(int, int)) on N2 objects
    int Output(int i, int j) {return i + j;}
};
void UseBaseClassMethodsExplicit() {    
    N2 n;
    int i{1};
    int j{1};
    assert(n.Output(i, j) == (i + j)); // this works anyway - derived and base class Output() signatures are different
    assert(n.Output(i) == i); // this only works with `using M2::Output` in the definition of N2
}  

int main() {

    UseBaseClassMethodsImplicit();
    UseBaseClassMethodsExplicit();

    return 0;
    
}
