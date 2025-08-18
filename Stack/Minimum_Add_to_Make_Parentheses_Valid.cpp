#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        int mv = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                stk.push(s[i]);
            if (s[i] == ')') {
                if (!stk.empty())
                    stk.pop();
                else
                    mv++;
            }
        }
        while (!stk.empty()) {
            stk.pop();
            mv++;
        }
        return mv;
    }
};

int main() {
    Solution sol;

    vector<string> testCases = {
        "())",      // needs 1 '('
        "(((",      // needs 3 ')'
        "()",       // already valid
        "()))((",   // needs 4 to balance
        "(()())"    // already valid
    };

    for (string s : testCases) {
        cout << "Input: " << s << " -> Min Additions: " 
             << sol.minAddToMakeValid(s) << endl;
    }

    return 0;
}
