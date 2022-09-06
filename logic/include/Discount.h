#pragma once

#include <list>
#include <memory>

#include "NamedObject.h"

namespace dsc
{

class DiscountCondition;
class DiscountEffect;
class DiscountInstance;
class ShoppingBasket;
class ShoppingBasketItem;

class Discount : public NamedObject
{
public:
	Discount(std::string const& name, bool cummulative, std::unique_ptr<DiscountCondition>&& condition, std::list<std::unique_ptr<DiscountEffect>>&& effects, std::string const& description);
	~Discount();

	bool cummulative() const;
	std::unique_ptr<DiscountCondition> const& condition() const;
	std::list<std::unique_ptr<DiscountEffect>> const& effects() const;
	std::string const& description() const;

	bool applicable(ShoppingBasket const& basket, ShoppingBasketItem const& item) const;
	std::list<std::unique_ptr<DiscountInstance>> apply(ShoppingBasket const& basket) const;
};

} // namespace dsc
