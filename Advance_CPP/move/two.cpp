#include<iostream>
using namespace std;
class A
{     int var ;
	public:
		A getObj()
{ A a1;  		a1.var = 77; 	return a1; 	}
		A& getObject()
		{	A a;
			a.var = 88;
			cout<<a.var<<endl;
			return a;
		}
		A& getThis()
		{	A a;
			a.var = 88;
			cout<<a.var<<endl;
			this->var = a.var;
			return *this;
		}
		  int getValue()
{			  return 10;		  }
		void disp()
{		cout<<"disp:   "<<var<<endl; 	}
};
int main()
{	A a1;
	A &&a3 = a1.getObj();
	A a4 = a1.getObj();	
	a3.disp();
	A &a2=a1.getObject();
	//a2.disp();//err
	A aa = a1.getThis();
	aa.disp();
//	a2.disp();
//
	  int a = 10;
	int  &&i=a1.getValue();   // 
	int val = a1.getValue();
	cout<<i<<endl;
	return 0;
}
