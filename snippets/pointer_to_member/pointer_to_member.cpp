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

int main() {
    Node n = { 3 };
    Position p = Position(&n);
    std::cout << n.elt << std::endl << p.v->elt << std::endl << *p << std::endl;
    Position2 p2 = Position2(&n);
    std::cout << n.elt << std::endl << p2.v->elt << std::endl; // << *p2 << std::endl; // no match for operator*
    return 0;
}