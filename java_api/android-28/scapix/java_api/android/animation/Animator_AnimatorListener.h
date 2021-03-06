// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ANIMATION_ANIMATOR_ANIMATORLISTENER_H
#define SCAPIX_ANDROID_ANIMATION_ANIMATOR_ANIMATORLISTENER_H

namespace scapix::java_api {

namespace android::animation { class Animator; }

namespace android::animation {

class Animator_AnimatorListener : public object_base<SCAPIX_META_STRING("android/animation/Animator$AnimatorListener"),
	java::lang::Object>
{
public:

	void onAnimationStart(ref<android::animation::Animator> animation, jboolean isReverse);
	void onAnimationEnd(ref<android::animation::Animator> animation, jboolean isReverse);
	void onAnimationStart(ref<android::animation::Animator> p1);
	void onAnimationEnd(ref<android::animation::Animator> p1);
	void onAnimationCancel(ref<android::animation::Animator> p1);
	void onAnimationRepeat(ref<android::animation::Animator> p1);

protected:

	Animator_AnimatorListener(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/Animator.h>

namespace scapix::java_api {
namespace android::animation {

inline void Animator_AnimatorListener::onAnimationStart(ref<android::animation::Animator> animation, jboolean isReverse) { return call_method<SCAPIX_META_STRING("onAnimationStart"), void>(animation, isReverse); }
inline void Animator_AnimatorListener::onAnimationEnd(ref<android::animation::Animator> animation, jboolean isReverse) { return call_method<SCAPIX_META_STRING("onAnimationEnd"), void>(animation, isReverse); }
inline void Animator_AnimatorListener::onAnimationStart(ref<android::animation::Animator> p1) { return call_method<SCAPIX_META_STRING("onAnimationStart"), void>(p1); }
inline void Animator_AnimatorListener::onAnimationEnd(ref<android::animation::Animator> p1) { return call_method<SCAPIX_META_STRING("onAnimationEnd"), void>(p1); }
inline void Animator_AnimatorListener::onAnimationCancel(ref<android::animation::Animator> p1) { return call_method<SCAPIX_META_STRING("onAnimationCancel"), void>(p1); }
inline void Animator_AnimatorListener::onAnimationRepeat(ref<android::animation::Animator> p1) { return call_method<SCAPIX_META_STRING("onAnimationRepeat"), void>(p1); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_ANIMATOR_ANIMATORLISTENER_H
