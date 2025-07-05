# include <iostream>
# include <vector>

using namespace std;
int main()
{
vector<int> v1(2);

v1[0]=1;
v1[1]=2;

try
{
	cout<<v1.at(1);
}
catch(exception &ee)
{
	cout<<ee.what();
}
return 0;
}
