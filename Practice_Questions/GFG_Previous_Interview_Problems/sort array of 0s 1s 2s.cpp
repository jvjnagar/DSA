#include <stdio.h>
void sort(int a[], int n)
{
    int temp;
    int i=0, z=0, o=0,j =n-1;
   while(i<=j)
    {
        if(a[i]==0)
        {
            a[z] = 0;
            z++;
            i++;
        }
        else if(a[i]==1)
        {
            o++;
            i++;
        }
        else
        {
            a[i]=a[j];
            a[j]=2;
            j--;
        }
        
        
    }
    for(i=z;i<z+o;i++)
    {
        a[i]=1;
    }
}

int main()
{
    int a[] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int i,n=9;
    sort(a, n);
    for(i=0; i<9;i++)
    {
        printf("%d", a[i]);
    }
}
