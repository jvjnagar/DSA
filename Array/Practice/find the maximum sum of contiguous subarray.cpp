#include <bits/stdc++.h>
using namespace std;

/* Given an integer array arr[]. You need to find and return the maximum sum possible from all the subarrays.
Examples:
Input: arr[] = [1, 2, 3, -2, 5]
Output: 9
Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5).
Input: arr[] = [-1, -2, -3, -4]
Output: -1
Explanation: Max subarray sum is -1 of element (-1). */


//Method 1: brute force method
// Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        vector <int> sum_arr;
        int j, sum, sum_max;
        int n=arr.size();
        for(int i=0; i<n; i++)
        {
            j=i+1;
            sum=sum_max=arr[i];
            while(j<n)
            {
                sum+=arr[j];
                if (sum>sum_max)
                {
                    sum_max = sum;
                }
                j++;
            }
            sum_arr.push_back(sum_max);
        }
        sum_max=-99999;
        
        for(int i=0; i<n; i++)
        {
            if(sum_arr[i]>sum_max)
            {
                sum_max = sum_arr[i];
            }
        }
        return sum_max;
        
    }
