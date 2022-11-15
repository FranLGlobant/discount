#include "gtest/gtest.h"

#include "Discount.h"
#include "Product.h"
#include "ProductInstance.h"
#include "ShoppingBasketItem.h"
#include "DiscountCondition.h"
#include "DiscountEffect.h"

namespace dsc
{
	namespace tests
	{
		/*
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

		*/


		static std::string const kTestProductName("Chocolate with Almonds");
		static std::list<std::string> kTestTags({ "chocolate", "almonds", "cocoa", "milk", "candy", "sweet" });
		static std::string const kTestDescription("This is a bar of delicious chocolate with almonds");
		static dsc::Brand const kTestBrand("Arcor");
		static dsc::Product const kTestProduct(kTestBrand, kTestProductName, std::move(kTestTags), kTestDescription);
		static float const kTestPrice(120.5);
		static dsc::ProductInstance kTestProductInstance(kTestProduct, kTestPrice);
		static dsc::Payment const kTestPayment("Card");
		static dsc::ShoppingBasketItem const kTestShoppingBasketItem(kTestPayment, std::move(kTestProductInstance));

		static std::string const kTestDiscountName("Discount for paying with card");
		static dsc::ShoppingBasket const kTestShoppingBasket;

		static float const kTestDiscountEffectValue = 20.0;

		static dsc::DiscountEffect::Result kTestResultValue({ kTestDiscountEffectValue, kTestDiscountName });



		
		TEST(DiscountEffect, DiscountEffect_apply)
		{
			dsc::DiscountEffect n;
			ASSERT_EQ(no.apply(kTestShoppingBasket,kTestShoppingBasketItem), kTestResultValue);
		}
		

	} // namespace tests
} // namespace dsc