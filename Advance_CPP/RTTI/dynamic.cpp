#include <iostream>
using namespace std;
class A
{
public:
virtual	void disp()
	{
		cout<<"A disp";
	}
};
class B:public A
{
public:
	void disp()
	{
		cout<<"B disp";
	}
};
int main()
{/* error not polymorphic - no inheritance for A*/

//
	A *a1=new A();
B *b1=dynamic_cast <B*>(a1);//down
b1->disp();

/*   B b;
	A *aptr= &b;//up

	B *b1=new B();

	A *a1=dynamic_cast <A *>(b1);//upcasting
	

	a1->disp();
	*/
}
