// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/TtsSpan_SemioticClassBuilder.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_TIMEBUILDER_H
#define SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_TIMEBUILDER_H

namespace scapix::java_api {


namespace android::text::style {

class TtsSpan_TimeBuilder : public object_base<SCAPIX_META_STRING("android/text/style/TtsSpan$TimeBuilder"),
	android::text::style::TtsSpan_SemioticClassBuilder>
{
public:

	static ref<TtsSpan_TimeBuilder> new_object();
	static ref<TtsSpan_TimeBuilder> new_object(jint hours, jint minutes);
	ref<android::text::style::TtsSpan_TimeBuilder> setHours(jint hours);
	ref<android::text::style::TtsSpan_TimeBuilder> setMinutes(jint minutes);

protected:

	TtsSpan_TimeBuilder(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::text::style {

inline ref<TtsSpan_TimeBuilder> TtsSpan_TimeBuilder::new_object() { return base_::new_object(); }
inline ref<TtsSpan_TimeBuilder> TtsSpan_TimeBuilder::new_object(jint hours, jint minutes) { return base_::new_object(hours, minutes); }
inline ref<android::text::style::TtsSpan_TimeBuilder> TtsSpan_TimeBuilder::setHours(jint hours) { return call_method<SCAPIX_META_STRING("setHours"), ref<android::text::style::TtsSpan_TimeBuilder>>(hours); }
inline ref<android::text::style::TtsSpan_TimeBuilder> TtsSpan_TimeBuilder::setMinutes(jint minutes) { return call_method<SCAPIX_META_STRING("setMinutes"), ref<android::text::style::TtsSpan_TimeBuilder>>(minutes); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_TTSSPAN_TIMEBUILDER_H