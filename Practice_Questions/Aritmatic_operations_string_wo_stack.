#include <iostream>

using namespace std;

int find_operator(char c)
{
    if ((c=='+') ||(c=='-')||(c=='*')||(c=='/'))
        return 1;
    else
        return 0;
}
int logic_operation(int x, int y, char calc)
{
    // int x, y;
    if(calc == '+')
    {
        return (x+y);
    }
    else if(calc == '-')
    {
        return (x-y);
    }
    else if(calc == '*')
    {
        return (x*y);
    }
    else if(calc == '/')
    {
        return (x/y);
    }
}


int main()
{
    string str1 = "1-2*3-4-5*6+7*8+9";
    int j=0, k;
    int total=str1[0]-48; 
    int temp;
    for(int i=0; i<str1.length(); i++)
    {
        if(find_operator(str1[i]))
        {
            j=i+2;
            temp = str1[j-1]-48;
            while((j<str1.length())&&((str1[j]=='*')||(str1[j]=='/')))
            {
                temp = logic_operation(temp, str1[j+1]-48, str1[j]);
                j+=2;
            }
            total = logic_operation(total, temp, str1[i]);
            i=j-1;
        }
    }
    return 0;
}
