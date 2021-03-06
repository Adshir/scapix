// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_TIME_FORMAT_RESOLVERSTYLE_H
#define SCAPIX_JAVA_TIME_FORMAT_RESOLVERSTYLE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::time::format {

class ResolverStyle : public object_base<SCAPIX_META_STRING("java/time/format/ResolverStyle"),
	java::lang::Enum>
{
public:

	static ref<java::time::format::ResolverStyle> STRICT_();
	static ref<java::time::format::ResolverStyle> SMART_();
	static ref<java::time::format::ResolverStyle> LENIENT_();

	static ref<link::java::array<java::time::format::ResolverStyle>> values();
	static ref<java::time::format::ResolverStyle> valueOf(ref<java::lang::String> name);

protected:

	ResolverStyle(handle_type h) : base_(h) {}

};

} // namespace java::time::format
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::time::format {

inline ref<java::time::format::ResolverStyle> ResolverStyle::STRICT_() { return get_static_field<SCAPIX_META_STRING("STRICT"), ref<java::time::format::ResolverStyle>>(); }
inline ref<java::time::format::ResolverStyle> ResolverStyle::SMART_() { return get_static_field<SCAPIX_META_STRING("SMART"), ref<java::time::format::ResolverStyle>>(); }
inline ref<java::time::format::ResolverStyle> ResolverStyle::LENIENT_() { return get_static_field<SCAPIX_META_STRING("LENIENT"), ref<java::time::format::ResolverStyle>>(); }
inline ref<link::java::array<java::time::format::ResolverStyle>> ResolverStyle::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::time::format::ResolverStyle>>>(); }
inline ref<java::time::format::ResolverStyle> ResolverStyle::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::time::format::ResolverStyle>>(name); }

} // namespace java::time::format
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_FORMAT_RESOLVERSTYLE_H
