
#include <string>
using namespace std;

#include "Item.h"


Item::Item(string ic, string desc, double rate)
	: itemCode(ic), desc(desc), rate(rate)
{
}

Item::~Item()
{
}

string Item::getItemCode() const
{
	return itemCode;
}

string Item::getDesc() const
{
	return desc;
}

double Item::getRate() const
{
	return rate;
}


