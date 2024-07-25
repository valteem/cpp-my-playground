#include <iostream>
#include <vector>

#include "simple.hpp"
#include "mult.hpp"

int main() {

    int a = Add(1, 2);
    int b = Mult(3, 4);
    
    std::cout << a + b << std::endl;

    // Permutation Equation
    std::vector<int> in{5, 4, 2,3, 1};
    std::vector<int> out = PermutationEquation(in);
    std::cout << out[0] << std::endl;

    // Jumping on Clouds
    int energy = JumpingOnClouds(std::vector<int> {1, 1, 1, 0, 1, 1, 0, 0, 0, 0}, 3);
    std::cout << energy << std::endl;

    // Find digits
    int digits = FindDigits(1012);
    std::cout << digits << std::endl;

    // Extra Long Factorial
    ExtraLongFactorials(6);

    return 0;

}
