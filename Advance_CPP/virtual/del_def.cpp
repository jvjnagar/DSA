#include<iostream>
using namespace std;
class Shape
{
public:
Shape(){}
};
 
class Circle: public Shape
{
public:
Circle()= default;
  Circle(const Circle & Ci) = delete;

   void get() = delete;
 
// void get(){}
   void get(int i){}
};
 
int main()
{
Circle c1;
//Circle c2(c1);
c1.get();
c1.get(22);
return 0;
}
