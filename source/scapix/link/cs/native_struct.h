/*
	scapix/link/cs/native_struct.h

	Copyright (c) 2020 Boris Rasin (boris@scapix.com)
*/

#ifndef SCAPIX_LINK_CS_NATIVE_STRUCT_H
#define SCAPIX_LINK_CS_NATIVE_STRUCT_H

#include <scapix/core/value_list.h>
#include <scapix/meta/for_each.h>
#include <scapix/meta/transform.h>
#include <scapix/link/cs/convert.h>

namespace scapix::link::cs {

template <typename Struct>
struct native_struct;

template <auto Ptr>
struct native_field
{
	inline static constexpr auto ptr = Ptr;
};

template <typename Cs, typename Struct>
struct convert<Cs, Struct, std::void_t<typename native_struct<Struct>::fields>>
{
	using fields = typename native_struct<Struct>::fields::tuple_type;
	using cs_type = meta::transform<param_t, fields>;

	static cs_type cs(const Struct& value)
	{
		cs_type obj;

		meta::for_each<fields>([&](auto f)
		{
			using field = decltype(f);
			meta::set<field::index>(obj, convert_cs<field::type>(value.*field::ptr));
		});

		return obj;
	}

	static Struct cpp(const cs_type& value)
	{
		Struct obj;

		meta::for_each<fields>([&](auto f)
		{
			using field = decltype(f);
			obj.*field::ptr = convert_cpp<decltype(obj.*field::ptr)>(meta::get<field::index>(value));
		});

		return obj;
	}

};

} // namespace scapix::link::cs

#endif // SCAPIX_LINK_CS_NATIVE_STRUCT_H
