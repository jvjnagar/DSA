# include <iostream>
using namespace std;
class shape 
{
	public:
   virtual void disp(){
	cout<<"shape"<<endl;
 	}
	 void print(){cout<<"sh pr"<<endl;}
};
class circle: public shape
{
	public:
	 void disp(){
	cout<<"circle"<<endl;}
	 virtual void show()
	 {
	 cout<<"show";
	 }
	 void print(){cout<<"ci print"<<endl;}
};
int main()
{
circle c1,*c;
shape *s,s1;
  s = &c1; //upcasting

//c = &s1;//downcasting
  s->disp();//sh
  //s->show();//show????//errrr

  s->print();//sh print
return 0;
}
