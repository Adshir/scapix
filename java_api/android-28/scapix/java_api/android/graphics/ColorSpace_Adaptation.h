// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_COLORSPACE_ADAPTATION_H
#define SCAPIX_ANDROID_GRAPHICS_COLORSPACE_ADAPTATION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::graphics {

class ColorSpace_Adaptation : public object_base<SCAPIX_META_STRING("android/graphics/ColorSpace$Adaptation"),
	java::lang::Enum>
{
public:

	static ref<android::graphics::ColorSpace_Adaptation> BRADFORD_();
	static ref<android::graphics::ColorSpace_Adaptation> VON_KRIES_();
	static ref<android::graphics::ColorSpace_Adaptation> CIECAT02_();

	static ref<link::java::array<android::graphics::ColorSpace_Adaptation>> values();
	static ref<android::graphics::ColorSpace_Adaptation> valueOf(ref<java::lang::String> name);

protected:

	ColorSpace_Adaptation(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::ColorSpace_Adaptation> ColorSpace_Adaptation::BRADFORD_() { return get_static_field<SCAPIX_META_STRING("BRADFORD"), ref<android::graphics::ColorSpace_Adaptation>>(); }
inline ref<android::graphics::ColorSpace_Adaptation> ColorSpace_Adaptation::VON_KRIES_() { return get_static_field<SCAPIX_META_STRING("VON_KRIES"), ref<android::graphics::ColorSpace_Adaptation>>(); }
inline ref<android::graphics::ColorSpace_Adaptation> ColorSpace_Adaptation::CIECAT02_() { return get_static_field<SCAPIX_META_STRING("CIECAT02"), ref<android::graphics::ColorSpace_Adaptation>>(); }
inline ref<link::java::array<android::graphics::ColorSpace_Adaptation>> ColorSpace_Adaptation::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::graphics::ColorSpace_Adaptation>>>(); }
inline ref<android::graphics::ColorSpace_Adaptation> ColorSpace_Adaptation::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::ColorSpace_Adaptation>>(name); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_COLORSPACE_ADAPTATION_H