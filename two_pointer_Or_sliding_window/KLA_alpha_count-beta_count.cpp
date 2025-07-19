#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
You have an array of numbers. Need to find the abs diff between alpha count and beta count. 
where alpha count is the sum of the entries in the array, where those entries should be 
consecutive and should be of same value and the value and the consecutive count should match. 
beta count is same as alpha additionally the starting index of entries should start from the value itself.
For eg: arr[2,2,2,4,4,4,4,1,2,2]
alpha entries are [4,4,4,4] [1] [2,2] , because value 4 is 4 times consecutive, value 1 is 1 time consecutive, 
value 2,2 is 2 times consecutive.
Beta entries are [4,4,4,4] value 4 starting index is 4, which is same as the value itself.
output should be abs[alpha_count-beta_count].
*/

int alpha_beta_count(int arr[], int n)
{
    //will use double pointer
    int i=0, j=0, count=0;
    int alpha =0;
    int beta = 0;
    while(j<n)
    {
        if (arr[i]==arr[j])
        {
            count+=1;
            j++;
        }
        else
        {
            if (count==arr[i])
            {
                alpha+=count;
                if (i == arr[i]-1)
                    beta = arr[i];
            }
            i=j;
            count=0;
        }
    }
    if (count==arr[i])
    {
        alpha+=count;
        if (i == arr[i]-1)
            beta = arr[i];
    }
        
    return alpha - beta;
}

int main()
{
    int arr[] = {2,2,2,4,4,4,4,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<alpha_beta_count(arr, n);
    return 0;
}
