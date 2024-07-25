#include <cassert>
#include <vector>

std::vector<int> LongFactorial(int n) { 
    
    std::vector<int> digits{1}; // 1!

    if (n == 1) {
        return digits;
    }

    int i, j;
    for (i = 2; i <= n; i++) {
        for (auto it = digits.begin(); it != digits.end(); it++) {
            *it *= i;
        }
        for (j = 0; j < digits.size(); j++) {
            if (digits[j] < 10) continue;
            if (j == digits.size() - 1) {
                digits.push_back(0);
            }
            digits[j+1] += digits[j]/10;
            digits[j] = digits[j] % 10;
        }
    }
    return digits;
}

int main() {

    std::vector<int> v = LongFactorial(6);

    assert(v[0] == 0);

}