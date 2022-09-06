#pragma once

namespace dsc
{

class ShoppingBasket;
class ShoppingBasketItem;

class DiscountCondition
{
public:
	virtual bool met(ShoppingBasket const& basket, ShoppingBasketItem const& item) const = 0;
};

} // namespace dsc
