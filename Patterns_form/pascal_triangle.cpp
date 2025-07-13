#include <iostream>
#include <vector>
using namespace std;

/*Given a positive integer n, return the nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.
Examples:
Input: n = 4
Output: [1, 3, 3, 1]
Explanation: 4th row of pascal's triangle is [1, 3, 3, 1].
Input: n = 5
Output: [1, 4, 6, 4, 1]
Explanation: 5th row of pascal's triangle is [1, 4, 6, 4, 1].
Input: n = 1
Output: [1]
Explanation: 1st row of pascal's triangle is [1].
  */

class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        int j=0, val;
        vector<int> prev;
        vector<int> current;
        for(int i=1; i<=n; i++)
        {
            if (i==1)
            {
                current.push_back(1);
            }
            else
            {
                j=1;
                while(j<=i)
                {
                    if(j==1 || j==i)
                    {
                        current.push_back(1);
                    }
                    else
                    {
                        val = prev[j-2]+prev[j-1];
                        current.push_back(val);
                    }
                    j++;
                }
            }
            prev.clear();
            for (auto item: current)
            {
                prev.push_back(item);
            }
            current.clear();
        }
        return prev;
    }
};


int main()
{
    Solution sln;
    vector<int> pascal_out = sln.nthRowOfPascalTriangle(4);
    for (auto item : pascal_out)
    {
        cout<< item<< " ";
    }
    return 0;
}
