#pragma once

#include <list>
#include <string>

namespace dsc
{

class TaggedObject
{
public:
	virtual ~TaggedObject() = default;
	virtual std::list<std::string> const& tags() const;
	virtual bool hasTag(std::string const& tag) const;
	virtual bool hasTags(std::list<std::string> const& tags) const;
};

} // namespace dsc
