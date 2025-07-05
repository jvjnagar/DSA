#include<iostream>
using namespace std;

int main()
{
	int a=10;

	int &lref = a;
	lref=99;
   	cout<<a<<endl;
	
	int &&rref= 20;
	rref = 200;
     lref = rref; 
	cout<<a<<"  "<<lref<<"   "<<rref<<endl;
	cout<<&lref<<"  "<<&rref<<endl;
	return 0;
}
