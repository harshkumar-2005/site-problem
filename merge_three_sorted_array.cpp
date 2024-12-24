#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    // Function to merge three sorted vectors or arrays into a single vector.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) {
        int m = A.size(), n = B.size(), o = C.size();
        int i = 0, j = 0, k = 0;
        vector<int> merged;

        // Merge the three arrays until one of them is exhausted
        while (i < m || j < n || k < o) {
            // Use INT_MAX for arrays that are exhausted
            int a = (i < m) ? A[i] : INT_MAX;
            int b = (j < n) ? B[j] : INT_MAX;
            int c = (k < o) ? C[k] : INT_MAX;

            // Select the smallest element and advance the corresponding index
            if (a <= b && a <= c) {
                merged.push_back(a);
                i++;
            } else if (b <= a && b <= c) {
                merged.push_back(b);
                j++;
            } else {
                merged.push_back(c);
                k++;
            }
        }

        return merged;
    }
};

int main() {
    // Example arrays
    vector<int> A = {1, 4, 7};
    vector<int> B = {2, 5, 8};
    vector<int> C = {3, 6, 9};

    Solution solution;
    vector<int> result = solution.mergeThree(A, B, C);

    // Print the merged array
    cout << "Merged Array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
