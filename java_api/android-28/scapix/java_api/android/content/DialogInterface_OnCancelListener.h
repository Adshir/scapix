// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONCANCELLISTENER_H
#define SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONCANCELLISTENER_H

namespace scapix::java_api {

namespace android::content { class DialogInterface; }

namespace android::content {

class DialogInterface_OnCancelListener : public object_base<SCAPIX_META_STRING("android/content/DialogInterface$OnCancelListener"),
	java::lang::Object>
{
public:

	void onCancel(ref<android::content::DialogInterface> p1);

protected:

	DialogInterface_OnCancelListener(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/DialogInterface.h>

namespace scapix::java_api {
namespace android::content {

inline void DialogInterface_OnCancelListener::onCancel(ref<android::content::DialogInterface> p1) { return call_method<SCAPIX_META_STRING("onCancel"), void>(p1); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_DIALOGINTERFACE_ONCANCELLISTENER_H