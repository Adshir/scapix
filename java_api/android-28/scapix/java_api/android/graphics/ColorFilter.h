// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_COLORFILTER_H
#define SCAPIX_ANDROID_GRAPHICS_COLORFILTER_H

namespace scapix::java_api {
namespace android::graphics {

class ColorFilter : public object_base<SCAPIX_META_STRING("android/graphics/ColorFilter"),
	java::lang::Object>
{
public:

	static ref<ColorFilter> new_object();

protected:

	ColorFilter(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::graphics {

inline ref<ColorFilter> ColorFilter::new_object() { return base_::new_object(); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_COLORFILTER_H