#include "gtest/gtest.h"

#include "NamedObject.h"

namespace dsc
{
namespace tests
{
static std::string const kTestName = "test";

TEST(NamedObject, NamedObject_name)
{
	dsc::NamedObject no(kTestName);
	ASSERT_EQ(no.name(), kTestName);
}

TEST(NamedObject, NamedObject_setName)
{
	static std::string const kTestNameToSet = "renamed_test";
	dsc::NamedObject no(kTestName);
	EXPECT_EQ(no.name(), kTestName);

	no.setName(kTestNameToSet);
	ASSERT_EQ(no.name(), kTestNameToSet);
}

} // namespace tests
} // namespace dsc
