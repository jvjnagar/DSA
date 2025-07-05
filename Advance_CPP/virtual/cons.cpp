# include <iostream>
using namespace std;
class shape 
{
public:
shape()   
{cout<<"sh cons"<<endl;}
virtual ~shape()   
{cout<<"sh des"<<endl;}
};
class circle: public shape
{
public:
circle()   
{cout<<"ci cons"<<endl;}
~circle()   
{cout<<"ci des"<<endl;}
};
int main()
{
/*circle c1;
shape *s;
  s = &c1; //upcasting
  */
shape *s1 = new circle();
delete s1;


return 0;
}
