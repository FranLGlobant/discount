#pragma once

#include <list>
#include <functional>

namespace dsc
{

template<class T>
class Manager
{
public:
	template <class _T = T, typename std::enable_if_t<std::is_default_constructible_v<_T>, bool> = true>
	Manager()
	{
	}

	template <class _T = T, typename std::enable_if_t<std::is_move_constructible_v<_T>, bool> = true>
	Manager(_T const& nullObject):
		mNull(nullObject)
	{
	}

	template <class _T = T, typename std::enable_if_t<std::is_move_constructible_v<_T>, bool> = true>
	Manager(T&& nullValue):
		mNull(std::forward<T>(nullValue))
	{
	}

	Manager(Manager const& other) = delete;

	std::list<T> const& objects() const
	{
		return mEmptyList;
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
		return mNull;
	}

	T& find(std::function<bool(T const&)> const& predicate)
	{
		return mNull;
	}

	T const& at(typename std::list<T>::size_type index) const
	{
		return mNull;
	}

	T& at(typename std::list<T>::size_type index)
	{
		return mNull;
	}

	T const& random() const
	{
		return mNull;
	}

	T& random()
	{
		return mNull;
	}

protected:

	T mNull;
	std::list<T> mEmptyList;
};

} // namespace dsc
