#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

/*Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1] */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> out;
        unordered_map<int, int> freq;
        for(auto item: nums)
        {
            freq[item] += 1;
        }
        vector<pair<int, int>> ct_freq;
        for(auto item_ct : freq)
        {
            ct_freq.push_back(make_pair(item_ct.second, item_ct.first));
        }
        sort(ct_freq.begin(), ct_freq.end(), greater());
        for(int i=0; i<k; i++)
        {
            out.push_back(ct_freq[i].second);
        }
        return out;
    }
};

int main()
{
    Solution sln;
    vector nums = {1,1,1,2,2,3};
    vector<int> freq = sln.topKFrequent(nums, 2);
    for (int item: freq)
    {
        cout<<item<<", "<<flush;
    }
    return 0;
}
