#include "gtest/gtest.h"

#include "Manager.h"

namespace dsc
{
	namespace tests
	{
		static std::list<std::string> const kTestList( {"test1", "test2", "banana", "apple", "toucan", "penguin", "hummingbird" });
		static std::string kTestString("testString");

		static bool isTestString(std::string const& input)
		{
			return input == kTestString;
		};
		
		TEST(Manager, Manager_objects)
		{
			dsc::Manager<std::string> no;
			ASSERT_EQ(no.objects().empty(), true);
		}
		
		TEST(Manager, Manager_add)
		{
			dsc::Manager<std::string> no;
			
			ASSERT_EQ(no.add(std::move(kTestString)), true);
			ASSERT_EQ(no.objects(), std::list{ kTestString });
		}
		TEST(Manager, Manager_removeByValue)
		{
			dsc::Manager<std::string> no;

			ASSERT_EQ(no.add(std::move(kTestString)), true);
			EXPECT_EQ(no.objects(), std::list{ kTestString });

			ASSERT_EQ(no.remove(kTestString), true);
			ASSERT_EQ(no.objects().empty(), true);
		}

		TEST(Manager, Manager_removeByRef)
		{
			dsc::Manager<std::string> no;

			ASSERT_EQ(no.add(std::move(kTestString)), true);
			EXPECT_EQ(no.objects(), std::list{ kTestString });

			ASSERT_EQ(no.remove(0), true);
			ASSERT_EQ(no.objects().empty(), true);
		}

		TEST(Manager, Manager_removeAll)
		{
			dsc::Manager<std::string> no;

			ASSERT_EQ(no.add(std::move(kTestString)), true);
			EXPECT_EQ(no.objects(), std::list{kTestString});

			no.removeAll();
			ASSERT_EQ(no.objects().empty(), true);
		}

		TEST(Manager, Manager_find)
		{
			dsc::Manager<std::string> no;

			ASSERT_EQ(no.add(std::move(kTestString)), true);
			EXPECT_EQ(no.objects(), std::list{ kTestString });
			ASSERT_EQ(no.find(dsc::tests::isTestString), kTestString);
		}

		TEST(Manager, Manager_at)
		{
			dsc::Manager<std::string> no;

			ASSERT_EQ(no.add(std::move(kTestString)), true);
			EXPECT_EQ(no.objects(), std::list{ kTestString });
			ASSERT_EQ(no.at(0), kTestString);
		}

		TEST(Manager, Manager_random)
		{
			dsc::Manager<std::string> no;

			ASSERT_EQ(no.add(std::move(kTestString)), true);
			ASSERT_EQ(no.objects(), std::list{ kTestString });
			ASSERT_EQ(no.random(), kTestString);
		}

	} // namespace tests
} // namespace dsc