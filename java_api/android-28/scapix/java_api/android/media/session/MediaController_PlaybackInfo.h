// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO_H
#define SCAPIX_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO_H

namespace scapix::java_api {

namespace android::media { class AudioAttributes; }

namespace android::media::session {

class MediaController_PlaybackInfo : public object_base<SCAPIX_META_STRING("android/media/session/MediaController$PlaybackInfo"),
	java::lang::Object>
{
public:

	static jint PLAYBACK_TYPE_LOCAL_();
	static jint PLAYBACK_TYPE_REMOTE_();

	jint getPlaybackType();
	ref<android::media::AudioAttributes> getAudioAttributes();
	jint getVolumeControl();
	jint getMaxVolume();
	jint getCurrentVolume();

protected:

	MediaController_PlaybackInfo(handle_type h) : base_(h) {}

};

} // namespace android::media::session
} // namespace scapix::java_api

#include <scapix/java_api/android/media/AudioAttributes.h>

namespace scapix::java_api {
namespace android::media::session {

inline jint MediaController_PlaybackInfo::PLAYBACK_TYPE_LOCAL_() { return get_static_field<SCAPIX_META_STRING("PLAYBACK_TYPE_LOCAL"), jint>(); }
inline jint MediaController_PlaybackInfo::PLAYBACK_TYPE_REMOTE_() { return get_static_field<SCAPIX_META_STRING("PLAYBACK_TYPE_REMOTE"), jint>(); }
inline jint MediaController_PlaybackInfo::getPlaybackType() { return call_method<SCAPIX_META_STRING("getPlaybackType"), jint>(); }
inline ref<android::media::AudioAttributes> MediaController_PlaybackInfo::getAudioAttributes() { return call_method<SCAPIX_META_STRING("getAudioAttributes"), ref<android::media::AudioAttributes>>(); }
inline jint MediaController_PlaybackInfo::getVolumeControl() { return call_method<SCAPIX_META_STRING("getVolumeControl"), jint>(); }
inline jint MediaController_PlaybackInfo::getMaxVolume() { return call_method<SCAPIX_META_STRING("getMaxVolume"), jint>(); }
inline jint MediaController_PlaybackInfo::getCurrentVolume() { return call_method<SCAPIX_META_STRING("getCurrentVolume"), jint>(); }

} // namespace android::media::session
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO_H