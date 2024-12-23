#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        
        int m = arr1.size(); 
        int n = arr2.size(); 
        int i = 0, j = 0;
        vector<int> result;
        
        while(i < m && j < n) {
            // Skip duplicates in arr1
            if(i > 0 && arr1[i] == arr1[i - 1]) {
                i++;
                continue;
            }
            // Skip duplicates in arr2
            if(j > 0 && arr2[j] == arr2[j - 1]) {
                j++;
                continue;
            }

            // Compare elements and move pointers
            if(arr1[i] < arr2[j]) {
                i++;
            } else if(arr1[i] > arr2[j]) {
                j++;
            } else {
                // Common element found
                result.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        
        return result;  // Move this outside the while loop
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {1, 2, 2, 3, 4, 4, 5};
    vector<int> arr2 = {2, 2, 4, 4, 6, 7};

    vector<int> result = sol.intersection(arr1, arr2);

    // Output the intersection
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
