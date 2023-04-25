#include <iostream>

class Plug {
    public:
    int flag;
};

template <typename T, class C>
class Container {
    protected:
    T t;
    C c;
};

template <typename T, class C>
class Box : public Container<T, C> {
    public:
    using Container<T, C>::t;
    using Container<T, C>::c;

};

int main() {
    Container<int, Plug> ct;
    Box<int, Plug> b;
    b.c.flag = 2;
    std::cout << b.t << " " << sizeof(b.c) << " " << b.c.flag << std::endl;

    return 0; 
}