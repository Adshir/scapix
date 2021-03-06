// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_ANDROID_VIEW_VIEWDEBUG_CAPTUREDVIEWPROPERTY_H
#define SCAPIX_ANDROID_VIEW_VIEWDEBUG_CAPTUREDVIEWPROPERTY_H

namespace scapix::java_api {


namespace android::view {

class ViewDebug_CapturedViewProperty : public object_base<SCAPIX_META_STRING("android/view/ViewDebug$CapturedViewProperty"),
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jboolean retrieveReturn();

protected:

	ViewDebug_CapturedViewProperty(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::view {

inline jboolean ViewDebug_CapturedViewProperty::retrieveReturn() { return call_method<SCAPIX_META_STRING("retrieveReturn"), jboolean>(); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_VIEWDEBUG_CAPTUREDVIEWPROPERTY_H
