//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int i, j;
        int m, n;
        m=matrix.size();
        n=matrix[0].size();
        vector<int> out;
        int left, right, top, bottom;
        top=0;
        bottom=m-1;
        left=0;
        right=n-1;
        while(left<=right && top<=bottom)
        {
            for(j=left; j<=right; j++)
                out.push_back(matrix[top][j]);
            top++;
            for(i=top; i<=bottom;i++)
                out.push_back(matrix[i][right]);
            right--;
            if(top<=bottom)
            {
                for(j=right; j>=left;j--)
                    out.push_back(matrix[bottom][j]);
                bottom--;
            }
            if(left<=right)
            {
                for(i=bottom; i>=top;i--)
                    out.push_back(matrix[i][left]);
                left++;
            }
        }
        return out;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
