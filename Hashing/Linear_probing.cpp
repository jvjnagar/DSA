#include <iostream>
//#include <bits/stdc++.h>

#define SIZE 10
using namespace std;

int Hash(int val)
{
    return (val%SIZE);
}
int prob(int H[], int val)
{
    int key, i=0;
    key = Hash(val);
    while(H[(key+i)%SIZE]!=0)
        i++;
    return (key+i)%SIZE;
}

void insert(int H[], int val)
{
    H[prob(H, val)] = val;
}

int search(int H[], int val)
{
    int key, i=0;
    key = Hash(val);
    while(H[(key+i)%SIZE]!=val)
    {
        if(H[(key+i)%SIZE]==0)
            return -1;
        i++;
    }
    return (key+i)%SIZE;
}

int main()
{
    int size =10;
    int H[size];
    for(int i=0; i<size; i++)
        H[i] = 0;
    insert(H, 10);
    insert(H, 11);
    insert(H, 21);
    insert(H, 31);
    insert(H, 37);
    insert(H, 32);
    
    for(int i=0; i<size; i++)
        cout<<H[i]<<" ";
    
    int val = 13;
    if (search(H, val)==-1)
        printf("\n searching element is not found" );
    else
        printf("\n searching element %d is found", H[search(H, val)] );
    return 0;
}
