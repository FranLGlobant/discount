#pragma once

#include <string>

namespace dsc
{

class NamedObject
{
public:
	NamedObject(std::string const& name);
	virtual ~NamedObject() = default;
	virtual std::string const& name() const;
	virtual void setName(std::string const& name);
};

} // namespace dsc
