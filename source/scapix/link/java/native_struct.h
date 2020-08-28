/*
	scapix/link/java/native_struct.h

	Copyright (c) 2020 Boris Rasin (boris@scapix.com)
*/

#ifndef SCAPIX_LINK_JAVA_NATIVE_STRUCT_H
#define SCAPIX_LINK_JAVA_NATIVE_STRUCT_H

#include <scapix/meta/for_each.h>
#include <scapix/link/java/convert.h>

namespace scapix {
namespace link {
namespace java {

template <typename Struct>
struct native_struct;

template <typename Type, typename Name, auto Ptr>
struct native_field
{
	using type = Type;
	using name = Name;
	inline static constexpr auto ptr = Ptr;
};

template <typename Jni, typename Struct>
struct convert<Jni, Struct, std::void_t<typename native_struct<Struct>::fields>>
{
	using class_name = typename native_struct<Struct>::class_name;
	using fields = typename native_struct<Struct>::fields;

	static ref<class_name> jni(const Struct& value)
	{
		auto obj = object<class_name>::new_object<void()>();

		meta::for_each<fields>([&](auto f)
		{
			using field = decltype(f);
			obj->set_field<field::name, field::type>(convert_jni<field::type>(value.*field::ptr));
		});

		return obj;
	}

	static Struct cpp(ref<class_name> value)
	{
		Struct obj;

		meta::for_each<fields>([&](auto f)
		{
			using field = decltype(f);
			obj.*field::ptr = convert_cpp<decltype(obj.*field::ptr)>(value->get_field<field::name, field::type>());
		});

		return obj;
	}

};

} // namespace java
} // namespace link
} // namespace scapix

#endif // SCAPIX_LINK_JAVA_NATIVE_STRUCT_H
