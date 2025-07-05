//c++17
#include <iostream>
using namespace std;
#include <string_view>

int main()
{
	string str_1{ "this is the best book" };

	string_view str_2{ str_1 };

	string_view str_3{ str_2 };

	std::cout << str_1 << '\n' << str_2 << '\n' << str_3 << '\n';
	return 0;
}

