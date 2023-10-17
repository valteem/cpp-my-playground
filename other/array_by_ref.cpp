// https://stackoverflow.com/a/30821778

#include <iostream>

template<typename T, size_t len>
size_t array_size_by_val(T arr[len]) {
    return sizeof(arr)/sizeof(arr[0]); // array size information is lost, returns sizeof(int*)
};

template<typename T, size_t len>
size_t array_size_by_ref(T (&arr)[len]) {
    return sizeof(arr)/sizeof(arr[0]); // array size information is kept as it is passed by reference
};


int main() {

    int a [] = {1, 2, 3};

    std::cout << array_size_by_val<int, 2>(a) << std::endl; // accepts wrong array length
    std::cout << array_size_by_val<int, 3>(a) << std::endl;
    std::cout << array_size_by_val<int, 4>(a) << std::endl; // accepts wrong array length

//  std::cout << array_size_by_ref<int, 2>(a) << std::endl; // does not compile - wrong array size
    std::cout << array_size_by_ref<int, 3>(a) << std::endl;

    return 0;

}