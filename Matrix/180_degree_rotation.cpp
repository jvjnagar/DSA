#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int row = mat.size();
        int column = mat[0].size();
        int tmp;
        int divn = row%2 == 0 ? row/2 : row/2+1;
        for(int i=0; i < divn; i++)
        {
            for(int j=0; j < column; j++)
            {
                if (row%2 != 0 && i == row/2 && j > column/2)
                    continue;
                tmp = mat[i][j];
                mat[i][j] = mat[row-1-i][column-1-j];
                mat[row-1-i][column-1-j] = tmp;
            }
        }
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution ob;
        ob.rotateMatrix(matrix);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
