/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2

Example 2:
Input: nums = [1,2,3], k = 3
Output: 2
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumFreq;
        prefixSumFreq[0] = 1;

        int count = 0;
        int prefix_sum = 0;

        for (int num : nums) {
            prefix_sum += num;

            if (prefixSumFreq.find(prefix_sum - k) != prefixSumFreq.end()) {
                count += prefixSumFreq[prefix_sum - k];
            }

            prefixSumFreq[prefix_sum]++;
        }

        return count;
    }
};
