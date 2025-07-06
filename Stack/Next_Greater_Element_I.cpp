#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.
Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

Example 1:
Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
*/

class Solution {
public:
    // solution 2 using stack
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        stack<int> stk;
        unordered_map<int, int> numIdx;
        for(int i=nums2.size()-1; i>=0; i--)
        {
            while(!stk.empty() && stk.top()<= nums2[i]) stk.pop();
            numIdx[nums2[i]] = stk.empty() ? -1 : stk.top();
            stk.push(nums2[i]);
        }
        for(auto &num : nums1)
        {
            result.push_back(numIdx[num]);
        }
        return result;
    }
    //Solution 1 brutforce
    vector<int> nextGreaterElement1(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums2_idx;
        vector<int> next_greater_nums2;
        for(int i=0; i<nums1.size(); i++)
        {
            int flag=0;
            for(int j=0; j<nums2.size(); j++)
            {
                if ((nums1[i]==nums2[j]) && (flag==0))
                {
                    nums2_idx.push_back(j);
                    flag=1;
                }
                // to check next greater element
                if(flag==1)
                {
                    if(nums1[i]<nums2[j])
                    {
                        next_greater_nums2.push_back(nums2[j]);
                        flag=2;
                        break;
                    }
                }
            }
            if (flag==1)
                next_greater_nums2.push_back(-1);
        }
        return next_greater_nums2;
    }
};
int main()
{
    Solution sln;
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    
    vector<int> result = sln.nextGreaterElement(nums1, nums2);
    for (int item: result)
    {
        cout<<item<<", "<<flush;
    }
    return 0;
}
