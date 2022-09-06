#pragma once

namespace dsc
{

class Product;

class ProductInstance
{
public:
	ProductInstance(Product const& product, float price);

	float price() const;
	Product const& product() const;
	Product& product();
};

} // namespace dsc
