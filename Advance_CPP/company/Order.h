#pragma once
class OrderItem;
class Order
{
	list<OrderItem*> orderItems;
public:
	Order();
	~Order();

	void addOrderItem(OrderItem* orderItem);
	list<OrderItem*> getOrderItems() const;
	double getTotal() const;
};

