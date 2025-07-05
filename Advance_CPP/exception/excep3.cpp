//rethrow
#include <iostream>
#include<string>
using namespace std;
void handle()
{
char name[]="hello";
	
	try
	{
		throw name;
	}
	
	catch(char *str)
	{
		cout<<"the string  "<<str<<endl;
		throw;  //rethrow
	}
	
	}

int main()
{
	cout<<"start main"<<endl;
	try
	{
		handle();
	}
	catch(char *str)
	{
		cout<<"caught in main "<<str<<endl;
	}
	cout<<"end main"<<endl;
	return 0;
}
