# include <iostream>
using namespace std;
class shape 
{
   const double PI =3.14;
	public:
//	virtual void area() =0;
  //      virtual void peri()=0;	

	virtual void disp(){}

virtual ~shape() =0;
     
};

shape::~shape(){}
class circle: public shape
{
	public:
	void area(){}
	 void peri(){
	cout<<"circle"<<endl;}
};
int main()
{
circle c1;
shape *s, s1;
  s = &c1; //upcasting

  s->disp();//sh

return 0;
}
