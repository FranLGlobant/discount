#include "NamedObject.h"

namespace dsc
{
static std::string const kDummyEmptyString;

NamedObject::NamedObject(std::string const& name)
{
}

std::string const& NamedObject::name() const
{
	return kDummyEmptyString;
}

void NamedObject::setName(std::string const& name)
{
}

} // namespace dsc
