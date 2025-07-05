# include <iostream>
# include <vector>


using namespace std;
int main()
{
	
int A1[5] = { 1, 2, 3, 4, 5 };
int A2[]={6,7,8,9,0};
vector<int> v1(A1,A1+5);
vector<int> v2(A2,A2+5);
int i;
if(v1.empty())
cout<<" empty "<<endl;
else cout<<"full"<<endl;

cout<<v1.size()<<endl;

swap(v1,v2);
cout<<v1.front()<<endl<<v1.back()<<endl;
for(i=0;i<5;i++)
{
cout<<v2.at(i)<<"  ";
}
cout<<endl;

v1.resize(10);
for(i=0;i<10;i++)
{
cout<<v1.at(i)<<"  ";
}
return 0;
}
