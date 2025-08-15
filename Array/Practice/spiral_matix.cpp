#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int istart = 0, iend = M - 1, jstart = 0, jend = N - 1;
        vector<int> out;
        int i, j;

        while (istart <= iend && jstart <= jend) {
            if (istart <= iend) {
                for (j = jstart; j <= jend; j++)
                    out.push_back(matrix[istart][j]);
            }
            istart++;

            if (jstart <= jend) {
                for (i = istart; i <= iend; i++)
                    out.push_back(matrix[i][jend]);
            }
            jend--;

            if (istart <= iend) {
                for (j = jend; j >= jstart; j--)
                    out.push_back(matrix[iend][j]);
            }
            iend--;

            if (jstart <= jend) {
                for (i = iend; i >= istart; i--)
                    out.push_back(matrix[i][jstart]);
            }
            jstart++;
        }
        return out;
    }
};

int main() {
    // Predefined matrix
    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);

    cout << "Spiral order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
