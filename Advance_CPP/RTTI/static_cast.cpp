#include <iostream>
using namespace std;

class Base {
public:
	virtual void show()
	{
		cout << "\n\tbase";
	}
	virtual void print() { cout << "print" << endl; }
};

class Derived : public Base {
	int dervar;
	int d1;
public:
Derived() { dervar = 100; cout << "cons"; }
	 void show()
	{
		cout << "\n\tderived";
	}
	virtual void disp()
	{
		cout << "disp:  " << dervar << " " << d1;
	}
};


int  main()
{
	Base *pb = new Base();
	Derived *pd;


//	error conversion not possible
//	Base b1;
//	pd=&b1;//down


	pd = static_cast<Derived *>(pb);// Not safe, der can have fields
			// and methods that are not in Base.
//	pd->disp();
	pd->print();
  // cout << endl << pd;
	if(pd = dynamic_cast<Derived *>(pb))
	{
	pd->disp();
	}
cout << endl << pd;

}

