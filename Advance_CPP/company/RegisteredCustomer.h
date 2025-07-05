#pragma once
#include "Customer.h"
#include <string>
class RegisteredCustomer :
	public Customer
{
	double splDiscount;
public:
	RegisteredCustomer(std::string name, double splDiscount);
	~RegisteredCustomer();

	double getTotalOrderValue() const;
	double getSpecialDiscount() const;
};

