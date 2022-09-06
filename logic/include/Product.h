#pragma once

#include "NamedObject.h"
#include "TaggedObject.h"

#include "SimpleTypes.h"

namespace dsc
{

class Product : public NamedObject, public TaggedObject
{
public:
	Product(Brand const& brand, std::string const& productName, std::list<std::string>&& tags, std::string const& description);

	Brand const& brand() const;
	Brand& brand();

	std::string const& description() const;
	std::string const& fullName() const;
};

} // namespace dsc
