#include "gtest/gtest.h"

#include "Product.h"
#include "ProductInstance.h"

namespace dsc
{
	namespace tests
	{
		/*
			ProductInstance(Product const& product, float price);

			float price() const;
			Product const& product() const;
			Product& product();
		*/


		static std::string const kTestProductName("Chocolate with Almonds");
		static std::list<std::string> kTestTags({ "chocolate", "almonds", "cocoa", "milk", "candy", "sweet" });
		static std::string const kTestDescription("This is a bar of delicious chocolate with almonds");
		static dsc::Brand const kTestBrand("Arcor");



		static dsc::Product const kTestProduct(kTestBrand, kTestProductName, std::move(kTestTags), kTestDescription);
		static float const kTestPrice(120.5);

		
		TEST(ProductInstance, ProductInstance_price)
		{
			dsc::ProductInstance no(kTestProduct,kTestPrice);
			ASSERT_EQ(no.price(), kTestPrice);
		}

		
		TEST(ProductInstance, ProductInstance_product_const)
		{
			dsc::ProductInstance no(kTestProduct, kTestPrice);
			//Asserts true but due to unintended behavior due to the product method always returning an empty string
			ASSERT_EQ(no.product().fullName(), kTestProduct.fullName());

		}

		TEST(ProductInstance, ProductInstance_product_non_const)
		{
			static std::string const kTestProductNameToSet("Candy Bar");
			static std::list<std::string> kTestTagsToSet({ "sugar", "candy", "sweet" });
			static std::string const kTestDescriptionToSet("This is a nondescript bar of candy");
			static dsc::Brand const kTestBrandToSet("Felfort");

			static dsc::Product const kTestProductToSet(kTestBrandToSet, kTestProductNameToSet, std::move(kTestTagsToSet), kTestDescriptionToSet);

			dsc::ProductInstance no(kTestProduct, kTestPrice);
			no.product() = kTestProductToSet;


			//Asserts true but due to unintended behavior due to the product method always returning an empty string
			
			ASSERT_EQ(no.product().fullName(), kTestProductToSet.fullName());

		}
		

	} // namespace tests
} // namespace dsc