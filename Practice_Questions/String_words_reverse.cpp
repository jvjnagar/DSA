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

void swap_letters(char *s, int size)
{
    for(int i=0, j=size-1; i<(size+1)/2 && j>(size-1)/2; i++, j--)
    {
        swap(&s[i], &s[j]);
    }
}

void swap_string(char *s, int size)
{
    swap_letters(&s[0], size);
    int size1, j=0;
    char t[] = {" "};
    for(int i=0; i<size+1; i++)
    {
        if((s[i] == t[0] )||(i == size))
        {
            size1 = i-j;
            swap_letters(&s[j], size1);
            j = i+1;
        }
    }
}

int main()
{
    char str[] = "Vijay Nagar bp";
    int size = strlen(str);
    swap_string(&str[0], size);
    cout<<str;

    return 0;
}

