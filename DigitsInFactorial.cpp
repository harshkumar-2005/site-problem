#include <iostream>
#include <cmath> // For log10 and floor

class Solution {
public:
    int digitsInFactorial(int N) {
        if (N == 0 || N == 1)
            return 1; // 0! and 1! both have 1 digit
        
        double digitCount = 0;
        for (int i = 2; i <= N; i++) {
            digitCount += log10(i);
        }
        
        return floor(digitCount) + 1;
    }
};

int main() {
    Solution sol;
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    
    int result = sol.digitsInFactorial(N);
    std::cout << "The number of digits in " << N << "! is: " << result << std::endl;
    
    return 0;
}
