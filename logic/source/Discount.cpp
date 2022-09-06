#include "Discount.h"

#include "DiscountCondition.h"
#include "DiscountEffect.h"
#include "DiscountInstance.h"

namespace dsc
{
static std::string const kDummyEmptyString;
static std::unique_ptr<DiscountCondition> const kDummyCondition;
static std::list<std::unique_ptr<DiscountEffect>> kDummyEffectList;

Discount::Discount(std::string const& name, bool cummulative, std::unique_ptr<DiscountCondition>&& condition, std::list<std::unique_ptr<DiscountEffect>>&& effects, std::string const& description):
	NamedObject(name)
{
}

Discount::~Discount() = default;

bool Discount::cummulative() const
{
	return false;
}

std::unique_ptr<DiscountCondition> const& Discount::condition() const
{
	return kDummyCondition;
}

std::list<std::unique_ptr<DiscountEffect>> const& Discount::effects() const
{
	return kDummyEffectList;
}

std::string const& Discount::description() const
{
	return kDummyEmptyString;
}

bool Discount::applicable(ShoppingBasket const& basket, ShoppingBasketItem const& item) const
{
	return false;
}

std::list<std::unique_ptr<DiscountInstance>> Discount::apply(ShoppingBasket const& basket) const
{
	return {};
}

} // namespace dsc
