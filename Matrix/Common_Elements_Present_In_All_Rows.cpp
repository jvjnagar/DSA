/*
You are given a 2-D Matrix 'MAT' having 'N' rows and 'M' columns, respectively. Your task is to find all elements which are present in each row of the matrix.
Note :
1. The output array can contain the elements in any particular order.
2. Even if a particular element appears more than once in each matrix row, it should still be present only once in the output array.
For Example :
Consider the matrix MAT [ [ 2, 3, 4, 7 ] , [ 0, 0, 3, 5 ] , [ 1, 3, 8, 9 ] ] having 3 rows and 4 columns respectively.
The output array should be [ 3 ] as 3 is the only element that is present in all three rows.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findCommonElements(vector<vector<int>> &mat)
{
    vector<int> out;
    int col = mat[0].size();
    int row = mat.size();
    unordered_map<int, int> freq;

    // initialize with first row
    for (int j = 0; j < col; j++)
    {
        if (!freq[mat[0][j]])
            freq[mat[0][j]]++;
    }

    // process remaining rows
    for (int i = 1; i < row; i++)
    {
        unordered_map<int, int> seen;
        for (int j = 0; j < col; j++)
        {
            if (freq[mat[i][j]] && !seen[mat[i][j]])
            {
                freq[mat[i][j]]++;
                seen[mat[i][j]] = 1;
            }
        }
    }

    // collect common elements
    for (auto &item : freq)
    {
        if (item.second == row)
            out.push_back(item.first);
    }

    return out;
}

int main()
{
    // Example 1
    vector<vector<int>> mat1 = {
        {1, 2, 3},
        {4, 2, 3},
        {7, 2, 3}};
    vector<int> res1 = findCommonElements(mat1);
    cout << "Common elements (Example 1): ";
    for (int x : res1) cout << x << " ";
    cout << "\n";

    // Example 2
    vector<vector<int>> mat2 = {
        {0, 0, 1},
        {1, 2, 0},
        {0, 0, 1}};
    vector<int> res2 = findCommonElements(mat2);
    cout << "Common elements (Example 2): ";
    for (int x : res2) cout << x << " ";
    cout << "\n";

    // Example 3
    vector<vector<int>> mat3 = {
        {5, 5, 5},
        {5, 1, 5},
        {2, 5, 5}};
    vector<int> res3 = findCommonElements(mat3);
    cout << "Common elements (Example 3): ";
    for (int x : res3) cout << x << " ";
    cout << "\n";

    return 0;
}
