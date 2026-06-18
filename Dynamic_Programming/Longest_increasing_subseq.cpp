/*
  Given an integer array nums, return the length of the longest strictly increasing subsequence.

A subsequence is a sequence that can be derived from the given sequence by deleting some or no elements without changing the relative order of the remaining characters.

For example, "cat" is a subsequence of "crabt".
Example 1:

Input: nums = [9,1,4,2,3,3,7]

Output: 4
Explanation: The longest increasing subsequence is [1,2,3,7], which has a length of 4.

Example 2:

Input: nums = [0,3,1,3,2,3]

Output: 4
Constraints:

1 <= nums.length <= 1000
-1000 <= nums[i] <= 1000
*/

class Solution {
public:
    int LIS(vector<int>& nums, int m, vector<int> &memo)
    {
        if (memo[m] != -1) return memo[m];
        int max_val=0;
        for(int i=m+1; i< nums.size(); i++)
        {
            if (nums[i]>nums[m])
            {
                max_val = max(max_val,LIS(nums, i, memo)); 
            }
        }
        memo[m]=max_val+1;
        return memo[m];
    }
    int lengthOfLIS(vector<int>& nums) {
        int res = 1;
        vector<int> memo(nums.size(), -1);
        for(int i=0; i< nums.size(); i++)
        {
            res = max(res, LIS(nums, i, memo));
        }
        return res;
    }
};
