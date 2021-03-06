// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVRECORDINGCLIENT_H
#define SCAPIX_ANDROID_MEDIA_TV_TVRECORDINGCLIENT_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::media::tv { class TvRecordingClient_RecordingCallback; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::os { class Handler; }
namespace java::lang { class String; }

namespace android::media::tv {

class TvRecordingClient : public object_base<SCAPIX_META_STRING("android/media/tv/TvRecordingClient"),
	java::lang::Object>
{
public:

	using RecordingCallback = TvRecordingClient_RecordingCallback;

	static ref<TvRecordingClient> new_object(ref<android::content::Context> context, ref<java::lang::String> tag, ref<android::media::tv::TvRecordingClient_RecordingCallback> callback, ref<android::os::Handler> handler);
	void tune(ref<java::lang::String> inputId, ref<android::net::Uri> channelUri);
	void tune(ref<java::lang::String> inputId, ref<android::net::Uri> channelUri, ref<android::os::Bundle> params);
	void release();
	void startRecording(ref<android::net::Uri> programUri);
	void stopRecording();
	void sendAppPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data);

protected:

	TvRecordingClient(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/tv/TvRecordingClient_RecordingCallback.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<TvRecordingClient> TvRecordingClient::new_object(ref<android::content::Context> context, ref<java::lang::String> tag, ref<android::media::tv::TvRecordingClient_RecordingCallback> callback, ref<android::os::Handler> handler) { return base_::new_object(context, tag, callback, handler); }
inline void TvRecordingClient::tune(ref<java::lang::String> inputId, ref<android::net::Uri> channelUri) { return call_method<SCAPIX_META_STRING("tune"), void>(inputId, channelUri); }
inline void TvRecordingClient::tune(ref<java::lang::String> inputId, ref<android::net::Uri> channelUri, ref<android::os::Bundle> params) { return call_method<SCAPIX_META_STRING("tune"), void>(inputId, channelUri, params); }
inline void TvRecordingClient::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline void TvRecordingClient::startRecording(ref<android::net::Uri> programUri) { return call_method<SCAPIX_META_STRING("startRecording"), void>(programUri); }
inline void TvRecordingClient::stopRecording() { return call_method<SCAPIX_META_STRING("stopRecording"), void>(); }
inline void TvRecordingClient::sendAppPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data) { return call_method<SCAPIX_META_STRING("sendAppPrivateCommand"), void>(action, data); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVRECORDINGCLIENT_H
