/* 
Given a string s, find the length of the longest substring without duplicate characters.
Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len_s=0;
        int count=0;
        int istart=0;
        unordered_map<char, int> char_freq;
        for ( int i=0; i<s.size(); i++)
        {
            auto c = s[i];
            if(char_freq.find(c) != char_freq.end() && char_freq[c] >= istart)
            {
                istart = char_freq[c] + 1;
            }
            char_freq[c]=i;
            max_len_s = max(max_len_s, i-istart+1);
        }
        return max_len_s;
    }
};
