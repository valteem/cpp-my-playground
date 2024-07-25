#include "simple.hpp"

int Add(int x, int y) {
    return x + y;
}

std::vector<int> PermutationEquation(std::vector<int> p) {
    int l = p.size();
    std::vector<int> subst(l), output(l);
    for (int i = 0; i < l; ++i) {
        subst[--p[i]] = i;
    }
    for (int i = 0; i < l; ++i) {
        output[i] = subst[subst[i]]+1;
    }
    return output;
}

int JumpingOnClouds(std::vector<int> c, int k) {
    int l = c.size();
    int i = 0;
    int e = 100;
    do {
        if (c[i] == 1) {
            e -= 2;
        }
        i = (i + k) % l;
        e -= 1;    
    } while (i != 0);
    return e;
}

int FindDigits(int n) {
    int count = 0;
    int num = n;
    int digit;
    do {
        digit = num % 10;
        if (digit > 0) {
            if (n % digit == 0) {
                count++;
            }
        }
        num /= 10;
    }  while (num > 0);
    return count;
}

void ExtraLongFactorials(int n) {
    std::vector<int> d;
    d.push_back(1);
    
    for (int i = 2; i <= n; ++i) {
        for (auto it = d.begin(); it != d.end(); ++it)
            *it *= i;
        
        for (size_t j = 0; j < d.size(); ++j) {
            if (d[j] < 10)
                continue;

            if (j == d.size() - 1)
                d.push_back(0);
            
            d[j + 1] += d[j] / 10;
            d[j] %= 10;
        }
    }

    for (auto it = d.rbegin(); it != d.rend(); ++it)
        std::cout << *it;
}