#include<iostream>
using namespace std;
class Shape
{
public:
virtual void disp(){}
virtual void show(){}
Shape(){cout<<"sh cons";}
 virtual ~Shape()=0;
//{
//cout<<"des sh"<<endl;
//}
};
Shape::~Shape(){} 
class Circle: public Shape
{
public:
Circle(){cout<<" ci cons";}
~Circle()
{
cout<<"des ci"<<endl;
}
};
class C1: public Circle
{
public:
C1(){cout<<" c1 cons";}
~C1()
{
cout<<"des c1"<<endl;
}
};
int main()
{
Shape *s,s1;
//Circle c1;
//s=&c1;//upcasting
//

s = new C1();//upcast

//Circle *cc = new C1();
//delete cc;
delete s;
return 0;
}
