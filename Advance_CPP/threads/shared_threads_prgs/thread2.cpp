# include<iostream>
# include <thread>
using namespace std;

class MyFun
{
public:
	void operator()()
	{
		cout << "hello"<<endl;
	}
		
};

int main()
{
	MyFun my;
//my();

	thread t1(my);
	thread t2((MyFun()));
	t1.join();
	t2.join();
	return 0;
}
