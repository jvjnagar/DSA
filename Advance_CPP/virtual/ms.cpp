#include<iostream>
using namespace std;

class IMusicSystem
{
public:
virtual void play()=0;
virtual void stop()=0;
};
class SonyMS: public IMusicSystem
{
public:
virtual void play(){cout<<"sony play"<<endl;}
virtual void stop(){cout<<"sony stop"<<endl;}
};

class PhilipsMS: public IMusicSystem
{
public:
virtual void play(){cout<<"ph play"<<endl;}
virtual void stop(){cout<<"ph  stop"<<endl;}
};
void show(IMusicSystem *so)
{
	so->play();
}
int main()
{
	SonyMS sony;
	show(&sony);

	PhilipsMS ph;
	show(&ph);
 return 0;
}









