/*
~thread() _NOEXCEPT
{  // clean up
  if (joinable())
    _XSTD terminate();
}
*/
# include<iostream>
# include <thread>
using namespace std;
void func()
{
	for (auto i : { 0, 1, 2, 3, 4, 5 })
		cout << " child thread" << endl;
}

int main()
{
//	thread t;
	thread t(&func);
	
	for(auto  i:{ 0, 1, 2, 3, 4, 5 })
	cout << "main"<<endl;

	//t.join();
	//t.detach();
	//t.join();//error

	if (t.joinable())
	{cout<<"yes";
		t.join();
	}
		return 0;
}
