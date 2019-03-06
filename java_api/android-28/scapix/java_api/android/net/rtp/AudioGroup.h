// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_RTP_AUDIOGROUP_H
#define SCAPIX_ANDROID_NET_RTP_AUDIOGROUP_H

namespace scapix::java_api {

namespace android::net::rtp { class AudioStream; }

namespace android::net::rtp {

class AudioGroup : public object_base<SCAPIX_META_STRING("android/net/rtp/AudioGroup"),
	java::lang::Object>
{
public:

	static jint MODE_ECHO_SUPPRESSION_();
	static jint MODE_MUTED_();
	static jint MODE_NORMAL_();
	static jint MODE_ON_HOLD_();

	static ref<AudioGroup> new_object();
	ref<link::java::array<android::net::rtp::AudioStream>> getStreams();
	jint getMode();
	void setMode(jint mode);
	void sendDtmf(jint event);
	void clear();

protected:

	AudioGroup(handle_type h) : base_(h) {}

};

} // namespace android::net::rtp
} // namespace scapix::java_api

#include <scapix/java_api/android/net/rtp/AudioStream.h>

namespace scapix::java_api {
namespace android::net::rtp {

inline jint AudioGroup::MODE_ECHO_SUPPRESSION_() { return get_static_field<SCAPIX_META_STRING("MODE_ECHO_SUPPRESSION"), jint>(); }
inline jint AudioGroup::MODE_MUTED_() { return get_static_field<SCAPIX_META_STRING("MODE_MUTED"), jint>(); }
inline jint AudioGroup::MODE_NORMAL_() { return get_static_field<SCAPIX_META_STRING("MODE_NORMAL"), jint>(); }
inline jint AudioGroup::MODE_ON_HOLD_() { return get_static_field<SCAPIX_META_STRING("MODE_ON_HOLD"), jint>(); }
inline ref<AudioGroup> AudioGroup::new_object() { return base_::new_object(); }
inline ref<link::java::array<android::net::rtp::AudioStream>> AudioGroup::getStreams() { return call_method<SCAPIX_META_STRING("getStreams"), ref<link::java::array<android::net::rtp::AudioStream>>>(); }
inline jint AudioGroup::getMode() { return call_method<SCAPIX_META_STRING("getMode"), jint>(); }
inline void AudioGroup::setMode(jint mode) { return call_method<SCAPIX_META_STRING("setMode"), void>(mode); }
inline void AudioGroup::sendDtmf(jint event) { return call_method<SCAPIX_META_STRING("sendDtmf"), void>(event); }
inline void AudioGroup::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }

} // namespace android::net::rtp
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_RTP_AUDIOGROUP_H