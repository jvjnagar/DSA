#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

void fun(int *main_var)
{
    int fun_var;
    if(main_var<&fun_var) 
        cout<<"Stack upward"; 
    else
        cout<<"Stack downward";
}

int main()
{
    int main_var=10;
    fun(&main_var);
    return 0;
}
