/*
	scapix/link/js/convert.h

	Copyright (c) 2019 Boris Rasin (boris@scapix.com)
*/

#ifndef SCAPIX_LINK_JS_CONVERT_H
#define SCAPIX_LINK_JS_CONVERT_H

#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <experimental/type_traits>
#include <emscripten/val.h>
#include <scapix/link/js/type_traits.h>

namespace scapix {
namespace link {
namespace js {

// C++20
template <typename T>
using remove_cvref_t = std::remove_cv_t<std::remove_reference_t<T>>;

template <typename Js, typename Cpp, typename = void>
struct convert;

template <typename Js, typename Cpp>
decltype(auto) convert_js(Cpp&& cpp)
{
    return convert<remove_cvref_t<Js>, remove_cvref_t<Cpp>>::js(std::forward<Cpp>(cpp));
}

template <typename Cpp, typename Js>
decltype(auto) convert_cpp(Js&& js)
{
    return convert<remove_cvref_t<Js>, remove_cvref_t<Cpp>>::cpp(std::forward<Js>(js));
}

template<typename Js, typename Cpp>
using has_convert_js_t = decltype(std::declval<Js>() = convert<remove_cvref_t<Js>, remove_cvref_t<Cpp>>::js(std::declval<Cpp>()));

template<typename Js, typename Cpp>
using has_convert_cpp_t = decltype(std::declval<Cpp>() = convert<remove_cvref_t<Js>, remove_cvref_t<Cpp>>::cpp(std::declval<Js>()));

template <typename T>
struct convert<emscripten::val, T, std::enable_if_t<is_native_v<T>>>
{
	static T cpp(const emscripten::val& val)
	{
		return val.as<T>();
	}

	static emscripten::val js(const T& n)
	{
		return emscripten::val(n);
	}
};

template <typename T>
struct convert<emscripten::val, std::shared_ptr<T>>
{
	static std::shared_ptr<T> cpp(const emscripten::val& val)
	{
		return val.as<std::shared_ptr<T>>();
	}

	static emscripten::val js(const std::shared_ptr<T>& p)
	{
		return emscripten::val(p);
	}
};

template <>
struct convert<emscripten::val, std::string>
{
	static std::string cpp(const emscripten::val& val)
	{
		return val.as<std::string>();
	}

	static emscripten::val js(const std::string& str)
	{
		return emscripten::val(str.c_str());
	}
};

// to do: optimize with memcpy or equivalent

template <typename T, typename A>
struct convert<emscripten::val, std::vector<T, A>, std::enable_if_t<is_native_v<T>>>
{
	static std::vector<T, A> cpp(const emscripten::val& val)
	{
		std::vector<T, A> v;
		auto length = val["length"].as<unsigned>();
		v.reserve(length);

		for(unsigned i = 0; i < length; ++i)
		{
			v.push_back(convert_cpp<T>(val[i]));
		}

		return v;
	}

	static emscripten::val js(const std::vector<T, A>& v)
	{
		auto a = emscripten::val::array();

		for (auto& i : v)
		{
			a.call<void>("push", convert_js<emscripten::val>(i));
		}

		return a;
	}
};

template <typename T, typename A>
struct convert<emscripten::val, std::vector<T, A>, std::enable_if_t<!is_native_v<T>>>
{
	static std::vector<T, A> cpp(const emscripten::val& val)
	{
		std::vector<T, A> v;
		auto length = val["length"].as<unsigned>();
		v.reserve(length);

		for(unsigned i = 0; i < length; ++i)
		{
			v.push_back(convert_cpp<T>(val[i]));
		}

		return v;
	}

	static emscripten::val js(const std::vector<T, A>& v)
	{
		auto a = emscripten::val::array();

		for (auto& i : v)
		{
			a.call<void>("push", convert_js<emscripten::val>(i));
		}

		return a;
	}
};

template <typename K, typename V, typename C, typename A>
struct convert<emscripten::val, std::map<K, V, C, A>>
{
	static std::map<K, V, C, A> cpp(const emscripten::val& val)
	{
		std::map<K, V, C, A> m;

		auto entries = val.call<emscripten::val>("entries");

		auto size = val["size"].as<unsigned>();

		for(unsigned n = 0; n < size; ++n)
		{
			auto i = entries.call<emscripten::val>("next");

//			if (i["done"].as<bool>())
//				break;

			auto entry = i["value"];

			m.emplace
			(
				convert_cpp<K>(entry[0]),
				convert_cpp<V>(entry[1])
			);
		}

		return m;
	}

	static emscripten::val js(const std::map<K, V, C, A>& m)
	{
		auto jm = emscripten::val::global("Map").new_();

		for (auto& i : m)
			jm.call<void>("set", convert_js<emscripten::val>(i.first), convert_js<emscripten::val>(i.second));

		return jm;
	}
};

template <typename K, typename C, typename A>
struct convert<emscripten::val, std::set<K, C, A>>
{
	static std::set<K, C, A> cpp(const emscripten::val& val)
	{
		std::set<K, C, A> s;

		auto size = val["size"].as<unsigned>();

		for (int i = 0; i < size; ++i)
		{
			s.emplace
			(
				convert_cpp<K>(val[i])
			);
		}

		return s;
	}

	static emscripten::val js(const std::set<K, C, A>& s)
	{
		auto js = emscripten::val::global("Set").new_();

		for (auto& i : s)
			js.call<void>("add", convert_js<emscripten::val>(i));

		return js;
	}
};

template <typename K, typename T, typename H, typename KE, typename A>
struct convert<emscripten::val, std::unordered_map<K, T, H, KE, A>>
{
	static std::unordered_map<K, T, H, KE, A> cpp(const emscripten::val& val)
	{
		std::unordered_map<K, T, H, KE, A> m;

		auto entries = val.call<emscripten::val>("entries");

		auto size = val["size"].as<unsigned>();

		for(unsigned n = 0; n < size; ++n)
		{
			auto i = entries.call<emscripten::val>("next");

//			if (i["done"].as<bool>())
//				break;

			auto entry = i["value"];

			m.emplace
			(
				convert_cpp<K>(entry[0]),
				convert_cpp<T>(entry[1])
			);
		}

		return m;
	}

	static emscripten::val js(const std::unordered_map<K, T, H, KE, A>& m)
	{
		auto jm = emscripten::val::global("Map").new_();

		for (auto& i : m)
			jm.call<void>("set", convert_js<emscripten::val>(i.first), convert_js<emscripten::val>(i.second));

		return jm;
	}
};

template <typename K, typename H, typename KE, typename A>
struct convert<emscripten::val, std::unordered_set<K, H, KE, A>>
{
	static std::unordered_set<K, H, KE, A> cpp(const emscripten::val& val)
	{
		std::unordered_set<K, H, KE, A> s;

		auto size = val["size"].as<unsigned>();

		for (int i = 0; i < size; ++i)
		{
			s.emplace
			(
				convert_cpp<K>(val[i])
			);
		}

		return s;
	}
    
	static emscripten::val js(const std::unordered_set<K, H, KE, A>& s)
	{
		auto js = emscripten::val::global("Set").new_();

		for (auto& i : s)
			js.call<void>("add", convert_js<emscripten::val>(i));

		return js;
	}
};

template <typename R, typename ...Args>
struct convert<emscripten::val, std::function<R(Args...)>>
{
	static std::function<R(Args...)> cpp(const emscripten::val& val)
	{
		return std::function<R(Args...)>([val](Args... args)
		{
			if constexpr (std::is_void_v<R>)
				val(convert_js<emscripten::val>(args)...);
			else
				return convert_cpp<R>(val(convert_js<emscripten::val>(args)...));
		});
	}

	// static emscripten::val js(const std::function<R(Args...)>& func)
	// {
	// }
};

} // namespace js
} // namespace link
} // namespace scapix

#endif // SCAPIX_LINK_JS_CONVERT_H
