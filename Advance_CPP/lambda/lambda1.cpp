#include <iostream>
#include <algorithm>
# include <vector>
using namespace std;

class divide
{
	public:
	void operator()( int y)
	{
		cout<<y<<"  ";
	}
};
int main()
{
/*	auto disp = [](void)->void {cout << "in disp"<<endl; };
	disp();
	
	auto sum1 = [](int x, int y)->int { return x + y; };
	auto sum2 = [](int x, int y) { return x + y; };
	cout << sum1(5, 2) << endl;
	cout << sum2(10, 5) << endl;

  */ 
	divide d;
	vector<int> num{ 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
for_each(num.begin(), num.end(), d);


	
	//for_each algorithm

/*	int divisor = 3;
	vector<int> numbers{ 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
	for_each(numbers.begin(), numbers.end(), [divisor](int y) //[=]
	{
		if (y % divisor == 0)
		{
			cout << y << endl;
		}
	});
*/

	
	int sum = 0;
	int divisor = 3;
	cout<<endl;
	vector<int> numbers{ 1, 2, 3, 4, 5, 10, 15, 20, 25, 35, 45, 50 };
	for_each(numbers.begin(), numbers.end(), [divisor, &sum](int y)
	{
	if (y % divisor == 0)
	{
	cout << y << endl;
	sum += y;
	}
	});

	cout << sum << endl;

}

