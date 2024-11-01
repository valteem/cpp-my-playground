#include <iostream>
#include <string>
#include <type_traits>

struct Dog {
    std::string Voice() {return "Bark!";};
};

struct Cat {
    std::string Voice() {return "Meow!";};
};
 
template <bool T>
std::string Voice() {
    using Animal = std::conditional_t<T, Dog, Cat>;
    Animal a; 
    return a.Voice();
}

int main(int argc, char* argv[]) {

    std::cout << Voice<true>() << std::endl;
    std::cout << Voice<false>() << std::endl;

    return 0;

}