// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_ANDROID_SERVICE_VR_VRLISTENERSERVICE_H
#define SCAPIX_ANDROID_SERVICE_VR_VRLISTENERSERVICE_H

namespace scapix::java_api {

namespace android::content { class ComponentName; }
namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::os { class IBinder; }
namespace java::lang { class String; }

namespace android::service::vr {

class VrListenerService : public object_base<SCAPIX_META_STRING("android/service/vr/VrListenerService"),
	android::app::Service>
{
public:

	static ref<java::lang::String> SERVICE_INTERFACE_();

	static ref<VrListenerService> new_object();
	ref<android::os::IBinder> onBind(ref<android::content::Intent> intent);
	void onCurrentVrActivityChanged(ref<android::content::ComponentName> component);
	static jboolean isVrModePackageEnabled(ref<android::content::Context> context, ref<android::content::ComponentName> requestedComponent);

protected:

	VrListenerService(handle_type h) : base_(h) {}

};

} // namespace android::service::vr
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::vr {

inline ref<java::lang::String> VrListenerService::SERVICE_INTERFACE_() { return get_static_field<SCAPIX_META_STRING("SERVICE_INTERFACE"), ref<java::lang::String>>(); }
inline ref<VrListenerService> VrListenerService::new_object() { return base_::new_object(); }
inline ref<android::os::IBinder> VrListenerService::onBind(ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("onBind"), ref<android::os::IBinder>>(intent); }
inline void VrListenerService::onCurrentVrActivityChanged(ref<android::content::ComponentName> component) { return call_method<SCAPIX_META_STRING("onCurrentVrActivityChanged"), void>(component); }
inline jboolean VrListenerService::isVrModePackageEnabled(ref<android::content::Context> context, ref<android::content::ComponentName> requestedComponent) { return call_static_method<SCAPIX_META_STRING("isVrModePackageEnabled"), jboolean>(context, requestedComponent); }

} // namespace android::service::vr
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_VR_VRLISTENERSERVICE_H