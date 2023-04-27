#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
// old fashioned
    std::cout << argc << "\n";
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << "\n";
    }
// brand new
// https://stackoverflow.com/a/8573216 build vector of strings with range-based iterator
// https://stackoverflow.com/questions/56430948/which-stdvector-constructor-is-used-here
    std::vector<std::string> argu(argv, argv + argc);
    for (std::string &s : argu) {
        std::cout << s << " ";
    }
    std::cout << "\n";
    std::cout << argv << " " << *argv << " " << (argv + argc) << " " << *(argv + argc - 1) << " " << "\n"; // pointers to first and last array elements
// last argv[] array element is NULL and it seemingly terminates output
// probably UB: https://stackoverflow.com/questions/7019454/why-does-stdcout-output-disappear-completely-after-null-is-sent-to-it
    return 0;
}