#include <iostream>

int trappingWater(int arr[], int n){
    // code here
    long *left_boundry = new long[n];
    long *right_boundry = new long[n];
    left_boundry[0]=arr[0];
    right_boundry[n-1]=arr[n-1];
    long long trap_water=0;
    int i;
    for(i=1; i<n; i++)
    {
        if(left_boundry[i-1]<arr[i])
        {
            left_boundry[i] =arr[i]; 
        }
        else
        {
            left_boundry[i]=left_boundry[i-1];
        }
    }
    for(i=n-2; i>=0; i--)
    {
        if(arr[i]>right_boundry[i+1])
        {
            right_boundry[i]=arr[i]; 
        }
        else
        {
            right_boundry[i]=right_boundry[i+1];
        }
    }
    for(i=0; i<n; i++)
    {
        if (left_boundry[i]<right_boundry[i])
        {
            trap_water+=left_boundry[i]-arr[i];
        }
        else
        {
            trap_water+=right_boundry[i]-arr[i];
        }
    }
    return trap_water;
}

int main()
{
    int arr[] = {3,0,2,0,1};
    printf("%d",trappingWater(arr, 5));

    return 0;
}
