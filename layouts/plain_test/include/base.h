#ifndef BASE_H
#define BASE_H

#include <string>

class Base {
    private:
    int number;
    public:
    Base(int n);
    int Get();
    std::string Foo();
    std::string Foo() const; // https://stackoverflow.com/a/751783
};

#endif // BASE_H