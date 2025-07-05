#include<iostream>
#include<ranges>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1{1,3,4,2, 32, 22, 11, 55, 43};
	for(auto i: v1)
	{
		cout<<i<<"  ";
	}

std::ranges::sort(v1);
cout<<endl;
	for(auto i: v1)
	{
		cout<<i<<"   ";
	}
cout<<endl;
	  ranges::sort(v1, ranges::greater());
	for(auto i: v1)
	{
		cout<<i<<"   ";
	}
	return 0;
}


