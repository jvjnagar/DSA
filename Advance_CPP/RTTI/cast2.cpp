#include <iostream>
using namespace std;


class A {
public:	virtual void disp()
	{		cout << "hello in A";	}
};

class B {
public:	virtual void disp()
	{		cout << "hello in B";	}
};
int main()
{
	int num = 100;
	void pass(const int *);

	const int *ptr = &num;

	int *b = const_cast<int *> (ptr);
	//cout << *ptr << endl;//100
//pass(ptr);
	//(*ptr)++;
	//cout << *ptr << endl;//101
	(*b)++;
	//cout << *ptr << endl;//101
	
	B *pb = new B();
	A *pa = reinterpret_cast<A *> (pb);
	pa->disp();
//cout<<endl;

int i=10;
	int *cptr=&i;

	int *intptr=reinterpret_cast<int*>(&i);
	cout<<*intptr;
	

return 0;
}
void pass(const int *a)
{
	cout << *a << endl;//100
	int *b = const_cast<int *> (a);
	(*b)++;
	cout << *b << endl;//101
}

 


