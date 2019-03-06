// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER_H
#define SCAPIX_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER_H

namespace scapix::java_api {

namespace android::net::wifi::rtt { class RangingRequest; }
namespace android::net::wifi::rtt { class RangingResultCallback; }
namespace java::lang { class String; }
namespace java::util::concurrent { class Executor; }

namespace android::net::wifi::rtt {

class WifiRttManager : public object_base<SCAPIX_META_STRING("android/net/wifi/rtt/WifiRttManager"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ACTION_WIFI_RTT_STATE_CHANGED_();

	jboolean isAvailable();
	void startRanging(ref<android::net::wifi::rtt::RangingRequest> request, ref<java::util::concurrent::Executor> executor, ref<android::net::wifi::rtt::RangingResultCallback> callback);

protected:

	WifiRttManager(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::rtt
} // namespace scapix::java_api

#include <scapix/java_api/android/net/wifi/rtt/RangingRequest.h>
#include <scapix/java_api/android/net/wifi/rtt/RangingResultCallback.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

namespace scapix::java_api {
namespace android::net::wifi::rtt {

inline ref<java::lang::String> WifiRttManager::ACTION_WIFI_RTT_STATE_CHANGED_() { return get_static_field<SCAPIX_META_STRING("ACTION_WIFI_RTT_STATE_CHANGED"), ref<java::lang::String>>(); }
inline jboolean WifiRttManager::isAvailable() { return call_method<SCAPIX_META_STRING("isAvailable"), jboolean>(); }
inline void WifiRttManager::startRanging(ref<android::net::wifi::rtt::RangingRequest> request, ref<java::util::concurrent::Executor> executor, ref<android::net::wifi::rtt::RangingResultCallback> callback) { return call_method<SCAPIX_META_STRING("startRanging"), void>(request, executor, callback); }

} // namespace android::net::wifi::rtt
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_RTT_WIFIRTTMANAGER_H