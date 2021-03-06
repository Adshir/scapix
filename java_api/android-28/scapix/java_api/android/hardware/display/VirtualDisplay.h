// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY_H
#define SCAPIX_ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY_H

namespace scapix::java_api {

namespace android::view { class Display; }
namespace android::view { class Surface; }
namespace java::lang { class String; }
namespace android::hardware::display { class VirtualDisplay_Callback; }

namespace android::hardware::display {

class VirtualDisplay : public object_base<SCAPIX_META_STRING("android/hardware/display/VirtualDisplay"),
	java::lang::Object>
{
public:

	using Callback = VirtualDisplay_Callback;

	ref<android::view::Display> getDisplay();
	ref<android::view::Surface> getSurface();
	void setSurface(ref<android::view::Surface> surface);
	void resize(jint width, jint height, jint densityDpi);
	void release();
	ref<java::lang::String> toString();

protected:

	VirtualDisplay(handle_type h) : base_(h) {}

};

} // namespace android::hardware::display
} // namespace scapix::java_api

#include <scapix/java_api/android/view/Display.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::display {

inline ref<android::view::Display> VirtualDisplay::getDisplay() { return call_method<SCAPIX_META_STRING("getDisplay"), ref<android::view::Display>>(); }
inline ref<android::view::Surface> VirtualDisplay::getSurface() { return call_method<SCAPIX_META_STRING("getSurface"), ref<android::view::Surface>>(); }
inline void VirtualDisplay::setSurface(ref<android::view::Surface> surface) { return call_method<SCAPIX_META_STRING("setSurface"), void>(surface); }
inline void VirtualDisplay::resize(jint width, jint height, jint densityDpi) { return call_method<SCAPIX_META_STRING("resize"), void>(width, height, densityDpi); }
inline void VirtualDisplay::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline ref<java::lang::String> VirtualDisplay::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::hardware::display
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY_H
