#pragma once

#include "SimpleTypes.h"

namespace dsc
{

class ProductInstance;

class ShoppingBasketItem
{
public:
	ShoppingBasketItem(Payment const& payment, ProductInstance&& productInstance, int count = 1);

	Payment const& payment() const;
	Payment& payment();

	ProductInstance const& productInstance() const;
	ProductInstance& productInstance();

	int count() const;
	float total() const;
};

} // namespace dsc
