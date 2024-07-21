//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int i, j, k, l;
        string temp;
        l=0;
        k=S.length();
        // char *s = new char[S.length()+1];
        // strcpy(s, S.c_str());
        for(i=S.length()-1; i>=0; i--)
        {
            if(S[i]=='.')
            {
                j=i+1;
                while(j<k)
                {
                    temp.push_back(S[j++]);
                }
                temp.push_back('.');
                k=i;
            }
            if(i==0)
            {
                j=0;
                while(j<k)
                {
                    temp.push_back(S[j++]);
                }
            }
        }
        return temp;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
