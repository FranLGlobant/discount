#include "gtest/gtest.h"

#include "TaggedObject.h"

namespace dsc
{
	namespace tests
	{
		/*
			virtual ~TaggedObject() = default;
			virtual std::list<std::string> const& tags() const;
			virtual bool hasTag(std::string const& tag) const;
			virtual bool hasTags(std::list<std::string> const& tags) const;
		*/
		static std::list<std::string> const kTestList( {"test1", "test2", "banana", "apple", "toucan", "penguin", "hummingbird" });

		
		TEST(TaggedObject, TaggedObject_tags)
		{
			dsc::TaggedObject no;
			ASSERT_EQ(no.tags(), kTestList);
		}

		
		TEST(TaggedObject, TaggedObject_hasTag)
		{
			static std::string const kTestTrueStringToCheck = "banana";
			static std::string const kTestFalseStringToCheck = "pineapple";

			dsc::TaggedObject no;
			EXPECT_EQ(no.hasTag(kTestTrueStringToCheck), true);

			EXPECT_EQ(no.hasTag(kTestFalseStringToCheck), false);

		}

		TEST(TaggedObject, TaggedObject_hasTags)
		{
			static std::list<std::string> const kTestTrueStringsToCheck{ "banana","toucan"};
			static std::list<std::string> const kTestFalseStringsToCheck{ "pineapple","lion"};
			static std::list<std::string> const kTestMixedStringsToCheck{ "pineapple","banana" };
			dsc::TaggedObject no;
			EXPECT_EQ(no.hasTags(kTestTrueStringsToCheck), true);
			EXPECT_EQ(no.hasTags(kTestFalseStringsToCheck), false);
			EXPECT_EQ(no.hasTags(kTestMixedStringsToCheck), false);

		}
		

	} // namespace tests
} // namespace dsc