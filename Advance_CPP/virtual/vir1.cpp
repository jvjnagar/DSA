#include<iostream>
using namespace std;

class Shape
{
public:
   Shape()
   {cout<<"cons sh"<<endl;   }
virtual ~Shape()
   {cout<<"des sh"<<endl;   }
};
class Circle: public Shape
{
public:
   Circle()
   {cout<<"cons ci"<<endl;   }
   ~Circle()
   {cout<<"des ci"<<endl;   }


};
int main()
{
//Shape *s;
//Circle c1;
//s = &c1;
Shape *s = new Circle();
delete s;

return 0;
}
