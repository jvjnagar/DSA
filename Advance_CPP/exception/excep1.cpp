
#include <iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"start \n";
	try
	{
		cout<<"inside try  "<<endl;
		throw 100;
		cout<<"not executed";
	}
	catch(int i)
	{
		cout<<"exception ";
		cout<<i<<endl;
	}
	
	cout<<"end";
	return 0;
}
