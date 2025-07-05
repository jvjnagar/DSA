/*
 * tuple - c++11
 */
#include<iostream>
#include<tuple> // for tuple
using namespace std;
int main()
{

	// Declaring tuple
	tuple <char, int, float> student;
	//tuple <int,char,float> tup1(20,'g',17.5);
	// Assigning values to tuple using make_tuple()
	student = make_tuple('a', 10, 15.5);

	// Printing initial tuple values using get()
	cout << "The initial values of tuple are : ";
	cout << get<0>(student) << " " << get<1>(student);
	cout << " " << get<2>(student) << endl;

	// Use of get() to change values of tuple
	get<0>(student) = 'b';
	get<2>(student) = 20.5;

	// Printing modified tuple values
	cout << "The modified values of tuple are : ";
	cout << get<0>(student) << " " << get<1>(student);
	cout << " " << get<2>(student) << endl;

	int id;
	char name;
	float marks;


	tie(name, id, marks) = student;

	cout << "The unpacked tuple values  are : ";
	cout << id << " " << name << " " << marks;
	cout << endl;
	


	return 0;
}

