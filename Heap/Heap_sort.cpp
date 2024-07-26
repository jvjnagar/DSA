#include <stdio.h>
#include <iostream>

void insert(int A[], int n)
{
    int temp, i=n;
    temp = A[i];
    while(i>1 && A[i/2]<temp)
    {
        A[i] = A[i/2];
        i = i/2;
    }
    A[i] = temp;
}

void createHeap(int A[], int n)
{
    for(int i = 2; i<=n; i++ )
    {
        insert(A, i);
    }
    
}

void Delete(int A[], int n)
{
    int i=1, j;
    int temp, temp2;
    temp = A[1];
    A[i] = A[n];
    j = i*2;
    while(j<n-1)
    {
        if(A[j]<A[j+1])
            j = j+1;
        if(A[i]<A[j])
        {
            temp2 = A[i];
            A[i] = A[j];
            A[j] = temp2;
            i=j;
            j= j*2;
        }
        else
            break;
    }
    A[n] = temp;
}

void heapSort(int A[], int n)
{
    int i;
    for(i=n;i>1; i--)
    {
        Delete(A, i);
    }
}
int main()
{
    int A[] = {0,40,35,15,30,10,12,6,5,20,50};
    createHeap(A, 10);
    
    heapSort(A, 10);
    
    for(int i=0; i<11; i++)
        printf("%d, ", A[i]);
    printf("\n");
    
    
}
