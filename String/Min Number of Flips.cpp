#include<bits/stdc++.h>
using namespace std;

/*Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.
 Input: S = "001"
Output: 1
Explanation: We can flip the 0th bit to 1 to have 101.
 */ 

int minFlips (string S)
{
    int count_0=0, count_1=0;
    for(int i=0; i<S.size(); i++)
    {
        if ((i%2==0) && (S[i]=='1'))
        {
            count_0++;
        }
        else if((i%2==1) && (S[i]=='0'))
        {
            count_0++;
        }
    }
    
    for(int i=0; i<S.size(); i++)
    {
        if ((i%2==0) && (S[i]=='0'))
        {
            count_1++;
        }
        else if((i%2==1) && (S[i]=='1'))
        {
            count_1++;
        }
    }
    if(count_1>count_0)
    {
        return count_0;
    }
    else
    {
        return count_1;
    }
}

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
