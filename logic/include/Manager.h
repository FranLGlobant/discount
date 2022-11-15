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

	bool remove(typename std::list<T>::size_type atIndex)
	{
		return false;
	}

	void removeAll()
	{
	}

	T const& find(std::function<bool(T const&)> const& predicate) const
	{
		return T{};
	}

	T& find(std::function<bool(T const&)> const& predicate)
	{
		return T{};
	}

	T const& at(typename std::list<T>::size_type index) const
	{
		return T{};
	}

	T& at(typename std::list<T>::size_type index)
	{
		return T{};
	}

	T const& random() const
	{
		return T{};
	}

	T& random()
	{
		return T{};
	}
};

} // namespace dsc
