/*
	scapix/meta/string.h

	Copyright (c) 2019 Boris Rasin (boris@scapix.com)
*/

#ifndef SCAPIX_META_STRING_H
#define SCAPIX_META_STRING_H

#ifdef __GNUG__

// Use GNU C++ extension: gnu-string-literal-operator-template, supported by gcc and clang in GNU mode.
// This speeds up compilation with many meta strings, for example with headers generated by scapix_java.
// Otherwise use BOOST_METAPARSE_STRING.

namespace scapix {
namespace meta {

template <char... Chars>
struct string
{
    using type = string;
};

template <class S>
struct c_str;

template <char... Cs>
struct c_str<string<Cs...>>
{
    static constexpr char value[sizeof...(Cs) + 1] = {Cs..., 0};
};

template <char... Cs>
constexpr char c_str<string<Cs...>>::value[];

template <typename T>
constexpr auto& c_str_v = c_str<T>::value;

template <typename ...Strings>
struct concat;

template <typename ...Strings>
using concat_t = typename concat<Strings...>::type;

template <char ...Chars>
struct concat<string<Chars...>> : string<Chars...> {};

template <char ...Chars1, char ...Chars2>
struct concat<string<Chars1...>, string<Chars2...>> : string<Chars1..., Chars2...> {};

template <typename String1, typename String2, typename ...Strings>
struct concat<String1, String2, Strings...> : concat_t<concat_t<String1, String2>, Strings...> {};

#define SCAPIX_META_STRING(s) decltype(s##_scapix_meta_string)

} // namespace meta
} // namespace scapix

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wgnu-string-literal-operator-template"

template <typename Char, Char... Chars>
constexpr auto operator "" _scapix_meta_string()
{
    return scapix::meta::string<Chars...>();
}

#pragma GCC diagnostic pop

#else // !__GNUG__

#define BOOST_METAPARSE_LIMIT_STRING_SIZE 64
#include <boost/metaparse/string.hpp>

namespace scapix {
namespace meta {

template <char... Chars>
using string = boost::metaparse::string<Chars...>;

template <typename ...Strings>
struct concat;

template <typename ...Strings>
using concat_t = typename concat<Strings...>::type;

template <char ...Chars>
struct concat<string<Chars...>> : string<Chars...> {};

template <char ...Chars1, char ...Chars2>
struct concat<string<Chars1...>, string<Chars2...>> : string<Chars1..., Chars2...> {};

template <typename String1, typename String2, typename ...Strings>
struct concat<String1, String2, Strings...> : concat_t<concat_t<String1, String2>, Strings...> {};

template <typename T>
constexpr auto& c_str_v = boost::mpl::c_str<T>::value;

#define SCAPIX_META_STRING(s) BOOST_METAPARSE_STRING(s)

} // namespace meta
} // namespace scapix

#endif // __GNUG__
#endif // SCAPIX_META_STRING_H
