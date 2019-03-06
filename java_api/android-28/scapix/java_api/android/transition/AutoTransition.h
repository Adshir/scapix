// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/transition/TransitionSet.h>

#ifndef SCAPIX_ANDROID_TRANSITION_AUTOTRANSITION_H
#define SCAPIX_ANDROID_TRANSITION_AUTOTRANSITION_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }

namespace android::transition {

class AutoTransition : public object_base<SCAPIX_META_STRING("android/transition/AutoTransition"),
	android::transition::TransitionSet>
{
public:

	static ref<AutoTransition> new_object();
	static ref<AutoTransition> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);

protected:

	AutoTransition(handle_type h) : base_(h) {}

};

} // namespace android::transition
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::transition {

inline ref<AutoTransition> AutoTransition::new_object() { return base_::new_object(); }
inline ref<AutoTransition> AutoTransition::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }

} // namespace android::transition
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TRANSITION_AUTOTRANSITION_H