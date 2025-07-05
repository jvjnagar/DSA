# include<iostream>
# include <thread>
#include <mutex>
using namespace std;

int global =0;
mutex datamutex;
void disp()
{
	int i =0;
	for(;i<10;i++)
	{
		datamutex.lock();
		global=global + i;
		cout<<this_thread::get_id()<<"     "<<global;
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
		cout<<endl;
		datamutex.unlock();
	}
}

int main()
{

	thread t1(disp);
	thread t2(disp);
	t1.join();
	t2.join();
	return 0;
}
