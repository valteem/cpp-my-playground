#include <iostream>

int Counter() {
    static int i;
    i++;
    return i;
}

int main(int argc, char* argv[]) {

    for (int i = 0; i < 10; i++) {
        std::cout << Counter() << std::endl;
    }

    return 0;

}