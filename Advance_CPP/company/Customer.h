#pragma once
#include<list>
#include<string>
class Order;
class Customer
{
	std::list<Order*> orders;
	std::string name;
public:
	Customer(std::string name);
	virtual ~Customer();

	void addOrder(Order* order);
	std::list <Order*> getOrders() const;
	virtual double getTotalOrderValue() const;

};