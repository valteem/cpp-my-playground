#include <iostream>
#include <string>

int main() {

    char symbol_to_count{'a'};

    auto counter = [symbol_to_count] (const std::string str) {
        size_t index{}, count{};
        while(str[index]) {
            if (str[index] == symbol_to_count) count++;
            index++;
        };
        return count;
    };

    std::string s{"aaabb"};

    std::cout << counter(s) << std::endl; // returns 3

    symbol_to_count = 'b';
    std::cout << counter(s) << std::endl; // returns 3, new assignment for symbol_to_count ignored

    return 0;
}