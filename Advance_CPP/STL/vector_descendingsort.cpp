#include <algorithm>
#include <vector>
#include <iostream>
#include<functional>
using namespace std;

int val[] = {1,4,67,11,55,23,94,18,2349,11,77,33,12,41,37};

int main()
{
    vector<int> num(val,val+15);
        //Defines an vector; initializes with values from the val array
    int cnt;
    int sval;
    vector<int>::iterator start = num.begin();
    vector<int>::iterator end = num.end();

    vector<int>::iterator iter;

    iter = find(start,end,37);//algorithm
    if (iter == end)
    {
        cout << "37 Not Found"<<endl;
    }
    else
    {
        cout << "Found " << *iter << endl;
    }

    sval = 11;
    cnt = count(start,end,sval);//algorithm
    cout << "Found " << cnt << " elevens" << endl;
    
    cout << "Before Sort" << endl;
    for (iter = start; iter < end; iter++)
    {
        cout << *iter << endl;
    }

//    sort(start,end);//algorithm
  sort(start,end,greater<int>()) ;//algorithm

    cout << "After Sort" << endl;
    for (iter = start; iter < end; iter++)
    {
        cout << *iter << endl;
    }

    iter = find(start,end,11);
	
    cout << "After Erase" << endl;
   num.erase(iter);
    for (iter = start; iter < end; iter++)
    {
        cout << *iter << endl;
    }
	return 0;
}

