#include <iostream>

class Numbers {
    public:

    explicit Numbers(int first, int second) : _first(first), _second(second) {
        std::cout << "Invoking explicit constructor with arguments " << first << " and " << second << std::endl;
    }

// default constructor
    Numbers() {
        std::cout << "Invoking default constructor with no assignments" << std::endl;
    }

    ~Numbers() {
        std::cout << "Removing unused object of size " << sizeof(*this) << " at " << &*this << std::endl;
    }

// copy assignment operator
    Numbers& operator=(const Numbers& other) {
        
        std::cout << "Ready to copy class members" << std::endl;
        
        _first = other._first;
        _second = other._second;
        
        return *this;
    }

    int GetFirst() {
        return this->_first;
    }

    int GetSecond() {
        return this->_second;
    }

    private:
    int _first;
    int _second;
};

int main() {

    Numbers n1(1, 2);
    Numbers n2;

    n2 = n1;

    std::cout << n2.GetFirst() << " " << n2.GetSecond() << std::endl;

    return 0;

}