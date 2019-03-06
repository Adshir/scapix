// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_CHARACTERSTYLE_H
#define SCAPIX_ANDROID_TEXT_STYLE_CHARACTERSTYLE_H

namespace scapix::java_api {

namespace android::text { class TextPaint; }

namespace android::text::style {

class CharacterStyle : public object_base<SCAPIX_META_STRING("android/text/style/CharacterStyle"),
	java::lang::Object>
{
public:

	static ref<CharacterStyle> new_object();
	void updateDrawState(ref<android::text::TextPaint> p1);
	static ref<android::text::style::CharacterStyle> wrap(ref<android::text::style::CharacterStyle> cs);
	ref<android::text::style::CharacterStyle> getUnderlying();

protected:

	CharacterStyle(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<CharacterStyle> CharacterStyle::new_object() { return base_::new_object(); }
inline void CharacterStyle::updateDrawState(ref<android::text::TextPaint> p1) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(p1); }
inline ref<android::text::style::CharacterStyle> CharacterStyle::wrap(ref<android::text::style::CharacterStyle> cs) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<android::text::style::CharacterStyle>>(cs); }
inline ref<android::text::style::CharacterStyle> CharacterStyle::getUnderlying() { return call_method<SCAPIX_META_STRING("getUnderlying"), ref<android::text::style::CharacterStyle>>(); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_CHARACTERSTYLE_H