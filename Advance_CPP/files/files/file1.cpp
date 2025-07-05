
#include<iostream>
# include<fstream>

using namespace std;
int main()
{
	char ch;
	char item[7], item1[25];
	int code;
	ofstream ofobj("D:/Training/files/product.txt", ios::out);


	ofobj << 101 << " car" << endl;
	ofobj << 102 << " bike";
	ofobj.close();

	ifstream inobj("D:/Training/files/product.txt", ios::in);
	/*	while ((inobj.get(ch)))
		{
		cout << ch << " ";
		}
	*/
	/*	while(!inobj.eof())
		{
		inobj>>code>>item;
		cout<<code<<"  "<<item<<endl;
		}
	*/
	cout.flush();

	while (!inobj.eof())
	{
		inobj.clear();
		inobj.getline(item1, 4);
		cout << "hello:   " << item1 << endl;
	}

	inobj.close();
	return 0;
}
