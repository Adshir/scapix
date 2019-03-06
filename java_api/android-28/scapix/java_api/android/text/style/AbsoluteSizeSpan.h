// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_ABSOLUTESIZESPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_ABSOLUTESIZESPAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::text { class TextPaint; }

namespace android::text::style {

class AbsoluteSizeSpan : public object_base<SCAPIX_META_STRING("android/text/style/AbsoluteSizeSpan"),
	android::text::style::MetricAffectingSpan,
	android::text::ParcelableSpan>
{
public:

	static ref<AbsoluteSizeSpan> new_object(jint size);
	static ref<AbsoluteSizeSpan> new_object(jint size, jboolean dip);
	static ref<AbsoluteSizeSpan> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint getSize();
	jboolean getDip();
	void updateDrawState(ref<android::text::TextPaint> ds);
	void updateMeasureState(ref<android::text::TextPaint> ds);

protected:

	AbsoluteSizeSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<AbsoluteSizeSpan> AbsoluteSizeSpan::new_object(jint size) { return base_::new_object(size); }
inline ref<AbsoluteSizeSpan> AbsoluteSizeSpan::new_object(jint size, jboolean dip) { return base_::new_object(size, dip); }
inline ref<AbsoluteSizeSpan> AbsoluteSizeSpan::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint AbsoluteSizeSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint AbsoluteSizeSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AbsoluteSizeSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint AbsoluteSizeSpan::getSize() { return call_method<SCAPIX_META_STRING("getSize"), jint>(); }
inline jboolean AbsoluteSizeSpan::getDip() { return call_method<SCAPIX_META_STRING("getDip"), jboolean>(); }
inline void AbsoluteSizeSpan::updateDrawState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(ds); }
inline void AbsoluteSizeSpan::updateMeasureState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateMeasureState"), void>(ds); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_ABSOLUTESIZESPAN_H