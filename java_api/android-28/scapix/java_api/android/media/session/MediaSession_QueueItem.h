// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM_H
#define SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM_H

namespace scapix::java_api {

namespace android::media { class MediaDescription; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::media::session {

class MediaSession_QueueItem : public object_base<SCAPIX_META_STRING("android/media/session/MediaSession$QueueItem"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint UNKNOWN_ID_();

	static ref<MediaSession_QueueItem> new_object(ref<android::media::MediaDescription> description, jlong id);
	ref<android::media::MediaDescription> getDescription();
	jlong getQueueId();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint describeContents();
	ref<java::lang::String> toString();
	jboolean equals(ref<java::lang::Object> o);

protected:

	MediaSession_QueueItem(handle_type h) : base_(h) {}

};

} // namespace android::media::session
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaDescription.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::session {

inline ref<android::os::Parcelable_Creator> MediaSession_QueueItem::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint MediaSession_QueueItem::UNKNOWN_ID_() { return get_static_field<SCAPIX_META_STRING("UNKNOWN_ID"), jint>(); }
inline ref<MediaSession_QueueItem> MediaSession_QueueItem::new_object(ref<android::media::MediaDescription> description, jlong id) { return base_::new_object(description, id); }
inline ref<android::media::MediaDescription> MediaSession_QueueItem::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<android::media::MediaDescription>>(); }
inline jlong MediaSession_QueueItem::getQueueId() { return call_method<SCAPIX_META_STRING("getQueueId"), jlong>(); }
inline void MediaSession_QueueItem::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint MediaSession_QueueItem::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline ref<java::lang::String> MediaSession_QueueItem::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean MediaSession_QueueItem::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }

} // namespace android::media::session
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SESSION_MEDIASESSION_QUEUEITEM_H
