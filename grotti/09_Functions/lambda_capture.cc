#include <cassert>
#include <cstdio>
#include <iostream>
#include <vector>

template <typename F, typename T>
void Transform(F f, T input[], size_t length, T output[]) {
    for (size_t i{}; i < length; i++) {
        output[i] = f(input[i]);
    }
}

template <typename T>
void PrintArray(T arr[], size_t length) {
    for (size_t i{}; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

class CounterFactory {
    public:
    CounterFactory(size_t lower, size_t upper): lower_(lower), upper_(upper) {};
    auto MakeCounter() {
        return [this](std::vector<size_t> v) {
            size_t count {0};
            for(const auto& value: v) {
                if((value >= lower_) && (value <= upper_)) {
                    count++;
                }
            } 
            return count;
        };
    };

    private:
    size_t upper_;
    size_t lower_;
};


int main() {

    {
        int length{3};
        int input_int[]{1, 2, 3}, output_int[length];
        float input_float[]{1.0, 2.0, 3.0}, output_float[length];

        Transform([](auto x){return 5*x-1;}, input_int, length, output_int); // auto x - template type deduction
        PrintArray(output_int, length);

        Transform([](auto x){return 5.5*x-1.1;}, input_float, length, output_float);
        PrintArray(output_float, length);

    }

    // Combination of ByVal/ByRef captures
    {
        int x{2}, y{3};
        auto output = [x, &y]() mutable {
            x *= 2; // compile-time error 'expression must be a modifiable lvalue' without 'mutable' modifier
            y *= 2;
            return x + y;
        };
        assert(output() == 10); // 2 + 3* 2 = 8
        assert(y == 6); // lambda modifies value of 'y' ...
        assert(x == 2); // ...but value of 'x' stays the same in the outer scope
    }

    // Default arguments
    {
        auto output = [](int x, int y = 10) { return x + y;};
        assert(output(1) == 11);
        assert(output(1, 2) == 3);
    }

    // Initializer expression
    {
        size_t count {0};
        auto output = [my_counter = count](const std::vector<size_t> v) mutable {
            for(const auto& value: v) {
                my_counter += value;
            }
            return my_counter;
        };
        assert(output(std::vector<size_t>{1, 2, 3, 4 }) == 10);
    }

    // Capturing `this`
    {
        CounterFactory cf {5, 15};
        auto counter = cf.MakeCounter();

        assert(counter(std::vector<size_t>{1, 3, 5, 7, 11, 14, 16, 17}) == 4);
    }

    return 0;
}