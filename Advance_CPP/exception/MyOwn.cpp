#include <iostream>
#include<string>
using namespace std;


class MyOwn : public exception
{
	const char * msg;
public:
	MyOwn(const char* s) :msg(s)
	{}
const char * what() const noexcept //throw ()//does not throw any exceptions
	{
		return msg;
	}
};
int main()
{
	int num = 17;
	try
	{
		if (num == 17)
		{
			throw	MyOwn("bad number");
		}
	}
	catch (exception &e)
	{
		cout << e.what();
	}

	return 0;
}
