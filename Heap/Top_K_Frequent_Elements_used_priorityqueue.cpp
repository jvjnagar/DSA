#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<queue>
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
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> hpq;
        for(auto& [item, count]: freq) // used & operator, which is more m/m efficient, and elements also can be modified
        {
            hpq.push({count, item}); //as compiler knows the type is pair<int, int> so instead of make_pair we can use {count, num}
            if(hpq.size()>k)
                hpq.pop();
        }
        //priority_queue is not iterable, so using while loop
        while(!hpq.empty())
        {
            out.push_back(hpq.top().second);
            hpq.pop();
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
