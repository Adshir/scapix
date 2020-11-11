/*
	scapix/core/value_list.h

	Copyright (c) 2020 Boris Rasin (boris@scapix.com)
*/

#ifndef SCAPIX_CORE_VALUE_LIST_H
#define SCAPIX_CORE_VALUE_LIST_H

#include <scapix/core/tuple.h>

namespace scapix {

template <auto ...T>
struct value_list;

template <>
struct value_list<>
{
	using tuple_type = tuple<>;
};

template <auto First, auto ...Rest>
struct value_list<First, Rest...>
{
	using tuple_type = tuple<decltype(First), decltype(Rest)...>;

	constexpr inline static auto value = First;
	value_list<Rest...> rest;
};

} // namespace scapix

#endif // SCAPIX_CORE_VALUE_LIST_H
