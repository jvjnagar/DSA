#include <iostream>
#include <cstring>

using namespace std;

// probelm statement:
// reverse a string without using any temporary variable

void swap(char *a, char *b)
{
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a; 
}

void swap_string(char *s, int size)
{
    for(int i=0, j=size-1; i<(size+1)/2 && j>(size-1)/2; i++, j--)
    {
        swap(&s[i], &s[j]);
    }
}

int main()
{
    char str[] = "Vijay Nagar bp";
    int size = strlen(str);
    swap_string(str, size);
    cout<<str;

    return 0;
}
