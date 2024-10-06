#include <stdio.h>

int multiply(int a, int b)
{
    if((b==0) or (a==0))
    {
        return 0;
    }
    else if(b>0)
    {
        return a+multiply(a,b-1);
    }
    else
    {
        return -multiply(a,-b);
    }
}

int multiply_bitwise(int a, int b) {
    int result=0;
    while (b != 0) {
        if (b&1)
            result += a; 
        a<<=1;
        b>>=1; 
    }
    return result;
}

int main() {
    int num1 = -5;
    int num2 = 5;

    int result = multiply_bitwise(num1, num2);

    printf("Result: %d\n", result);

    return 0;
}
