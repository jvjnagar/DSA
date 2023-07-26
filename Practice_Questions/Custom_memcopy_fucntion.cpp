
#include <iostream>

using namespace std;
void memCopy(void *dest, void *src, int size)
{
    char *dest1 = (char *) dest;
    char *src1 = (char *) src;
    for(int i=0; i<size; i++)
    {
        dest1[i] = src1[i];
    }
}

int main()
{
    int src[] = {10,11,12,13,14,15};
    int n = sizeof(src)/sizeof( src[0]);
    int *dest = new int[100];
    memCopy(dest, src, sizeof(src));
    for(int i=0; i<n; i++)
    {
        cout<<dest[i]<<",";
    }

    return 0;
}
