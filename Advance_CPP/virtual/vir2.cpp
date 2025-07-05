#include<iostream>
using namespace std;
class Shape
{
public:
virtual void area(){cout<<"sh"<<endl;}
virtual void area1(){cout<<"sh"<<endl;}
virtual void area2(){cout<<"sh"<<endl;}
virtual void area4(){cout<<"sh"<<endl;}
};
class Circle: public Shape
{
public:
    //void area() 
    //{cout<<"ci"<<endl;}
};
int main()
{
Shape s1;
cout<<sizeof(s1)<<endl;//1

Circle c1;
cout<<sizeof(c1);

/*Shape *s;
Circle c1;
s=&c1;//upcasting
s->area();  //ci
*/
return 0;
}
