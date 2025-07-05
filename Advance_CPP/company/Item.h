#pragma once
class Item
{
	string itemCode;
	string desc;
	double rate;
public:
	Item(string ic, string desc, double rate);
	~Item();

	string getItemCode() const;
	string getDesc() const;
	double getRate() const;
};

