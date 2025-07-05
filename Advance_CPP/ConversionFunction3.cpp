#include<iostream>
using namespace std;

class A
{
	int x;
public:
	A(int _x = 0) : x(_x) {cout<<"cons";}
	operator int()
	{
	cout<<"oper"<<endl;
		return x;
	}
};

void demo(int var)
{
	cout << var << endl;
}

int  main()
{
	A a1;

	demo(100);
	demo(a1);		// this call goes through	
}
