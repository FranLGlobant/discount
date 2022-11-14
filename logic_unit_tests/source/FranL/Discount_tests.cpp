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
			class DiscountCondition;
			class DiscountEffect;
			class DiscountInstance;
			class ShoppingBasket;
			class ShoppingBasketItem;

		class Discount : public NamedObject
		{
		public:
			Discount(std::string const& name, bool cummulative, std::unique_ptr<DiscountCondition>&& condition, std::list<std::unique_ptr<DiscountEffect>>&& effects, std::string const& description);
			~Discount();

			bool cummulative() const;
			std::unique_ptr<DiscountCondition> const& condition() const;
			std::list<std::unique_ptr<DiscountEffect>> const& effects() const;
			std::string const& description() const;

			bool applicable(ShoppingBasket const& basket, ShoppingBasketItem const& item) const;
			std::list<std::unique_ptr<DiscountInstance>> apply(ShoppingBasket const& basket) const;
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
		static std::unique_ptr<dsc::DiscountCondition> kTestDiscountCondition;
		static std::list<std::unique_ptr<dsc::DiscountEffect>> kTestDiscountEffectList;
		static std::string const kTestDiscountDescription("This is a Discount given for paying with card");
		//static dsc::ShoppingBasket const kTestShoppingBasket;



		
		TEST(Discount, Discount_cummulative)
		{
			dsc::Discount no(kTestDiscountName, true, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);
			EXPECT_EQ(no.cummulative(), true);
			dsc::Discount no2(kTestDiscountName, false, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);
			EXPECT_EQ(no2.cummulative(), false);

		}

		TEST(Discount, Discount_condition)
		{
			dsc::Discount no(kTestDiscountName, true, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);
			ASSERT_EQ(no.condition(), kTestDiscountCondition);
		}

		TEST(Discount, Discount_effect_list)
		{
			dsc::Discount no(kTestDiscountName, true, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);
			ASSERT_EQ(no.effects(), kTestDiscountEffectList);
		}

		TEST(Discount, Discount_description)
		{
			dsc::Discount no(kTestDiscountName, true, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);
			ASSERT_EQ(no.description(), kTestDiscountDescription);
		}

		/*
		* 	bool applicable(ShoppingBasket const& basket, ShoppingBasketItem const& item) const;
			std::list<std::unique_ptr<DiscountInstance>> apply(ShoppingBasket const& basket) const;

		*/

		/*
		TEST(Discount, Discount_applicable)
		{
			dsc::Discount no(kTestDiscountName, true, std::move(kTestDiscountCondition), std::move(kTestDiscountEffectList), kTestDiscountDescription);
			ASSERT_EQ(no.applicable(kTestShoppingBasket, kTestShoppingBasketItem), true);
		}
		*/
		

	} // namespace tests
} // namespace dsc