#include <cmath>
#include <iostream>
using namespace std;


// finding substring in a given string. Print “YES” if exists else “NO”.
void fun(string s, string s_sub)
{
    int j,flag = 0;
    for(int i=0; i<(s.length()-s_sub.length()-1); i++)
    {
        if(s[i]==s_sub[0])
        {
            j=0;
            while(j<s_sub.length())
            {
                if(s[i+j]!=s_sub[j])
                {
                    break;
                }
                j++;
            }
            if(j==s_sub.length())
            {
                cout<<"YES";
                flag = 1;
            }
        }
    }
    if(flag ==0)
        cout<<"NO";
}

int main()
{
    string s = "Vijay nagar";
    string s_sub = "ng";
    fun(s, s_sub);
    return 0;
}
