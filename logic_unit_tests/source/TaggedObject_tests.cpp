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
		static std::list<string> const kTestList = ["test1","test2","banana","apple","toucan","penguin","hummingbird"];

		TEST(TaggedObject, TaggedObject_list)
		{
			dsc::TaggedObject no(kTestList);
			ASSERT_EQ(no.tags(), kTestList);
		}

		/*
		TEST(TaggedObject, TaggedObject_hasTag)
		{
			static std::string const kTestNameToSet = "renamed_test";
			dsc::TaggedObject no(kTestList);
			EXPECT_EQ(no.name(), kTestName);

			no.setName(kTestNameToSet);
			ASSERT_EQ(no.name(), kTestNameToSet);
		}
		*/

	} // namespace tests
} // namespace dsc