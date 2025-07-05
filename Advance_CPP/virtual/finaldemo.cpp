#include<iostream>
using namespace std;

class Shape //final
{
public:
    virtual void area()=0;
    virtual void disp()
    {}
};
class Circle: public Shape
{
public:
    void area() override //final //override //final
    {}
    void disp() override {}
  //  void disp() final; //err
};
class Square : public Circle 
{public:     void area() {} };
class Oval : public Square 
{};
int main()
{
Circle c1;
Shape *s1= &c1;
s1->area();
return 0;
}
