#include <iostream>

template<typename T>
class Element {
    private:
    int v;
    public:
    Element(int _v): v(_v) {};
    T& operator*() {
        return v;
    };
};

int main() {
    auto e = Element<int>(1);
    auto ee = *e;
    std::cout << ee << std::endl; // returns 1
}