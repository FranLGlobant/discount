#include "DiscountInstance.h"

#include "Discount.h"
#include "DiscountCondition.h"
#include "DiscountEffect.h"
#include "Product.h"
#include "ProductInstance.h"
#include "SimpleTypes.h"

namespace dsc
{
static std::string const kDummyEmptyString;
static Brand const kDummyBrand(kDummyEmptyString);
static Product const kDummyProduct(kDummyBrand, kDummyEmptyString, {}, kDummyEmptyString);
static ProductInstance const kDummyProductInstance(kDummyProduct, 0.0f);
static Discount const kDiscount(kDummyEmptyString, false, nullptr, {}, kDummyEmptyString);

DiscountInstance::DiscountInstance(Discount const& discount, ProductInstance const& productInstance, int productCount)
{
}

Discount const& DiscountInstance::discount() const
{
	return kDiscount;
}

ProductInstance const& DiscountInstance::productInstance() const
{
	return kDummyProductInstance;
}

int DiscountInstance::productCount() const
{
	return 0;
}

} // namespace dsc
