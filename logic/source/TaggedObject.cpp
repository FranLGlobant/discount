#include "TaggedObject.h"

namespace dsc
{

static std::list<std::string> const kDummyList;

std::list<std::string> const& TaggedObject::tags() const
{
	return kDummyList;
}

bool TaggedObject::hasTag(std::string const& tag) const
{
	return false;
}

bool TaggedObject::hasTags(std::list<std::string> const& tags) const
{
	return false;
}

} // namespace dsc
