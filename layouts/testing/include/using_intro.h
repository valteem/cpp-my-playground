#ifndef USING_INTRO_H
#define USING_INTRO_H

namespace usingIntro {

class A {
    public:
    A(int x, int y): x(x), y(y) {};
    protected:
    int x;
    int y;
};

class B : public A {
    public:
    using A::A; // C++11 - inherited constructors (https://stackoverflow.com/a/12783911)
    // Using-declaration in class definition introduces protected members of base class into derived class as public members
    using A::x;
    using A::y;
};

} // usingIntro

#endif // USING_INTRO_H