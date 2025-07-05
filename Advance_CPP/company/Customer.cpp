
#include <string>
#include <list>
#include <iterator>
using namespace std;
#include "Customer.h"
#include "Order.h"
#include "OrderItem.h"


Customer::Customer(string name = "") : name(name)
{
}


Customer::~Customer()
{
}

void Customer::addOrder(Order* order)
{
	orders.push_back(order);
}

list<Order*> Customer::getOrders() const
{
	return orders;
}

double Customer::getTotalOrderValue() const
{
	double totalCost = 0.0;
	list<Order*>::const_iterator it;
	for (it = orders.begin(); it != orders.end(); ++it)
	{
		totalCost += (*it)->getTotal();
	}
	return totalCost;
}
