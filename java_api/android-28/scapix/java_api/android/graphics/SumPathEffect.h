// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/PathEffect.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_SUMPATHEFFECT_H
#define SCAPIX_ANDROID_GRAPHICS_SUMPATHEFFECT_H

namespace scapix::java_api {
namespace android::graphics {

class SumPathEffect : public object_base<SCAPIX_META_STRING("android/graphics/SumPathEffect"),
	android::graphics::PathEffect>
{
public:

	static ref<SumPathEffect> new_object(ref<android::graphics::PathEffect> first, ref<android::graphics::PathEffect> second);

protected:

	SumPathEffect(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::graphics {

inline ref<SumPathEffect> SumPathEffect::new_object(ref<android::graphics::PathEffect> first, ref<android::graphics::PathEffect> second) { return base_::new_object(first, second); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_SUMPATHEFFECT_H