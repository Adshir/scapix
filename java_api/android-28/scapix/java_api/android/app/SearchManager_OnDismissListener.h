// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_SEARCHMANAGER_ONDISMISSLISTENER_H
#define SCAPIX_ANDROID_APP_SEARCHMANAGER_ONDISMISSLISTENER_H

namespace scapix::java_api {


namespace android::app {

class SearchManager_OnDismissListener : public object_base<SCAPIX_META_STRING("android/app/SearchManager$OnDismissListener"),
	java::lang::Object>
{
public:

	void onDismiss();

protected:

	SearchManager_OnDismissListener(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::app {

inline void SearchManager_OnDismissListener::onDismiss() { return call_method<SCAPIX_META_STRING("onDismiss"), void>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_SEARCHMANAGER_ONDISMISSLISTENER_H