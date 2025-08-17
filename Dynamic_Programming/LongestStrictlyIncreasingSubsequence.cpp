/*
Given an array arr[] of non-negative integers, the task is to find the length of the Longest Strictly Increasing Subsequence (LIS).
A subsequence is strictly increasing if each element in the subsequence is strictly less than the next element.

Examples:
Input: arr[] = [5, 8, 3, 7, 9, 1]
Output: 3
Explanation: The longest strictly increasing subsequence could be [5, 7, 9], which has a length of 3.
Input: arr[] = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
Output: 6
Explanation: One of the possible longest strictly increasing subsequences is [0, 2, 6, 9, 13, 15], which has a length of 6.
Input: arr[] = [3, 10, 2, 1, 20]
Output: 3
Explanation: The longest strictly increasing subsequence could be [3, 10, 20], which has a length of 3.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Approach 2: Binary Search + DP (O(n log n))
    int lis_bisect(vector<int>& arr) {
        if (arr.empty()) return 0;
        vector<int> liseq;
        liseq.push_back(arr[0]);

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > liseq.back()) {
                liseq.push_back(arr[i]);
            } else {
                int idx = lower_bound(liseq.begin(), liseq.end(), arr[i]) - liseq.begin();
                liseq[idx] = arr[i];
            }
        }
        return (int)liseq.size();
    }
    
    // Approach 1: DP O(n^2)
    int lis(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        vector<int> dp(n, 1);
        int len = 1;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[j] < arr[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            len = max(len, dp[i]);
        }
        return len;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> arr1 = {10, 46, 42, 34, 36, 10, 42};
    vector<int> arr2 = {5, 8, 3, 7, 9, 1};

    cout << "Array 1: ";
    for (int x : arr1) cout << x << " ";
    cout << "\n";
    cout << "LIS (O(n^2) DP) = " << sol.lis(arr1) << "\n";
    cout << "LIS (O(n log n) Binary Search) = " << sol.lis_bisect(arr1) << "\n\n";

    cout << "Array 2: ";
    for (int x : arr2) cout << x << " ";
    cout << "\n";
    cout << "LIS (O(n^2) DP) = " << sol.lis(arr2) << "\n";
    cout << "LIS (O(n log n) Binary Search) = " << sol.lis_bisect(arr2) << "\n";

    return 0;
}
