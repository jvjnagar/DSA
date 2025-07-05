#include<iostream>
using namespace std;
 class Shape{
           int a;
           public:
           virtual void  area(){}
 };
  class Circle:public Shape
  {
	  int b;
	  int c;
	  };
  int main()
  {Shape s1;
  cout<<sizeof(s1);
  Circle c1;
  cout<<sizeof(c1);
  return 0;
  }
