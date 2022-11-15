#include "gtest/gtest.h"

#include "Discount.h"
#include "Product.h"
#include "ProductInstance.h"
#include "ShoppingBasketItem.h"
#include "DiscountCondition.h"
#include "DiscountEffect.h"
#include "DiscountInstance.h"

namespace dsc
{
	namespace tests
	{
		/*
		class ShoppingBasket;
		class ShoppingBasketItem;

		class DiscountCondition
		{
		public:
			virtual bool met(ShoppingBasket const& basket, ShoppingBasketItem const& item) const = 0;
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
		static dsc::ShoppingBasket const kTestShoppingBasket;



		TEST(DiscountCondition, DiscountCondition_met)
		{
			dsc::DiscountCondition no;
			ASSERT_EQ(no.met(kTestShoppingBasket,kTestShoppingBasketItem), true);
		}


	} // namespace tests
} // namespace dsc