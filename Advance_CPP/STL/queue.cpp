# include<iostream>
# include<queue>
# include<list>
using namespace std;

int main()
{int i;
	int arr[]={10,20,30,40,50};
	list<int> l(2);
	l.push_front(9);
	l.push_front(8);
	queue<int> q;
	cout<<"queue size is:  "<<q.size()<<endl;
	
	for(i=0;i<3;i++)
	   q.push(arr[i]);
   	  
	
   cout<<"queue size is:  "<<q.size()<<endl;

  for(i=0;i<3;i++)
  {
	  cout<<q.front()<<endl;
	  q.pop();
  }
	
	return 0;
}
