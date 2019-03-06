// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING_H
#define SCAPIX_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::view {

class ViewDebug_FlagToString : public object_base<SCAPIX_META_STRING("android/view/ViewDebug$FlagToString"),
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jint mask();
	jint equals();
	ref<java::lang::String> name();
	jboolean outputIf();

protected:

	ViewDebug_FlagToString(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view {

inline jint ViewDebug_FlagToString::mask() { return call_method<SCAPIX_META_STRING("mask"), jint>(); }
inline jint ViewDebug_FlagToString::equals() { return call_method<SCAPIX_META_STRING("equals"), jint>(); }
inline ref<java::lang::String> ViewDebug_FlagToString::name() { return call_method<SCAPIX_META_STRING("name"), ref<java::lang::String>>(); }
inline jboolean ViewDebug_FlagToString::outputIf() { return call_method<SCAPIX_META_STRING("outputIf"), jboolean>(); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEWDEBUG_FLAGTOSTRING_H