// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SUBTITLEDATA_H
#define SCAPIX_ANDROID_MEDIA_SUBTITLEDATA_H

namespace scapix::java_api {
namespace android::media {

class SubtitleData : public object_base<SCAPIX_META_STRING("android/media/SubtitleData"),
	java::lang::Object>
{
public:

	jint getTrackIndex();
	jlong getStartTimeUs();
	jlong getDurationUs();
	ref<link::java::array<jbyte>> getData();

protected:

	SubtitleData(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline jint SubtitleData::getTrackIndex() { return call_method<SCAPIX_META_STRING("getTrackIndex"), jint>(); }
inline jlong SubtitleData::getStartTimeUs() { return call_method<SCAPIX_META_STRING("getStartTimeUs"), jlong>(); }
inline jlong SubtitleData::getDurationUs() { return call_method<SCAPIX_META_STRING("getDurationUs"), jlong>(); }
inline ref<link::java::array<jbyte>> SubtitleData::getData() { return call_method<SCAPIX_META_STRING("getData"), ref<link::java::array<jbyte>>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SUBTITLEDATA_H