//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	//not optimized
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
	//using heap
	vector<int> kLargest(int arr[], int n, int k) {
		    // code here
		    vector<int> out;
		    int temp;
		    createHeap(arr, n);
		    for(int i=n-1; i>n-k-1; i--)
		    {
		        temp = Delete(arr, i);
		        out.push_back(temp);
		    }
		    return out;
		}
	
	void insert(int arr[], int n)
	    {
	        int temp, i=n;
	        temp = arr[i];
	        while(i>=1 && arr[(i-1)/2]<temp)
	        {
	            arr[i] = arr[(i-1)/2];
	            i = (i-1)/2;
	        }
	        arr[i] = temp;
	    }
	    
	    void createHeap(int arr[], int n)
	    {
	        for(int i = 0; i<n; i++ )
	        {
	            insert(arr, i);
	        }
	        
	    }
	    
	    int Delete(int arr[], int n)
	    {
	        int i=0, j;
	        int temp, temp2;
	        temp = arr[0];
	        arr[i] = arr[n];
	        j = i*2+1;
	        while(j<n)
	        {
	            if(arr[j]<arr[j+1])
	                j = j+1;
	            if(arr[i]<arr[j])
	            {
	                temp2 = arr[i];
	                arr[i] = arr[j];
	                arr[j] = temp2;
	                i=j;
	                j= j*2+1;
	            }
	            else
	                break;
	        }
	        arr[n] = temp;
	        return temp;
	    }
	    void heapSort(int arr[], int n)
	    {
	        int i;
	        for(i=n-1;i>=1; i--)
	        {
	            Delete(arr, i);
	        }
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
