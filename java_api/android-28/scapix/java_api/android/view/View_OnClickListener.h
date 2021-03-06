// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEW_ONCLICKLISTENER_H
#define SCAPIX_ANDROID_VIEW_VIEW_ONCLICKLISTENER_H

namespace scapix::java_api {

namespace android::view { class View; }

namespace android::view {

class View_OnClickListener : public object_base<SCAPIX_META_STRING("android/view/View$OnClickListener"),
	java::lang::Object>
{
public:

	void onClick(ref<android::view::View> p1);

protected:

	View_OnClickListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/view/View.h>

namespace scapix::java_api {
namespace android::view {

inline void View_OnClickListener::onClick(ref<android::view::View> p1) { return call_method<SCAPIX_META_STRING("onClick"), void>(p1); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEW_ONCLICKLISTENER_H
