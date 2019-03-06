// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERSCROLLLISTENER_H
#define SCAPIX_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERSCROLLLISTENER_H

namespace scapix::java_api {


namespace android::widget {

class SlidingDrawer_OnDrawerScrollListener : public object_base<SCAPIX_META_STRING("android/widget/SlidingDrawer$OnDrawerScrollListener"),
	java::lang::Object>
{
public:

	void onScrollStarted();
	void onScrollEnded();

protected:

	SlidingDrawer_OnDrawerScrollListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::widget {

inline void SlidingDrawer_OnDrawerScrollListener::onScrollStarted() { return call_method<SCAPIX_META_STRING("onScrollStarted"), void>(); }
inline void SlidingDrawer_OnDrawerScrollListener::onScrollEnded() { return call_method<SCAPIX_META_STRING("onScrollEnded"), void>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SLIDINGDRAWER_ONDRAWERSCROLLLISTENER_H