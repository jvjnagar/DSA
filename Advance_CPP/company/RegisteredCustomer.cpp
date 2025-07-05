
#include <string>
#include <list>
#include <vector>
using namespace std;
#include "OrderItem.h"
#include "Order.h"
#include "RegisteredCustomer.h"


RegisteredCustomer::RegisteredCustomer(string name, double splDiscount)
	: Customer(name), splDiscount(splDiscount)
{
}


RegisteredCustomer::~RegisteredCustomer()
{
}

double RegisteredCustomer::getTotalOrderValue() const
{
	double total = Customer::getTotalOrderValue();
	total = total - (total * splDiscount) / 100.0;
	return total;
}

double RegisteredCustomer::getSpecialDiscount() const
{
	return splDiscount;
}