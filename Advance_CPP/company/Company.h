#pragma once
#include <string>
class Customer;
class Item;
class Company
{
	vector<Customer*> customers;
	list<Item*> items;
public:
	Company();
	~Company();

	void addCustomer(Customer* customer);
	void addItem(Item* item);
	vector<Customer*> getCustomers() const;
	list<Item*> getItems() const;
	double getWorthOfOrdersPlaced() const;
};

