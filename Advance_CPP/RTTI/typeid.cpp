#include <iostream>
using namespace std;
# include<typeinfo>

class shape
{
	virtual void area() {}
};
class circle :public shape
{};
class square :public shape
{};
int  main()
{
int var = 100;
	int *ptr;
	ptr= &var;

	cout << typeid(var).name() << endl;//int
	cout << typeid(*ptr).name() << endl;//int
	cout << typeid(ptr).name() << endl;//int*

	circle *c = new circle();
	shape *s = c;

	cout << "s is holding  : " << typeid(*c).name() << endl;
	cout << "s is holding  : " << typeid(c).name() << endl;

	cout << "s is holding  : " << typeid(*s).name() << endl;//circle
	cout << "s is holding  : " << typeid(s).name() << endl;//*shape

	square *sq = new square();
	s = sq;
	cout << "s is holding  : " << typeid(*s).name() << endl;//square
	cout << "s is holding  : " << typeid(s).name() << endl;


	
}
