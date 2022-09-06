#pragma once

#include "Manager.h"

namespace dsc
{

template<class T, class KeyType = std::string>
class ManagerKey : public Manager<T>
{
public:
	ManagerKey(std::function<KeyType const&()> const& keyGetter)
	{
	}

	T const& get(KeyType const& key) const
	{
		return {};
	}

	T& get(KeyType const& key)
	{
		return {};
	}
};

} // namespace dsc
