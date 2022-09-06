#pragma once

#include <list>
#include <functional>

namespace dsc
{

template<class T>
class Manager
{
public:
	std::list<T> const& objects() const
	{
		return {};
	}

	bool add(T&& obj)
	{
		return false;
	}

	bool remove(T const& obj)
	{
		return false;
	}

	bool remove(std::list<T>::size_type atIndex)
	{
		return false;
	}

	void removeAll()
	{
	}

	T const& find(std::function<bool(T const&)> const& predicate) const
	{
		return {};
	}

	T& find(std::function<bool(T const&)> const& predicate)
	{
		return {};
	}

	T const& at(std::list<T>::size_type index) const
	{
		return {};
	}

	T& at(std::list<T>::size_type index)
	{
		return {};
	}

	T const& random() const
	{
		return {};
	}

	T& random()
	{
		return {};
	}
};

} // namespace dsc
