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
                if(s_tmp!="")
                    stk.push(s_tmp);
                s_tmp = "";
                continue;
            }
            else
                s_tmp.push_back(it);
        }
        if(s_tmp!="")
            stk.push(s_tmp);
        for (auto c: stk.top())
            s_out.push_back(c);
        stk.pop();
        while(!stk.empty())
        {
            s_out.push_back(' ');
            for (auto c: stk.top())
                s_out.push_back(c);
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
