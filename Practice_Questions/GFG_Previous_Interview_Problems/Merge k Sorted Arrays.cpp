//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

#define INT_MAX 9999
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> mergarr;
        int idx_arr[K]={0};
        int i=0;
        int temp;
        int min_val;
        while(i++ < K*K)
        {
            min_val = min_element(arr, idx_arr, K);
            mergarr.push_back(min_val);
        }
        return mergarr;
    }
    int min_element(vector<vector<int>> arr, int idx_arr[], int K){       
        int min_idx = -1;
        int min_val = INT_MAX;
    
        // Find the minimum element from the current indices of the K arrays
        for (int j = 0; j < K; j++) {
            if (idx_arr[j] < K && arr[j][idx_arr[j]] < min_val) {
                min_val = arr[j][idx_arr[j]];
                min_idx = j;
            }
        }
        // Move the index forward for the array that had the smallest element
        idx_arr[min_idx]++;
        return min_val;
    }

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}
