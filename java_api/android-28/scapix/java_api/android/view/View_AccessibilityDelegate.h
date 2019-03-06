// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEW_ACCESSIBILITYDELEGATE_H
#define SCAPIX_ANDROID_VIEW_VIEW_ACCESSIBILITYDELEGATE_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::view { class View; }
namespace android::view { class ViewGroup; }
namespace android::view::accessibility { class AccessibilityEvent; }
namespace android::view::accessibility { class AccessibilityNodeInfo; }
namespace android::view::accessibility { class AccessibilityNodeProvider; }
namespace java::lang { class String; }

namespace android::view {

class View_AccessibilityDelegate : public object_base<SCAPIX_META_STRING("android/view/View$AccessibilityDelegate"),
	java::lang::Object>
{
public:

	static ref<View_AccessibilityDelegate> new_object();
	void sendAccessibilityEvent(ref<android::view::View> host, jint eventType);
	jboolean performAccessibilityAction(ref<android::view::View> host, jint action, ref<android::os::Bundle> args);
	void sendAccessibilityEventUnchecked(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event);
	jboolean dispatchPopulateAccessibilityEvent(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event);
	void onPopulateAccessibilityEvent(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event);
	void onInitializeAccessibilityEvent(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event);
	void onInitializeAccessibilityNodeInfo(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityNodeInfo> info);
	void addExtraDataToAccessibilityNodeInfo(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityNodeInfo> info, ref<java::lang::String> extraDataKey, ref<android::os::Bundle> arguments);
	jboolean onRequestSendAccessibilityEvent(ref<android::view::ViewGroup> host, ref<android::view::View> child, ref<android::view::accessibility::AccessibilityEvent> event);
	ref<android::view::accessibility::AccessibilityNodeProvider> getAccessibilityNodeProvider(ref<android::view::View> host);

protected:

	View_AccessibilityDelegate(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeProvider.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view {

inline ref<View_AccessibilityDelegate> View_AccessibilityDelegate::new_object() { return base_::new_object(); }
inline void View_AccessibilityDelegate::sendAccessibilityEvent(ref<android::view::View> host, jint eventType) { return call_method<SCAPIX_META_STRING("sendAccessibilityEvent"), void>(host, eventType); }
inline jboolean View_AccessibilityDelegate::performAccessibilityAction(ref<android::view::View> host, jint action, ref<android::os::Bundle> args) { return call_method<SCAPIX_META_STRING("performAccessibilityAction"), jboolean>(host, action, args); }
inline void View_AccessibilityDelegate::sendAccessibilityEventUnchecked(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<SCAPIX_META_STRING("sendAccessibilityEventUnchecked"), void>(host, event); }
inline jboolean View_AccessibilityDelegate::dispatchPopulateAccessibilityEvent(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<SCAPIX_META_STRING("dispatchPopulateAccessibilityEvent"), jboolean>(host, event); }
inline void View_AccessibilityDelegate::onPopulateAccessibilityEvent(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<SCAPIX_META_STRING("onPopulateAccessibilityEvent"), void>(host, event); }
inline void View_AccessibilityDelegate::onInitializeAccessibilityEvent(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<SCAPIX_META_STRING("onInitializeAccessibilityEvent"), void>(host, event); }
inline void View_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<SCAPIX_META_STRING("onInitializeAccessibilityNodeInfo"), void>(host, info); }
inline void View_AccessibilityDelegate::addExtraDataToAccessibilityNodeInfo(ref<android::view::View> host, ref<android::view::accessibility::AccessibilityNodeInfo> info, ref<java::lang::String> extraDataKey, ref<android::os::Bundle> arguments) { return call_method<SCAPIX_META_STRING("addExtraDataToAccessibilityNodeInfo"), void>(host, info, extraDataKey, arguments); }
inline jboolean View_AccessibilityDelegate::onRequestSendAccessibilityEvent(ref<android::view::ViewGroup> host, ref<android::view::View> child, ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<SCAPIX_META_STRING("onRequestSendAccessibilityEvent"), jboolean>(host, child, event); }
inline ref<android::view::accessibility::AccessibilityNodeProvider> View_AccessibilityDelegate::getAccessibilityNodeProvider(ref<android::view::View> host) { return call_method<SCAPIX_META_STRING("getAccessibilityNodeProvider"), ref<android::view::accessibility::AccessibilityNodeProvider>>(host); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEW_ACCESSIBILITYDELEGATE_H