/*
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed.

Example 1:
Input: text = "nlaebolko"
Output: 1

Example 2:
Input: text = "loonbalxballpoon"
Output: 2

Example 3:
Input: text = "leetcode"
Output: 0
*/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        int arr[7]={0};
        int i, count =0, flag=1;
        unordered_map<char, int> u_map;
        for (int j=0; j<text.size();j++)
        {
            u_map[text[j]]+=1;
        }
        while (flag)
        {
            for(i=0; i<s.size(); i++)
            {
                if (u_map[s[i]]==0)
                {
                    flag=0;
                    break;
                }
                u_map[s[i]]-=1;
            }
            if(i==s.size())
                count += 1;
        }
        return count;
    }
};
