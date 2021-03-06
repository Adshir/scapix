/*
	scapix/link/java/convert.h

	Copyright (c) 2019 Boris Rasin (boris@scapix.com)
*/

#ifndef SCAPIX_LINK_JAVA_CONVERT_H
#define SCAPIX_LINK_JAVA_CONVERT_H

#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <experimental/type_traits>
#include <scapix/link/java/ref.h>
#include <scapix/link/java/string.h>
#include <scapix/link/java/array.h>

namespace scapix {
namespace link {
namespace java {

template <typename Jni, typename Cpp, typename = void>
struct convert_shared;

template<typename Jni, typename Cpp>
using has_convert_shared_t = decltype(convert_shared<Jni, Cpp>::jni(std::declval<std::shared_ptr<Cpp>>()));

template <typename Jni, typename Cpp>
struct convert<Jni, Cpp, std::enable_if_t<is_primitive_v<Jni> && std::is_arithmetic_v<Cpp>>>
{
	static_assert((std::is_integral_v<Jni> && std::is_integral_v<Cpp> && sizeof(Jni) == sizeof(Cpp)) || std::is_same_v<Jni, Cpp>);

	static Cpp cpp(Jni v)
	{
		return v;
	}

	static Jni jni(Cpp v)
	{
		return v;
	}
};

template <typename Jni, typename Cpp>
struct convert<Jni, Cpp, std::enable_if_t<std::is_enum_v<Cpp>>>
{
	static_assert(std::is_integral_v<Jni> && sizeof(Jni) == sizeof(Cpp));

	static Cpp cpp(Jni value)
	{
		return static_cast<Cpp>(value);
	}

	static Jni jni(Cpp value)
	{
		return static_cast<Jni>(value);
	}
};

template <typename J, typename Cpp>
struct convert<ref<J>, Cpp, std::enable_if_t<std::is_enum_v<Cpp>>>
{
	using underlying = std::underlying_type_t<Cpp>;

	static Cpp cpp(ref<J> value)
	{
		return static_cast<Cpp>(convert_cpp<underlying>(value));
	}

	static ref<J> jni(Cpp value)
	{
		return convert_jni<ref<J>>(static_cast<underlying>(value));
	}
};

template <typename Jni, typename T>
struct convert<Jni, std::shared_ptr<T>>
{
	static std::shared_ptr<T> cpp(Jni value)
	{
		if constexpr (std::experimental::is_detected_v<has_convert_shared_t, Jni, T>)
			return convert_shared<Jni, T>::cpp(value);
		else
			return std::make_shared<T>(convert_cpp<T>(value));
	}

	static Jni jni(std::shared_ptr<T> value)
	{
		if constexpr (std::experimental::is_detected_v<has_convert_shared_t, Jni, T>)
			return convert_shared<Jni, T>::jni(value);
		else
			return convert_jni<Jni>(*value);
	}
};

struct convert_string
{
	using charset = SCAPIX_META_STRING("java/nio/charset/Charset");
	using standard_charsets = SCAPIX_META_STRING("java/nio/charset/StandardCharsets");

    static ref<charset> utf8_charset()
	{
//		static const global_ref<charset> ch = object<standard_charsets>::get_static_field<SCAPIX_META_STRING("UTF_8"), ref<charset>>();
		static const ref<charset> ch (global_ref<charset>(object<standard_charsets>::get_static_field<SCAPIX_META_STRING("UTF_8"), ref<charset>>()).release());
		return ch;
	}

	// C->Java conversion is fixed on Android 6 (https://android-review.googlesource.com/#/c/130121/)

	static std::string cpp(ref<string> obj)
	{
//		return obj->chars<char>().data();
        
		auto bytes = obj->call_method<SCAPIX_META_STRING("getBytes"), ref<jbyte[]>(ref<charset>)>(utf8_charset());
		std::string str(bytes->size(), char());
		bytes->get_region(0, static_cast<jsize>(str.size()), (jbyte*)str.data());
        
		return str;
	}

    static ref<string> jni(std::string_view str)
	{
//		return string::new_(str.data());

		auto bytes = array<jbyte>::new_(static_cast<jsize>(str.size()));
		bytes->set_region(0, static_cast<jsize>(str.size()), (const jbyte*)str.data());

		return string::new_object<void(ref<jbyte[]>, ref<charset>)>(bytes, utf8_charset());
	}
};

template <typename J, typename Cpp>
struct convert<ref<J>, Cpp, std::enable_if_t<ref<string>::convertible_from<J> && std::is_convertible_v<Cpp, std::string> && !is_ref_v<Cpp>>> : convert_string
{
};

template <typename ClassName, typename CppPrimitive, typename JniPrimitive, typename MethodName>
struct convert_primitive_object
{
	static CppPrimitive cpp(ref<ClassName> obj)
	{
		return obj->template call_method<MethodName, JniPrimitive()>();
	}

	static ref<ClassName> jni(CppPrimitive value)
	{
		return object<ClassName>::template call_static_method<SCAPIX_META_STRING("valueOf"), ref<ClassName>(JniPrimitive)>(value);
	}
};

using boolean_class_name = SCAPIX_META_STRING("java/lang/Boolean");
template <typename J> struct convert<ref<J>, bool, std::enable_if_t<ref<boolean_class_name>::convertible_from<J>>> :
convert_primitive_object<boolean_class_name, bool, jboolean, SCAPIX_META_STRING("booleanValue")> {};

using byte_class_name = SCAPIX_META_STRING("java/lang/Byte");

template <typename J, typename Cpp>
struct convert<ref<J>, Cpp, std::enable_if_t<ref<byte_class_name>::convertible_from<J> && std::is_integral_v<Cpp> && sizeof(Cpp) == sizeof(std::int8_t)>> :
convert_primitive_object<byte_class_name, Cpp, jbyte, SCAPIX_META_STRING("byteValue")> {};

using short_class_name = SCAPIX_META_STRING("java/lang/Short");

template <typename J, typename Cpp>
struct convert<ref<J>, Cpp, std::enable_if_t<ref<short_class_name>::convertible_from<J> && std::is_integral_v<Cpp> && sizeof(Cpp) == sizeof(std::int16_t)>> :
convert_primitive_object<short_class_name, Cpp, jshort, SCAPIX_META_STRING("shortValue")> {};

using integer_class_name = SCAPIX_META_STRING("java/lang/Integer");

template <typename J, typename Cpp>
struct convert<ref<J>, Cpp, std::enable_if_t<ref<integer_class_name>::convertible_from<J> && std::is_integral_v<Cpp> && sizeof(Cpp) == sizeof(std::int32_t)>> :
convert_primitive_object<integer_class_name, Cpp, jint, SCAPIX_META_STRING("intValue")> {};

using long_class_name = SCAPIX_META_STRING("java/lang/Long");

template <typename J, typename Cpp>
struct convert<ref<J>, Cpp, std::enable_if_t<ref<long_class_name>::convertible_from<J> && std::is_integral_v<Cpp> && sizeof(Cpp) == sizeof(std::int64_t)>> :
convert_primitive_object<long_class_name, Cpp, jlong, SCAPIX_META_STRING("longValue")> {};

using float_class_name = SCAPIX_META_STRING("java/lang/Float");
template <typename J> struct convert<ref<J>, float, std::enable_if_t<ref<float_class_name>::convertible_from<J>>> :
convert_primitive_object<float_class_name, float, jfloat, SCAPIX_META_STRING("floatValue")> {};

using double_class_name = SCAPIX_META_STRING("java/lang/Double");
template <typename J> struct convert<ref<J>, double, std::enable_if_t<ref<double_class_name>::convertible_from<J>>> :
convert_primitive_object<double_class_name, double, jdouble, SCAPIX_META_STRING("doubleValue")> {};

template <typename J, typename T, typename A>
struct convert<ref<array<J>>, std::vector<T, A>, std::enable_if_t<is_primitive_v<J>>>
{
	static_assert(sizeof(J) == sizeof(T));

	static std::vector<T, A> cpp(ref<array<J>> a)
	{
		std::vector<T, A> v(a->size());
		a->get_region(0, static_cast<jsize>(v.size()), reinterpret_cast<J*>(v.data()));
		return v;
	}

	static ref<array<J>> jni(const std::vector<T, A>& v)
	{
		auto a = array<J>::new_(static_cast<jsize>(v.size()));
		a->set_region(0, static_cast<jsize>(v.size()), reinterpret_cast<const J*>(v.data()));
		return a;
	}
};

template <typename J, typename T, typename A>
struct convert<ref<array<J>>, std::vector<T, A>, std::enable_if_t<!is_primitive_v<J>>>
{
	static std::vector<T, A> cpp(ref<array<J>> a)
	{
		std::vector<T, A> v(a->size());

		for (jsize i = 0; i < static_cast<jsize>(v.size()); ++i)
			v[i] = convert_cpp<T>(a[i].get());

		return v;
	}

	static ref<array<J>> jni(const std::vector<T, A>& v)
	{
		auto a = array<J>::new_(static_cast<jsize>(v.size()));

		for (jsize i = 0; i < static_cast<jsize>(v.size()); ++i)
			a[i] = convert_jni<ref<J>>(v[i]);

		return a;
	}
};

using treemap_class_name = SCAPIX_META_STRING("java/util/TreeMap");

template <typename JK, typename JV, typename K, typename V, typename C, typename A>
struct convert<ref<generic_type<treemap_class_name, JK, JV>>, std::map<K, V, C, A>>
{
	static std::map<K, V, C, A> cpp(ref<treemap_class_name> tm)
	{
		std::map<K, V, C, A> m;

		auto set = tm->call_method<SCAPIX_META_STRING("entrySet"), ref<SCAPIX_META_STRING("java/util/Set")>()>();
		auto i = set->call_method<SCAPIX_META_STRING("iterator"), ref<SCAPIX_META_STRING("java/util/Iterator")>()>();

		while (i->call_method<SCAPIX_META_STRING("hasNext"), jboolean()>())
		{
			auto entry = i->call_method<SCAPIX_META_STRING("next"), ref<generic<SCAPIX_META_STRING("java/util/Map$Entry")>>()>();

			m.emplace_hint
			(
				m.end(),
				convert_cpp<K>(entry->call_method<SCAPIX_META_STRING("getKey"), ref<generic<JK>>()>()),
				convert_cpp<V>(entry->call_method<SCAPIX_META_STRING("getValue"), ref<generic<JV>>()>())
			);
		}

		return m;
	}

	static ref<treemap_class_name> jni(const std::map<K, V, C, A>& m)
	{
		auto tm = object<treemap_class_name>::new_object<void()>();

		for (auto& i : m)
			tm->call_method<SCAPIX_META_STRING("put"), ref<generic<JV>>(ref<generic<JK>>, ref<generic<JV>>)>(convert_jni<ref<JK>>(i.first), convert_jni<ref<JV>>(i.second));

		return tm;
	}
};

using map_class_name = SCAPIX_META_STRING("java/util/Map");

template <typename JK, typename JV, typename K, typename V, typename C, typename A>
struct convert<ref<generic_type<map_class_name, JK, JV>>, std::map<K, V, C, A>>
{
	static std::map<K, V, C, A> cpp(ref<map_class_name> tm)
	{
		std::map<K, V, C, A> m;

		auto set = tm->call_method<SCAPIX_META_STRING("entrySet"), ref<SCAPIX_META_STRING("java/util/Set")>()>();
		auto i = set->call_method<SCAPIX_META_STRING("iterator"), ref<SCAPIX_META_STRING("java/util/Iterator")>()>();

		while (i->call_method<SCAPIX_META_STRING("hasNext"), jboolean()>())
		{
			auto entry = i->call_method<SCAPIX_META_STRING("next"), ref<generic<SCAPIX_META_STRING("java/util/Map$Entry")>>()>();

			m.emplace_hint
			(
				m.end(),
				convert_cpp<K>(entry->call_method<SCAPIX_META_STRING("getKey"), ref<generic<JK>>()>()),
				convert_cpp<V>(entry->call_method<SCAPIX_META_STRING("getValue"), ref<generic<JV>>()>())
			);
		}

		return m;
	}

	static ref<map_class_name> jni(const std::map<K, V, C, A>& m)
	{
		auto tm = object<treemap_class_name>::new_object<void()>();

		for (auto& i : m)
			tm->call_method<SCAPIX_META_STRING("put"), ref<generic<JV>>(ref<generic<JK>>, ref<generic<JV>>)>(convert_jni<ref<JK>>(i.first), convert_jni<ref<JV>>(i.second));

		return static_pointer_cast<map_class_name>(tm);
	}
};

using treeset_class_name = SCAPIX_META_STRING("java/util/TreeSet");
    
template <typename JE, typename K, typename C, typename A>
struct convert<ref<generic_type<treeset_class_name, JE>>, std::set<K, C, A>>
{
	static std::set<K, C, A> cpp(ref<treeset_class_name> set)
	{
		std::set<K, C, A> m;

		auto i = set->call_method<SCAPIX_META_STRING("iterator"), ref<SCAPIX_META_STRING("java/util/Iterator")>()>();

		while (i->call_method<SCAPIX_META_STRING("hasNext"), jboolean()>())
		{
			m.emplace_hint
			(
				m.end(),
				convert_cpp<K>(i->call_method<SCAPIX_META_STRING("next"), ref<generic<JE>>()>())
			);
		}
        
		return m;
	}

	static ref<treeset_class_name> jni(const std::set<K, C, A>& s)
	{
		auto set = object<treeset_class_name>::new_object<void()>();

		for (auto& i : s)
			set->call_method<SCAPIX_META_STRING("add"), jboolean(ref<generic<JE>>)>(convert_jni<ref<JE>>(i));
        
		return set;
	}
};

using hashmap_class_name = SCAPIX_META_STRING("java/util/HashMap");
    
template <typename JK, typename JV, typename K, typename T, typename H, typename KE, typename A>
struct convert<ref<generic_type<hashmap_class_name, JK, JV>>, std::unordered_map<K, T, H, KE, A>>
{
	static std::unordered_map<K, T, H, KE, A> cpp(ref<hashmap_class_name> tm)
	{
		std::unordered_map<K, T, H, KE, A> m;

		auto set = tm->call_method<SCAPIX_META_STRING("entrySet"), ref<SCAPIX_META_STRING("java/util/Set")>()>();
		auto i = set->call_method<SCAPIX_META_STRING("iterator"), ref<SCAPIX_META_STRING("java/util/Iterator")>()>();

		while (i->call_method<SCAPIX_META_STRING("hasNext"), jboolean()>())
		{
			auto entry = i->call_method<SCAPIX_META_STRING("next"), ref<generic<SCAPIX_META_STRING("java/util/Map$Entry")>>()>();

			m.emplace_hint
			(
				m.end(),
				convert_cpp<K>(entry->call_method<SCAPIX_META_STRING("getKey"), ref<generic<JK>>()>()),
				convert_cpp<T>(entry->call_method<SCAPIX_META_STRING("getValue"), ref<generic<JV>>()>())
			);
		}

		return m;
	}
    
	static ref<hashmap_class_name> jni(const std::unordered_map<K, T, H, KE, A>& m)
	{
		auto tm = object<hashmap_class_name>::new_object<void()>();

		for (auto& i : m)
			tm->call_method<SCAPIX_META_STRING("put"), ref<generic<JV>>(ref<generic<JK>>, ref<generic<JV>>)>(convert_jni<ref<JK>>(i.first), convert_jni<ref<JV>>(i.second));

		return tm;
	}
};

using hashset_class_name = SCAPIX_META_STRING("java/util/HashSet");

template <typename JE, typename K, typename H, typename KE, typename A>
struct convert<ref<generic_type<hashset_class_name, JE>>, std::unordered_set<K, H, KE, A>>
{
	static std::unordered_set<K, H, KE, A> cpp(ref<hashset_class_name> set)
	{
		std::unordered_set<K, H, KE, A> m;
        
		auto i = set->call_method<SCAPIX_META_STRING("iterator"), ref<SCAPIX_META_STRING("java/util/Iterator")>()>();
        
		while (i->call_method<SCAPIX_META_STRING("hasNext"), jboolean()>())
		{
			m.emplace_hint
			(
				m.end(),
				convert_cpp<K>(i->call_method<SCAPIX_META_STRING("next"), ref<generic<JE>>()>())
			);
		}
        
		return m;
	}
    
	static ref<hashset_class_name> jni(const std::unordered_set<K, H, KE, A>& s)
	{
		auto set = object<hashset_class_name>::new_object<void()>();
        
		for (auto& i : s)
			set->call_method<SCAPIX_META_STRING("add"), jboolean(ref<generic<JE>>)>(convert_jni<ref<JE>>(i));
        
		return set;
	}
};

template <typename ClassName, typename JniR, typename ...JniArgs, typename Name, typename R, typename ...Args>
struct convert<ref<function<ClassName, JniR(JniArgs...), Name>>, std::function<R(Args...)>>
{
	static std::function<R(Args...)> cpp(ref<function<ClassName, JniR(JniArgs...), Name>> i)
	{
		return std::function<R(Args...)>([i = global_ref<function<ClassName, JniR(JniArgs...), Name>>(i)](Args... args)
		{
			if constexpr (std::is_void_v<R>)
				return i->template call_method<Name, JniR(JniArgs...)>(convert_jni<JniArgs>(args)...);
			else
				return convert_cpp<R>(i->template call_method<Name, JniR(JniArgs...)>(convert_jni<JniArgs>(args)...));
		});
	}

//    static ref<function<ClassName, JniR(JniArgs...), Name>> jni(const std::function<R(Args...)>& f)
//    {
//        auto c = std::make_shared<callback<J, R, Args...>>(f);
//        return c.get_ref();
//    }
};

} // namespace java
} // namespace link
} // namespace scapix

#endif // SCAPIX_LINK_JAVA_CONVERT_H
