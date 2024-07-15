#include <bits/stdc++.h>   
using namespace std;

//brute-Force approach
vector<int> findNextSmaller(vector<int> arr, int n) 
    {
        vector<int> nextElements(n);
        int next;
        for(int i=n-1; i>=0; i--)
        {
            next=-1;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    next = arr[j];
                    break;
                }
            }
            nextElements[i] = next;
        }
        return nextElements;
    } 

//Using Stack
    vector<int> findNextSmallerStack(vector<int> arr, int n) 
    {
        vector<int> nextElements(n);
        int next;
        stack<int> s;
        for(int i=n-1; i>=0; i--)
        {
            next=-1;
            while( (!s.empty()) && (s.top()>=arr[i])) s.pop();
            nextElements[i] = s.empty() ? -1 : s.top();
            s.push(arr[i]);
        }
        return nextElements;
    } 


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.findNextSmallerStack(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}
