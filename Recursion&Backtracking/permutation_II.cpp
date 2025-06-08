class Solution {
  public:
    void backtrack(string &s, vector<bool> used, string elements, vector<string> &result)
    {
        if(elements.size()==s.size())
        {
            result.push_back(elements);
            return;
        }
        for(int i=0; i<s.size(); i++)
        { 
            if (used[i])
                continue;
            if (i>0 && s[i-1] == s[i] && !used[i-1])
                continue;
            used[i]=true;
            elements.push_back(s[i]);
            backtrack(s, used, elements, result);
            elements.pop_back();
            used[i]=false;
        }
        return;
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> result;
        string elements;
        vector<bool> used(s.size(), false);
        sort(s.begin(), s.end());
        backtrack(s, used, elements, result);
        return result;
        
    }
};
