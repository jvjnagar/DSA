/*
Pow(x, n) is a mathematical function to calculate the value of x raised to the power of n (i.e., x^n).

Given a floating-point value x and an integer value n, implement the myPow(x, n) function, which calculates x raised to the power n.

You may not use any built-in library functions.

Example 1:

Input: x = 2.00000, n = 5

Output: 32.00000
Example 2:

Input: x = 1.10000, n = 10

Output: 2.59374
Example 3:

Input: x = 2.00000, n = -3

Output: 0.12500
Constraints:

-100.0 < x < 100.0
-1000 <= n <= 1000
n is an integer.
If x = 0, then n will be positive.
*/

class Solution {
public:
    double Powr(double x, int n)
    {
        double res;
        double val;
        if (n==0 || x==1)
            return 1; 
        if (n%2==0)
        {
            val = Powr(x, n/2);
            res =  val*val;
        }
        else
            res = x * Powr(x, n-1);
        return res;
    }
    double myPow(double x, int n) {
        double res = Powr(x, abs(n));
        if (n<0)
            res = 1/res;
        return res;
    }
};
