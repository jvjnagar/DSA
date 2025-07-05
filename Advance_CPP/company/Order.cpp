
#include <list>
using namespace std;

#include "Order.h"
#include "OrderItem.h"

Order::Order()
{
}


Order::~Order()
{
}

void Order::addOrderItem(OrderItem* orderItem)
{
	orderItems.push_back(orderItem);
}

list<OrderItem*> Order::getOrderItems() const
{
	return orderItems;
}

double Order::getTotal() const
{
	double total = 0.0;
	list<OrderItem*>::const_iterator it;
	for (it = orderItems.begin(); it != orderItems.end(); ++it)
	{
		total += (*it)->getTotal();
	}
	return total;
}
