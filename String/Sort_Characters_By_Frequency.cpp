/*Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.

Example 1:
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:
Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:
Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
  */

#include <iostream>
#include <vector>
#include <any>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    string s ="tree";
    string s_out;
    unordered_map<char, int> freq;
    for(auto it: s) 
    {
        freq[it]++;
    }
    vector<pair<int, char>> c_freq;
    for(auto pair: freq)
    {
        c_freq.push_back(make_pair(pair.second, pair.first));
    }
    sort(c_freq.begin(), c_freq.end(), greater());
    for (auto ch: c_freq)
    {
        while(ch.first)
        {
            s_out.push_back(ch.second);
            ch.first--;
        }
    }
    cout<<s_out;
    return 0;
}
