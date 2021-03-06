// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/spi/LocaleServiceProvider.h>

#ifndef SCAPIX_JAVA_TEXT_SPI_COLLATORPROVIDER_H
#define SCAPIX_JAVA_TEXT_SPI_COLLATORPROVIDER_H

namespace scapix::java_api {

namespace java::text { class Collator; }
namespace java::util { class Locale; }

namespace java::text::spi {

class CollatorProvider : public object_base<SCAPIX_META_STRING("java/text/spi/CollatorProvider"),
	java::util::spi::LocaleServiceProvider>
{
public:

	ref<java::text::Collator> getInstance(ref<java::util::Locale> p1);

protected:

	CollatorProvider(handle_type h) : base_(h) {}

};

} // namespace java::text::spi
} // namespace scapix::java_api

#include <scapix/java_api/java/text/Collator.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::text::spi {

inline ref<java::text::Collator> CollatorProvider::getInstance(ref<java::util::Locale> p1) { return call_method<SCAPIX_META_STRING("getInstance"), ref<java::text::Collator>>(p1); }

} // namespace java::text::spi
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_SPI_COLLATORPROVIDER_H
