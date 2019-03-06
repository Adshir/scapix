// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/Adapter.h>

#ifndef SCAPIX_ANDROID_WIDGET_SPINNERADAPTER_H
#define SCAPIX_ANDROID_WIDGET_SPINNERADAPTER_H

namespace scapix::java_api {

namespace android::view { class View; }
namespace android::view { class ViewGroup; }

namespace android::widget {

class SpinnerAdapter : public object_base<SCAPIX_META_STRING("android/widget/SpinnerAdapter"),
	java::lang::Object,
	android::widget::Adapter>
{
public:

	ref<android::view::View> getDropDownView(jint p1, ref<android::view::View> p2, ref<android::view::ViewGroup> p3);

protected:

	SpinnerAdapter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<android::view::View> SpinnerAdapter::getDropDownView(jint p1, ref<android::view::View> p2, ref<android::view::ViewGroup> p3) { return call_method<SCAPIX_META_STRING("getDropDownView"), ref<android::view::View>>(p1, p2, p3); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SPINNERADAPTER_H