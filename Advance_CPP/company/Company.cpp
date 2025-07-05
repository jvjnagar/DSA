
#include <vector>
#include <list>
#include <string>
using namespace std;

#include "Order.h"
#include "OrderItem.h"
#include "Company.h"
#include "Customer.h"

Company::Company()
{
}

Company::~Company()
{
}

void Company::addCustomer(Customer* customer)
{
	this->customers.push_back(customer);
}

void Company::addItem(Item* item)
{
	this->items.push_back(item);
}

vector<Customer*> Company::getCustomers() const
{
	return customers;
}

list<Item*> Company::getItems() const
{
	return items;
}

double Company::getWorthOfOrdersPlaced() const
{
	double worth = 0.0;
	vector<Customer*>::const_iterator it;
	for (it = customers.begin(); it != customers.end(); ++it)
	{
		worth += (*it)->getTotalOrderValue();
	}
	return worth;
}
