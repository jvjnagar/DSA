#pragma once
class Item;
class OrderItem
{
	Item* item;
	int qty;
public:
	OrderItem(Item* item, int qty);
	~OrderItem();

	Item* getItem() const;
	int getQuantity() const;
	double getTotal() const;
};

