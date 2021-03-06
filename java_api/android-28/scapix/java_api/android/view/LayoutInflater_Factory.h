// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_LAYOUTINFLATER_FACTORY_H
#define SCAPIX_ANDROID_VIEW_LAYOUTINFLATER_FACTORY_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class View; }
namespace java::lang { class String; }

namespace android::view {

class LayoutInflater_Factory : public object_base<SCAPIX_META_STRING("android/view/LayoutInflater$Factory"),
	java::lang::Object>
{
public:

	ref<android::view::View> onCreateView(ref<java::lang::String> p1, ref<android::content::Context> p2, ref<android::util::AttributeSet> p3);

protected:

	LayoutInflater_Factory(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view {

inline ref<android::view::View> LayoutInflater_Factory::onCreateView(ref<java::lang::String> p1, ref<android::content::Context> p2, ref<android::util::AttributeSet> p3) { return call_method<SCAPIX_META_STRING("onCreateView"), ref<android::view::View>>(p1, p2, p3); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_LAYOUTINFLATER_FACTORY_H
