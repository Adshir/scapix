// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDDISMISSCALLBACK_H
#define SCAPIX_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDDISMISSCALLBACK_H

namespace scapix::java_api {


namespace android::app {

class KeyguardManager_KeyguardDismissCallback : public object_base<SCAPIX_META_STRING("android/app/KeyguardManager$KeyguardDismissCallback"),
	java::lang::Object>
{
public:

	static ref<KeyguardManager_KeyguardDismissCallback> new_object();
	void onDismissError();
	void onDismissSucceeded();
	void onDismissCancelled();

protected:

	KeyguardManager_KeyguardDismissCallback(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::app {

inline ref<KeyguardManager_KeyguardDismissCallback> KeyguardManager_KeyguardDismissCallback::new_object() { return base_::new_object(); }
inline void KeyguardManager_KeyguardDismissCallback::onDismissError() { return call_method<SCAPIX_META_STRING("onDismissError"), void>(); }
inline void KeyguardManager_KeyguardDismissCallback::onDismissSucceeded() { return call_method<SCAPIX_META_STRING("onDismissSucceeded"), void>(); }
inline void KeyguardManager_KeyguardDismissCallback::onDismissCancelled() { return call_method<SCAPIX_META_STRING("onDismissCancelled"), void>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDDISMISSCALLBACK_H
