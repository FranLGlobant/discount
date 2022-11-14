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
		static int const kTestProductCount(5);
		static dsc::Payment const kTestPayment("Card");
		static dsc::ShoppingBasketItem const kTestShoppingBasketItem(kTestPayment, std::move(kTestProductInstance));

		static std::string const kTestDiscountName("Discount for paying with card");
		static std::unique_ptr<dsc::DiscountCondition> kTestDiscountCondition;
		static std::list<std::unique_ptr<dsc::DiscountEffect>> kTestDiscountEffectList;
		static std::string const kTestDiscountDescription("This is a Discount given for paying with card");
		//static dsc::ShoppingBasket const kTestShoppingBasket;

		static dsc::Discount const kTestDiscount(kTestDiscountName, true, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);




		
		TEST(DiscountInstance, DiscountInstance_discount)
		{
			dsc::DiscountInstance no(kTestDiscount,kTestProductInstance,kTestProductCount);
			ASSERT_EQ(no.discount().description(), kTestDiscount.description());
		}
		TEST(DiscountInstance, DiscountInstance_productInstance)
		{
			dsc::DiscountInstance no(kTestDiscount, kTestProductInstance, kTestProductCount);
			ASSERT_EQ(no.productInstance().price(), kTestProductInstance.price());
		}
		TEST(DiscountInstance, DiscountInstance_productCount)
		{
			dsc::DiscountInstance no(kTestDiscount, kTestProductInstance, kTestProductCount);
			ASSERT_EQ(no.productCount(), kTestProductCount);
		}

		

	} // namespace tests
} // namespace dsc