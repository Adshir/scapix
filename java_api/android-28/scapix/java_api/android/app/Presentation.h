// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Dialog.h>

#ifndef SCAPIX_ANDROID_APP_PRESENTATION_H
#define SCAPIX_ANDROID_APP_PRESENTATION_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content::res { class Resources; }
namespace android::view { class Display; }

namespace android::app {

class Presentation : public object_base<SCAPIX_META_STRING("android/app/Presentation"),
	android::app::Dialog>
{
public:

	static ref<Presentation> new_object(ref<android::content::Context> outerContext, ref<android::view::Display> display);
	static ref<Presentation> new_object(ref<android::content::Context> outerContext, ref<android::view::Display> display, jint theme);
	ref<android::view::Display> getDisplay();
	ref<android::content::res::Resources> getResources();
	void show();
	void onDisplayRemoved();
	void onDisplayChanged();

protected:

	Presentation(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/view/Display.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Presentation> Presentation::new_object(ref<android::content::Context> outerContext, ref<android::view::Display> display) { return base_::new_object(outerContext, display); }
inline ref<Presentation> Presentation::new_object(ref<android::content::Context> outerContext, ref<android::view::Display> display, jint theme) { return base_::new_object(outerContext, display, theme); }
inline ref<android::view::Display> Presentation::getDisplay() { return call_method<SCAPIX_META_STRING("getDisplay"), ref<android::view::Display>>(); }
inline ref<android::content::res::Resources> Presentation::getResources() { return call_method<SCAPIX_META_STRING("getResources"), ref<android::content::res::Resources>>(); }
inline void Presentation::show() { return call_method<SCAPIX_META_STRING("show"), void>(); }
inline void Presentation::onDisplayRemoved() { return call_method<SCAPIX_META_STRING("onDisplayRemoved"), void>(); }
inline void Presentation::onDisplayChanged() { return call_method<SCAPIX_META_STRING("onDisplayChanged"), void>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_PRESENTATION_H