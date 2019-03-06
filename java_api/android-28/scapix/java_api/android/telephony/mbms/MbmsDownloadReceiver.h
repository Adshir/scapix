// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/content/BroadcastReceiver.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADRECEIVER_H
#define SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADRECEIVER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content { class Intent; }

namespace android::telephony::mbms {

class MbmsDownloadReceiver : public object_base<SCAPIX_META_STRING("android/telephony/mbms/MbmsDownloadReceiver"),
	android::content::BroadcastReceiver>
{
public:

	static ref<MbmsDownloadReceiver> new_object();
	void onReceive(ref<android::content::Context> context, ref<android::content::Intent> intent);

protected:

	MbmsDownloadReceiver(handle_type h) : base_(h) {}

};

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>

namespace scapix::java_api {
namespace android::telephony::mbms {

inline ref<MbmsDownloadReceiver> MbmsDownloadReceiver::new_object() { return base_::new_object(); }
inline void MbmsDownloadReceiver::onReceive(ref<android::content::Context> context, ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("onReceive"), void>(context, intent); }

} // namespace android::telephony::mbms
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADRECEIVER_H