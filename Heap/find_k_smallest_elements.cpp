//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    int i, j, m, temp, temp2;
	    int KLagest_arr[k] = {0};
	    for(i=0; i<n; i++)
	    {
	        for(j=0; j<k; j++)
    	    {
    	       if (KLagest_arr[j] <= arr[i])
    	       {
    	           temp=KLagest_arr[j];
    	           KLagest_arr[j]=arr[i];
    	           for(m=j+1;m<k;m++)
    	           {
    	               temp2=KLagest_arr[m];
    	               KLagest_arr[m]=temp;
    	               temp=temp2;
    	           }
    	           break;
    	       }
    	    }
	    }
	    vector <int> out;
	    for(j=0; j<k; j++)
	    {
	        out.push_back(KLagest_arr[j]);
	    }
	    return out;
	}

};

//{ Driver Code Starts.

int main() {
        int n=7, k=3;
        int arr[7]= {1, 23, 12, 9, 30, 2, 50};
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    return 0;
}
