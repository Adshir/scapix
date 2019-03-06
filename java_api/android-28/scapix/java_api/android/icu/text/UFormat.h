// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/text/Format.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_UFORMAT_H
#define SCAPIX_ANDROID_ICU_TEXT_UFORMAT_H

namespace scapix::java_api {
namespace android::icu::text {

class UFormat : public object_base<SCAPIX_META_STRING("android/icu/text/UFormat"),
	java::text::Format>
{
public:

	static ref<UFormat> new_object();

protected:

	UFormat(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::text {

inline ref<UFormat> UFormat::new_object() { return base_::new_object(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_UFORMAT_H