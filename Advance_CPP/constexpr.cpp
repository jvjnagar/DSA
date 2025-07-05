//  constexpr function c++11
#include <iostream>

constexpr int product(int x, int y) { return (x * y); }

int main()
{
	constexpr int x = product(10, 20);
	std::cout << x;
	return 0;
}
