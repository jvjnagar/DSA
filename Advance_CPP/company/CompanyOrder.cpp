#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

#include "Item.h"
#include "OrderItem.h"
#include "Order.h"
#include "Customer.h"
#include "RegisteredCustomer.h"
#include "Company.h"

int main()
{
	Item* item1 = new Item("I1001", "Mouse", 200);
	Item* item2 = new Item("I1002", "Keyboard", 400);
	Item* item3 = new Item("I1003", "Monitor", 4000);
	Item* item4 = new Item("I1004", "Marker", 30);

	Customer* c1 = new Customer("Kumar");
	Order* order1 = new Order();
	order1->addOrderItem(new OrderItem(item1, 10));
	order1->addOrderItem(new OrderItem(item2, 30));
	c1->addOrder(order1);

	RegisteredCustomer* rc1 = new RegisteredCustomer("Suresh", 10);
	Order* order2 = new Order();
	order2->addOrderItem(new OrderItem(item1, 10));
	order2->addOrderItem(new OrderItem(item2, 30));
	rc1->addOrder(order2);

	Company* company = new Company();
	company->addItem(item1);
	company->addItem(item2);
	company->addItem(item3);
	company->addItem(item4);

	company->addCustomer(c1);
	company->addCustomer(rc1);

	cout << "Total order for Kumar : " << c1->getTotalOrderValue() << endl;
	cout << "Total order for Suresh : " << rc1->getTotalOrderValue() << endl;
	cout << "The Total Order value is :" << company->getWorthOfOrdersPlaced() << endl;
	return 0;
}

