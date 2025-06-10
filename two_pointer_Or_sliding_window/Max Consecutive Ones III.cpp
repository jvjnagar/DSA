class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int max_len=0;
        int zeros=0;
        for (int right=0; right<nums.size();right++)
        {
            if (nums[right]==0)
                zeros++;
            while(zeros>k)
            {
                if (nums[left]==0)
                {
                    zeros--;
                }
                left++;
            }
            if (max_len < right-left+1)
                max_len = right-left+1;
        }
        return max_len;
    }
};
