#include<iostream>
using namespace std;

int main()
{
	double x = 56.7;

	int y = x;		// implicit conversion, not safe

	y = (int) x;	// c - style, safe
	y = int(x);		// c++ - style, safe
	y = static_cast<int>(x);	// modern - style, recommended

	// but all do the same

	cout << y << endl;
}
