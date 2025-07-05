# include<iostream>
using namespace std;
class Employee
{
	int id;
	int *ptr;
	public:
	Employee():id(1),ptr(new int(50)){}
//	Employee(const Employee& emp) = delete;
//Employee& operator=(const Employee& emp) = delete;

	Employee(const Employee& emp)
{id = emp.id; ptr = new int(*emp.ptr); cout<<"copy"<<endl;}

	Employee(Employee&& emp): id(emp.id),ptr(emp.ptr)
	{emp.id=0;emp.ptr=nullptr;cout<<"move"<<endl;}

	Employee& operator=(Employee&& emp) 
	{
		cout<<"= op"<<endl;
		if (&emp == this)
 			return *this;
		
		id= emp.id;
		emp.id =0;
		delete ptr;
		ptr = emp.ptr;
		emp.ptr = nullptr;

		return *this;
	}
	

	void disp()
	{       if(ptr!=nullptr)
		cout<<id <<"   "<<ptr<<"   "<<*ptr<<endl;
		else
			cout<<id<<endl;
	}

	~Employee()
	{
		cout<<"des"<<endl;
		delete ptr;
	}

};
int main()
{
Employee e1;
cout<<"e1 bef move"<<endl;
e1.disp();
Employee e2= e1;
Employee e3=static_cast<Employee &&>(e1) ;
//Employee e3=std::move(e1);
//cout<<"e1 af move"<<endl;
e1.disp();
e2.disp();
cout<<"e3 "<<endl;
e3.disp();


Employee e4;
cout<<"e4"<<endl;
e4.disp();
e4 = std::move(e3);
////e2.disp();
cout<<"e3 after ="<<endl;
e3.disp();
cout<<"e4 after ="<<endl;
e4.disp();		

return 0;
}
