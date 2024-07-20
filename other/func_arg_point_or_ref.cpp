// https://stackoverflow.com/a/17900070

#include <vector>
#include <cassert>

// first function argument is defines as a pointer to vector ...
void Values(std::vector<int>* values, int size) {

    for (int i = 0; i < size; i++) {
        values->push_back(i);
    } 

}

void SingleValue(int* i, int input) {

    *i = input;

}

int main() {

    std::vector<int> v;
    // ... but the function is invoked with reference as its first argument
    Values(&v, 3);

    int idx{0};
    for (const int& value : v) {
        assert(value == idx);
        idx++;
    }

    int i{0};
    SingleValue(&i, 1);
    assert( i == 1);

    return 0;

}