#include <iostream>
#include<string>
using namespace std;
void handle(int test)
{
char name[]= "wrong";
	try
	{
		if(test==0)throw test;
		if(test==1)throw name;
		cout<<"not executed"<<endl;
	}
	catch(int i)
	{
		cout<<"exception "<<i<<endl;
	}
	 catch(...)
	 {
	 cout<<"exception";
	 }
	 
	/*
	catch(char *str)
	{
		cout<<"the string  "<<str<<endl;
	}*/
	cout<<"end"<<endl;
	}

int main()
{
	handle(0);
	handle(1);
	handle(3);
	return 0;
}
