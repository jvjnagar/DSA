# include<iostream>
#include <iomanip>
using namespace std;

template<class T,class Q> 
//template<class T>
T add(T a, Q b)
{
	return a + b;
}
/*template<class T,class Q> 
auto add(T a,Q b)
{
	return a + b;
}*/
int main()
{
cout<<add(1,2)<<endl;
cout<<add(1.1, 2.2)<<endl;
cout<<add(1,2.2)<<endl;
//auto i =11;
  
//cout<<setprecision(2)<<fixed<<add(10, 1.234)<<endl;
//cout<<add(10, 1.0)<<endl;
return 0;
}
