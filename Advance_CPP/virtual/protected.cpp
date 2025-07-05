#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void area(){}
    protected:
    Shape(){}
};
 
class Circle: public Shape
{
public:
    void area() override final
    {}
    
    //void disp() final; //err
};
 
int main()
{
Shape s;
Circle c;
return 0;
}
