#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        if(N==0)
        {
            return 1;
        }
        else
        {
            return N*factorial(N-1);
        }
        return -1;
    }

};

int main() {
    int N = 5;
    Solution s1;
    long long result = s1.factorial(N); // Store the factorial result
    cout << "Factorial of " << N << " is " << result << endl; // Display the result
    return 0;
}