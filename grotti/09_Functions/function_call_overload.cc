#include <cstdio>

struct CountSymbol {
    CountSymbol(char x) : x(x) {};
    size_t operator()(const char* s) const {
        size_t index{}, result{}; // {} provides for zero initialization
        while (s[index]) {
            if (s[index] == x) {
                result++;
            }
            index++;
        }
        return result;
    }

    private:
    char x;
};

int main() {

    const char sym{'a'};
    CountSymbol count_a{sym};
    
    const char* s1{"abc"};
    printf("%s - %zu occurences of %c\n", s1, count_a(s1), sym); 

    const char* s2{"aabbcc"};
    printf("%s - %zu occurences of %c\n", s2, count_a(s2), sym); 

    const char* s3{"aaabbbccc"};
    printf("%s - %zu occurences of %c\n", s3, count_a(s3), sym); 

    return 0;

}