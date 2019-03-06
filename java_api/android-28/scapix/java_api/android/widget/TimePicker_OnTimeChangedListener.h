// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_TIMEPICKER_ONTIMECHANGEDLISTENER_H
#define SCAPIX_ANDROID_WIDGET_TIMEPICKER_ONTIMECHANGEDLISTENER_H

namespace scapix::java_api {

namespace android::widget { class TimePicker; }

namespace android::widget {

class TimePicker_OnTimeChangedListener : public object_base<SCAPIX_META_STRING("android/widget/TimePicker$OnTimeChangedListener"),
	java::lang::Object>
{
public:

	void onTimeChanged(ref<android::widget::TimePicker> p1, jint p2, jint p3);

protected:

	TimePicker_OnTimeChangedListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/widget/TimePicker.h>

namespace scapix::java_api {
namespace android::widget {

inline void TimePicker_OnTimeChangedListener::onTimeChanged(ref<android::widget::TimePicker> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("onTimeChanged"), void>(p1, p2, p3); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_TIMEPICKER_ONTIMECHANGEDLISTENER_H