#include <iostream>

using f = void(std::string);

void ff(f func, std::string s) {
    func(s);
};

void myprint(std::string s) {
    std::cout << s << std::endl;
};

int main() {
    std::string s = "message";
    ff(myprint, s);
    return 0;
}