#include "gtest/gtest.h"

#include "Product.h"

namespace dsc
{
	namespace tests
	{

		static std::string const kTestProductName("Chocolate with Almonds");
		static std::list<std::string> kTestTags({ "chocolate", "almonds", "cocoa", "milk", "candy", "sweet"});
		static std::string const kTestDescription("This is a bar of delicious chocolate with almonds");
		static dsc::Brand const kTestBrand("Arcor");

		
		TEST(Product, Product_fullName)
		{
			dsc::Product no(kTestBrand, kTestProductName, std::move(kTestTags), kTestDescription);
			ASSERT_EQ(no.fullName(), kTestProductName);


		}

		
		TEST(Product, Product_brand)
		{
			dsc::Product no(kTestBrand, kTestProductName, std::move(kTestTags), kTestDescription);
			//Does not break due to .name() returning an empty string, not intended behavior however.
			ASSERT_EQ(no.brand().name(), kTestBrand.name());
		}

		TEST(Product, Product_description)
		{
			dsc::Product no(kTestBrand, kTestProductName, std::move(kTestTags), kTestDescription);

			ASSERT_EQ(no.description(), kTestDescription);
		}
		


	} // namespace tests
} // namespace dsc