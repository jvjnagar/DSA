#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> fq;
        vector<int> result;
        int m = grid.size();
        int n = grid[0].size();
        int sum = 0;
        int N = m*n;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                fq[grid[i][j]]++;
                sum += grid[i][j];
            }
        }
        for(auto item: fq )
        {
            if (item.second > 1)
                result.push_back(item.first);
        }
        int missing = N*(N+1)/2 - (sum - result[0]);
        result.push_back(missing);
        return result;
    }
};

int main() {
    Solution sol;

    // Example 1: 2x2 grid
    vector<vector<int>> grid1 = {
        {1, 2},
        {2, 4}   // Here 2 is repeated, 3 is missing
    };
    vector<int> ans1 = sol.findMissingAndRepeatedValues(grid1);
    cout << "Repeated: " << ans1[0] << ", Missing: " << ans1[1] << endl;

    // Example 2: 3x3 grid
    vector<vector<int>> grid2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 7, 9}  // 7 is repeated, 8 is missing
    };
    vector<int> ans2 = sol.findMissingAndRepeatedValues(grid2);
    cout << "Repeated: " << ans2[0] << ", Missing: " << ans2[1] << endl;

    return 0;
}
