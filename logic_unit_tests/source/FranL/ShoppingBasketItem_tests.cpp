#include "gtest/gtest.h"

#include "Product.h"
#include "ProductInstance.h"
#include "ShoppingBasketItem.h"

namespace dsc
{
	namespace tests
	{
		/*
			ShoppingBasketItem(Payment const& payment, ProductInstance&& productInstance, int count = 1);

			Payment const& payment() const;
			Payment& payment();

			ProductInstance const& productInstance() const;
			ProductInstance& productInstance();

			int count() const;
			float total() const;
		*/


		static std::string const kTestProductName("Chocolate with Almonds");
		static std::list<std::string> kTestTags({ "chocolate", "almonds", "cocoa", "milk", "candy", "sweet" });
		static std::string const kTestDescription("This is a bar of delicious chocolate with almonds");
		static dsc::Brand const kTestBrand("Arcor");



		static dsc::Product const kTestProduct(kTestBrand, kTestProductName, std::move(kTestTags), kTestDescription);
		static float const kTestPrice(120.5);

		static dsc::ProductInstance kTestProductInstance(kTestProduct, kTestPrice);

		static dsc::Payment const kTestPayment("Card");
		
		TEST(ShoppingBasketItem, ShoppingBasket_payment_const)
		{
			dsc::ShoppingBasketItem no(kTestPayment,std::move(kTestProductInstance));
			ASSERT_EQ(no.payment().name(), kTestPayment.name());
		}

		
		TEST(ShoppingBasketItem, ShoppingBasket_payment_non_const)
		{
			dsc::ShoppingBasketItem no(kTestPayment, std::move(kTestProductInstance));

			static dsc::Payment const kTestPaymentToSet("In Cash");

			no.payment() = kTestPaymentToSet;
			ASSERT_EQ(no.payment().name(), kTestPaymentToSet.name());
		}

		TEST(ShoppingBasketItem, ShoppingBasket_ProductInstance_const)
		{
			dsc::ShoppingBasketItem no(kTestPayment, std::move(kTestProductInstance));
			ASSERT_EQ(no.productInstance().price(), kTestProductInstance.price());
		}


		TEST(ShoppingBasketItem, ShoppingBasket_ProductInstance_non_const)
		{
			dsc::ShoppingBasketItem no(kTestPayment, std::move(kTestProductInstance));

			static float const kTestPriceToSet(999.25);
			static dsc::ProductInstance kTestProductInstanceToSet(kTestProduct, kTestPriceToSet);

			no.productInstance() = kTestProductInstanceToSet;
			ASSERT_EQ(no.productInstance().price(), kTestPriceToSet);
		}

		TEST(ShoppingBasketItem, ShoppingBasket_count)
		{
			dsc::ShoppingBasketItem no(kTestPayment, std::move(kTestProductInstance));
			ASSERT_EQ(no.count(), 1);
		}

		TEST(ShoppingBasketItem, ShoppingBasket_total)
		{
			dsc::ShoppingBasketItem no(kTestPayment, std::move(kTestProductInstance));
			ASSERT_EQ(no.total(), no.count()*no.productInstance().price());
		}

		

	} // namespace tests
} // namespace dsc