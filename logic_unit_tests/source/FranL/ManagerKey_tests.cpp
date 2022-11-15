#include "gtest/gtest.h"

#include "ManagerKey.h"

namespace dsc
{
	namespace tests
	{
		static std::string kTestString("testString");

		static std::string const kTestKeyGetter(std::string const& input)
		{
			return input;
		};
		
		/*
		TEST(ManagerKey, ManagerKey_get)
		{
			dsc::ManagerKey<std::string, std::string> no(kTestKeyGetter);
			EXPECT_EQ(no.add(std::move(kTestString)), true);

			ASSERT_EQ(no.get(kTestString), kTestString);
		}
		*/
		
		

	} // namespace tests
} // namespace dsc