#include "Product.h"

namespace dsc
{
static std::string kDummyEmptyString;
static Brand sDummyBrand(kDummyEmptyString);

Product::Product(Brand const& brand, std::string const& productName, std::list<std::string>&& tags, std::string const& description):
	NamedObject(productName)
{
}

Brand const& Product::brand() const
{
	return sDummyBrand;
}

Brand& Product::brand()
{
	return sDummyBrand;
}

std::string const& Product::description() const
{
	return kDummyEmptyString;
}

std::string const& Product::fullName() const
{
	return kDummyEmptyString;
}

} // namespace dsc
