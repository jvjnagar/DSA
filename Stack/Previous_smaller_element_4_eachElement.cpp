#include <bits/stdc++.h>   
using namespace std;

vector<int> findNextSmallerStack(vector<int> arr, int n) 
{
    vector<int> nextElements(n);
    int next;
    stack<int> s;
    for(int i=0; i<n; i++)
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
