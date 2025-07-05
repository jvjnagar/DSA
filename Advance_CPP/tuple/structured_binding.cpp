/*
 * SB - c++17
 */
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{

std::pair<int, double> p{ 42, 15.6 };
auto [var1, var2] = p;


cout<<var1<<"  "<<var2<<endl;
var1=100;
var2=22.22;
cout<<var1<<"  "<<var2<<endl;
cout<<typeid(var1).name()<<"  "<<typeid(var2).name()<<endl;


double myArray[3] = { 1.0, 2.0, 3.0 };
auto [a, b, c] = myArray;

cout<<a<<"  "<<b<<" "<<c<<endl;
	return 0;
}

