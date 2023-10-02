#include <iostream>

typedef int Elem;

struct Node
{
    Elem elt;
};

class Position{
    public:
    Node *v;
    Position(Node*_v):v(_v){}; 
    Elem& operator*() {return v->elt;};
};

class Position2{
    public:
    Node *v;
    Position2(Node*_v):v(_v){}; 
};

class Position3{
    public:
    Node v;
    Position3(Node _v):v(_v){};
};

int main() {
    Node n = { 3 };
    Position p = Position(&n);
    std::cout << "Accessing struct member:                                          " << n.elt << std::endl;
    std::cout << "Dereferencing class member defined as pointer:                    " << p.v->elt << std::endl; 
    std::cout << "Accessing class member via overloaded pointer:                    " << *p << std::endl;
    Position2 p2 = Position2(&n);
    std::cout << "Dereferencing class member defined as pointer via arrow operator: "  << p2.v->elt << std::endl;
    std::cout << "Explicit dereferencing class member defined as pointer:           " << (*p2.v).elt << std::endl; 
//    std::cout << *p2 << std::endl; // no match for operator*
    Position3 p3 = Position3(n);
    std::cout << "Accessing class member defined as value:                          " << p3.v.elt << std::endl;
    return 0;
}