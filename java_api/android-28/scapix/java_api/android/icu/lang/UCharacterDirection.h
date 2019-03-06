// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/icu/lang/UCharacterEnums_ECharacterDirection.h>

#ifndef SCAPIX_ANDROID_ICU_LANG_UCHARACTERDIRECTION_H
#define SCAPIX_ANDROID_ICU_LANG_UCHARACTERDIRECTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::lang {

class UCharacterDirection : public object_base<SCAPIX_META_STRING("android/icu/lang/UCharacterDirection"),
	java::lang::Object,
	android::icu::lang::UCharacterEnums_ECharacterDirection>
{
public:

	static ref<java::lang::String> toString(jint dir);

protected:

	UCharacterDirection(handle_type h) : base_(h) {}

};

} // namespace android::icu::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::lang {

inline ref<java::lang::String> UCharacterDirection::toString(jint dir) { return call_static_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(dir); }

} // namespace android::icu::lang
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_LANG_UCHARACTERDIRECTION_H