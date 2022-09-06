#pragma once

#include <string>

namespace dsc
{

class ShoppingBasket;
class ShoppingBasketItem;

class DiscountEffect
{
public:
	struct Result
	{
		float amount;
		std::string name;
	};

	virtual Result apply(ShoppingBasket const& basket, ShoppingBasketItem const& item) const = 0;
};

} // namespace dsc
