# include<iostream>
using namespace std;

const int size1 = 2;
template <class S>class stack {
	S st[size1];
	int tos;
public:
	stack();
	~stack();
	void push(S i);
	S pop();
};


template <class S>stack<S>::stack()
{
	tos = 0;
	cout << "ini" << endl;
}



template <class S>stack<S>::~stack()
{
	cout << "des" << endl;
}

//void stack::push(int i){}

template <class S>void stack<S>::push(S i)
{
	if (tos == size1)
	{
		cout << "full";
		return;
	}
	st[tos] = i;
	tos++;

}


//int stack::pop(){}


template <class S>S stack<S>::pop()
{
	if (tos == 0)
	{
		cout << "underflow";
		return 0;
	}
	tos--;
	return st[tos];
}

int main()
{
//   stack ss;
//

	stack<int> a;
	a.push(10);
	a.push(20);
	cout << a.pop() << endl;
	cout << a.pop() << endl;


	stack<double> d1;

	return 0;
}

