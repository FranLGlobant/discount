#include "ProductInstance.h"

#include "Product.h"

namespace dsc
{
static std::string const kDummyEmptyString;
static Brand const kDummyBrand(kDummyEmptyString);
static Product sDummyProduct(kDummyBrand, kDummyEmptyString, {}, kDummyEmptyString);

ProductInstance::ProductInstance(Product const& product, float price)
{
}

float ProductInstance::price() const
{
	return 0.0f;
}

Product const& ProductInstance::product() const
{
	return sDummyProduct;
}

Product& ProductInstance::product()
{
	return sDummyProduct;
}

} // namespace dsc
