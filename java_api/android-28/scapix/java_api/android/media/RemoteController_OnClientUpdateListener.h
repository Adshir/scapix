// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER_H
#define SCAPIX_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER_H

namespace scapix::java_api {

namespace android::media { class RemoteController_MetadataEditor; }

namespace android::media {

class RemoteController_OnClientUpdateListener : public object_base<SCAPIX_META_STRING("android/media/RemoteController$OnClientUpdateListener"),
	java::lang::Object>
{
public:

	void onClientChange(jboolean p1);
	void onClientPlaybackStateUpdate(jint p1);
	void onClientPlaybackStateUpdate(jint p1, jlong p2, jlong p3, jfloat p4);
	void onClientTransportControlUpdate(jint p1);
	void onClientMetadataUpdate(ref<android::media::RemoteController_MetadataEditor> p1);

protected:

	RemoteController_OnClientUpdateListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/RemoteController_MetadataEditor.h>

namespace scapix::java_api {
namespace android::media {

inline void RemoteController_OnClientUpdateListener::onClientChange(jboolean p1) { return call_method<SCAPIX_META_STRING("onClientChange"), void>(p1); }
inline void RemoteController_OnClientUpdateListener::onClientPlaybackStateUpdate(jint p1) { return call_method<SCAPIX_META_STRING("onClientPlaybackStateUpdate"), void>(p1); }
inline void RemoteController_OnClientUpdateListener::onClientPlaybackStateUpdate(jint p1, jlong p2, jlong p3, jfloat p4) { return call_method<SCAPIX_META_STRING("onClientPlaybackStateUpdate"), void>(p1, p2, p3, p4); }
inline void RemoteController_OnClientUpdateListener::onClientTransportControlUpdate(jint p1) { return call_method<SCAPIX_META_STRING("onClientTransportControlUpdate"), void>(p1); }
inline void RemoteController_OnClientUpdateListener::onClientMetadataUpdate(ref<android::media::RemoteController_MetadataEditor> p1) { return call_method<SCAPIX_META_STRING("onClientMetadataUpdate"), void>(p1); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER_H