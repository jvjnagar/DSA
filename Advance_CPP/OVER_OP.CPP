# include<iostream>
using namespace std;
class counter
{	int count;
public:
	counter()
	{
	count=0;
	}
	int getcount()
	{	return count;			}
	void operator++()
	{      cout<<"pre"<<endl;
		count++;
	}
	void operator++(int)
	{
		cout<<"post"<<endl;
		count++;
	}
};
int main()
{
counter c1,c2;
cout<<c1.getcount()<<endl;
cout<<c2.getcount()<<endl;
c1++;
cout<<c1.getcount()<<endl;
c2++;
cout<<c2.getcount()<<endl;
++c2;
cout<<c2.getcount()<<endl;
return 0;
}
