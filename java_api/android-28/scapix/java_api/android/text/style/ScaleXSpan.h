// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_SCALEXSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_SCALEXSPAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::text { class TextPaint; }

namespace android::text::style {

class ScaleXSpan : public object_base<SCAPIX_META_STRING("android/text/style/ScaleXSpan"),
	android::text::style::MetricAffectingSpan,
	android::text::ParcelableSpan>
{
public:

	static ref<ScaleXSpan> new_object(jfloat proportion);
	static ref<ScaleXSpan> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jfloat getScaleX();
	void updateDrawState(ref<android::text::TextPaint> ds);
	void updateMeasureState(ref<android::text::TextPaint> ds);

protected:

	ScaleXSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<ScaleXSpan> ScaleXSpan::new_object(jfloat proportion) { return base_::new_object(proportion); }
inline ref<ScaleXSpan> ScaleXSpan::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint ScaleXSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint ScaleXSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ScaleXSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jfloat ScaleXSpan::getScaleX() { return call_method<SCAPIX_META_STRING("getScaleX"), jfloat>(); }
inline void ScaleXSpan::updateDrawState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(ds); }
inline void ScaleXSpan::updateMeasureState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateMeasureState"), void>(ds); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_SCALEXSPAN_H
