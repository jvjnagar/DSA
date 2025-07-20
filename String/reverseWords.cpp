#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        string s_tmp, s_out;
        for(auto it: s)
        {
            if (it == ' ')
            {
                if(!s_tmp.empty())
                {
                    stk.push(s_tmp);
                    s_tmp.clear();
                }
            }
            else
                s_tmp.push_back(it);
        }
        if(!s_tmp.empty()) 
            stk.push(s_tmp);
        s_out += stk.top();
        stk.pop();
        while(!stk.empty())
        {
            s_out.push_back(' ');
            s_out += stk.top();
            stk.pop();
        }
        return s_out;
    }
};

int main()
{
    string s = "sky is the blue";
    Solution sln;
    cout<<sln.reverseWords(s);
    return 0;
}
