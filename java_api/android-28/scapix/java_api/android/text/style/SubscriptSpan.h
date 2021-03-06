// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_SUBSCRIPTSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_SUBSCRIPTSPAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::text { class TextPaint; }

namespace android::text::style {

class SubscriptSpan : public object_base<SCAPIX_META_STRING("android/text/style/SubscriptSpan"),
	android::text::style::MetricAffectingSpan,
	android::text::ParcelableSpan>
{
public:

	static ref<SubscriptSpan> new_object();
	static ref<SubscriptSpan> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	void updateDrawState(ref<android::text::TextPaint> textPaint);
	void updateMeasureState(ref<android::text::TextPaint> textPaint);

protected:

	SubscriptSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<SubscriptSpan> SubscriptSpan::new_object() { return base_::new_object(); }
inline ref<SubscriptSpan> SubscriptSpan::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint SubscriptSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint SubscriptSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void SubscriptSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline void SubscriptSpan::updateDrawState(ref<android::text::TextPaint> textPaint) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(textPaint); }
inline void SubscriptSpan::updateMeasureState(ref<android::text::TextPaint> textPaint) { return call_method<SCAPIX_META_STRING("updateMeasureState"), void>(textPaint); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_SUBSCRIPTSPAN_H
