#include<iostream>
using namespace std;

class Shape
{
public:
virtual void area()=0;
virtual void peri()=0;
};
class Circle//: public Shape
{
public:
virtual void disp(){cout<<"ci disp"<<endl;}
virtual void area(){}
};

void show(Circle c1)
{
}
int main()
{
	Circle c2;
	c2.disp();

Shape *s;
Circle c1,*c;
s = &c1;//upcasting
s->disp();
//c = &s1;//downcasting
 return 0;
}









