// https://en.cppreference.com/w/cpp/algorithm/all_any_none_of

#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
 
int main()
{
    std::vector<int> v(10, 2);
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
 
    struct DivisibleBy
    {
        const int d;
        DivisibleBy(int n) : d(n) {}
        bool operator()(int n) const { return n % d == 0; }
    };

//  This is pretty straightforward - it includes explicit predicate argument (int x) and explicit call of overloaded operator() of DivisibleBy
    // if (std::any_of(v.cbegin(), v.cend(), [](int i) {
    //     DivisibleBy db7 = DivisibleBy(7);
    //     return db7(i);} ))
    //     std::cout << "At least one number is divisible by 7\n";

// This is a bit more sophisticated - first define predicate function db7, then pass it as argument to any_of()
    // DivisibleBy db7 = DivisibleBy(7);
    // if (std::any_of(v.cbegin(), v.cend(), db7))
    //     std::cout << "At least one number is divisible by 7\n";

// This looks like magic at first glance, it creates temporary object (functor?) DivisibleBy(7) withis any_of() call, then uses it as predicate function
    if (std::any_of(v.cbegin(), v.cend(), DivisibleBy(7)))
        std::cout << "At least one number is divisible by 7\n";

    return 0;
}