#pragma once

#include <memory>

namespace dsc
{

class Discount;
class ProductInstance;

class DiscountInstance
{
public:
	DiscountInstance(Discount const& discount, ProductInstance const& productInstance, int productCount);

	Discount const& discount() const;
	ProductInstance const& productInstance() const;
	int productCount() const;
};

} // namespace dsc
