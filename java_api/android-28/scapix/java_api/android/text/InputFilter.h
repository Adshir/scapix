// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_INPUTFILTER_H
#define SCAPIX_ANDROID_TEXT_INPUTFILTER_H

namespace scapix::java_api {

namespace android::text { class Spanned; }
namespace java::lang { class CharSequence; }
namespace android::text { class InputFilter_LengthFilter; }
namespace android::text { class InputFilter_AllCaps; }

namespace android::text {

class InputFilter : public object_base<SCAPIX_META_STRING("android/text/InputFilter"),
	java::lang::Object>
{
public:

	using LengthFilter = InputFilter_LengthFilter;
	using AllCaps = InputFilter_AllCaps;

	ref<java::lang::CharSequence> filter(ref<java::lang::CharSequence> p1, jint p2, jint p3, ref<android::text::Spanned> p4, jint p5, jint p6);

protected:

	InputFilter(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/text/Spanned.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::text {

inline ref<java::lang::CharSequence> InputFilter::filter(ref<java::lang::CharSequence> p1, jint p2, jint p3, ref<android::text::Spanned> p4, jint p5, jint p6) { return call_method<SCAPIX_META_STRING("filter"), ref<java::lang::CharSequence>>(p1, p2, p3, p4, p5, p6); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_INPUTFILTER_H