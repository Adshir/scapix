// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/animation/BaseInterpolator.h>

#ifndef SCAPIX_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR_H
#define SCAPIX_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }

namespace android::view::animation {

class AnticipateInterpolator : public object_base<SCAPIX_META_STRING("android/view/animation/AnticipateInterpolator"),
	android::view::animation::BaseInterpolator>
{
public:

	static ref<AnticipateInterpolator> new_object();
	static ref<AnticipateInterpolator> new_object(jfloat tension);
	static ref<AnticipateInterpolator> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	jfloat getInterpolation(jfloat t);

protected:

	AnticipateInterpolator(handle_type h) : base_(h) {}

};

} // namespace android::view::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::view::animation {

inline ref<AnticipateInterpolator> AnticipateInterpolator::new_object() { return base_::new_object(); }
inline ref<AnticipateInterpolator> AnticipateInterpolator::new_object(jfloat tension) { return base_::new_object(tension); }
inline ref<AnticipateInterpolator> AnticipateInterpolator::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline jfloat AnticipateInterpolator::getInterpolation(jfloat t) { return call_method<SCAPIX_META_STRING("getInterpolation"), jfloat>(t); }

} // namespace android::view::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR_H