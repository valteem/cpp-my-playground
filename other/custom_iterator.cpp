// https://stackoverflow.com/a/28926968

#include <iostream>

template <typename DataType>
class CustomArray {
    public:
        class iterator {
            public:
                iterator (DataType* ptr) : ptr(ptr) {}
                iterator operator++() { ++ptr; return *this; }
                bool operator!=(const iterator& other) { return ptr != other.ptr; }
                const DataType& operator*() const { return *ptr; }
            private:
                DataType* ptr;
        };
    private:
        unsigned cap;
        unsigned len;
        DataType *val;
    public:
        iterator begin() { return iterator(val); }
        iterator end() { return iterator(val + len); }
        CustomArray(const unsigned& cap) : cap(cap) {
            len = 0;
            val = new DataType[cap];
        }
        ~CustomArray() {
            delete[] val;
        }
        void push_back(const DataType& elt) {
            if (len == cap) {
                resize();
            }
            val[len++] = elt;
        }
    private:
        void resize() {
            cap *= 2;
            DataType* new_val = new DataType[cap];
            for(unsigned i = 0; i < len; i++) {
                new_val[i] = val[i];
            }
            delete[] val;
            val = new_val;
        }
};

// https://stackoverflow.com/a/4255641
// You must use the matching pair of allocators.
// E.g. malloc/free, new/delete, new[]/delete[],
// else you get undefined behavior

int main(int argc, char* argv[]) {

    CustomArray<int> a(2);

    for (int i = 0; i < 5; i++) {
        a.push_back(i);
    }

    for (const auto& elt : a) {
        std::cout << elt << std::endl;
    }
}