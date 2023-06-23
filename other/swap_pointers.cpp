#include <iostream>
#include <string>

class Storage {
    public:
    int64_t quantity;
    std::string name;
    Storage(int64_t q, std::string n) : quantity(q), name(n) {};
    Storage() : quantity(0), name("nothing") {}
};

int main() {

    char blank = ' ';
    Storage* s1 = new Storage(1, "apples");
    Storage* s2 = new Storage(2, "cherries");

    void *s3 = static_cast<void*>(s1);
    s1 = s2;
    s2 = static_cast<Storage*>(s3);

    std::cout << s1->name << blank << s1->quantity << std::endl;
    std::cout << s2->name << blank << s2->quantity << std::endl; 

    return 0;
}