// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/spi/LocaleServiceProvider.h>

#ifndef SCAPIX_JAVA_UTIL_SPI_TIMEZONENAMEPROVIDER_H
#define SCAPIX_JAVA_UTIL_SPI_TIMEZONENAMEPROVIDER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Locale; }

namespace java::util::spi {

class TimeZoneNameProvider : public object_base<SCAPIX_META_STRING("java/util/spi/TimeZoneNameProvider"),
	java::util::spi::LocaleServiceProvider>
{
public:

	ref<java::lang::String> getDisplayName(ref<java::lang::String> p1, jboolean p2, jint p3, ref<java::util::Locale> p4);
	ref<java::lang::String> getGenericDisplayName(ref<java::lang::String> ID_, jint style, ref<java::util::Locale> locale);

protected:

	TimeZoneNameProvider(handle_type h) : base_(h) {}

};

} // namespace java::util::spi
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::util::spi {

inline ref<java::lang::String> TimeZoneNameProvider::getDisplayName(ref<java::lang::String> p1, jboolean p2, jint p3, ref<java::util::Locale> p4) { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(p1, p2, p3, p4); }
inline ref<java::lang::String> TimeZoneNameProvider::getGenericDisplayName(ref<java::lang::String> ID_, jint style, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getGenericDisplayName"), ref<java::lang::String>>(ID_, style, locale); }

} // namespace java::util::spi
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SPI_TIMEZONENAMEPROVIDER_H