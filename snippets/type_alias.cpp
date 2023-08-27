#include <iostream>

using f = void(std::string);

void fcorrect(f func, std::string s) {
    func(s); // calling functiona
};

void fmistake(f func, std::string s) {
    f(s); // does not compile with Clang and MSVC; in gcc it is considered as `f s` - declaration of void function `s` taking std::string as argument
};

void myprint(std::string s) {
    std::cout << s << std::endl;
};

int main() {
    std::string s = "message";
    fcorrect(myprint, s);
    fmistake(myprint, s);
    return 0;
}