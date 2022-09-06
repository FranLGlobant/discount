#include "ShoppingBasketItem.h"

#include "ProductInstance.h"
#include "Product.h"

namespace dsc
{

static std::string const kDummyEmptyString;
static Payment sDummyPayment(kDummyEmptyString);
static Brand const kDummyBrand(kDummyEmptyString);
static Product const kDummyProduct(kDummyBrand, kDummyEmptyString, {}, kDummyEmptyString);
static ProductInstance sDummyProductInstance(kDummyProduct, 0.0f);
	
ShoppingBasketItem::ShoppingBasketItem(Payment const& payment, ProductInstance&& productInstance, int count)
{
}

Payment const& ShoppingBasketItem::payment() const
{
	return sDummyPayment;
}

Payment& ShoppingBasketItem::payment()
{
	return sDummyPayment;
}

ProductInstance const& ShoppingBasketItem::productInstance() const
{
	return sDummyProductInstance;
}

ProductInstance& ShoppingBasketItem::productInstance()
{
	return sDummyProductInstance;
}

int ShoppingBasketItem::count() const
{
	return 0;
}

float ShoppingBasketItem::total() const
{
	return 0.0f;
}

} // namespace dsc
