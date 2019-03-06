// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PATH_FILLTYPE_H
#define SCAPIX_ANDROID_GRAPHICS_PATH_FILLTYPE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::graphics {

class Path_FillType : public object_base<SCAPIX_META_STRING("android/graphics/Path$FillType"),
	java::lang::Enum>
{
public:

	static ref<android::graphics::Path_FillType> WINDING_();
	static ref<android::graphics::Path_FillType> EVEN_ODD_();
	static ref<android::graphics::Path_FillType> INVERSE_WINDING_();
	static ref<android::graphics::Path_FillType> INVERSE_EVEN_ODD_();

	static ref<link::java::array<android::graphics::Path_FillType>> values();
	static ref<android::graphics::Path_FillType> valueOf(ref<java::lang::String> name);

protected:

	Path_FillType(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::Path_FillType> Path_FillType::WINDING_() { return get_static_field<SCAPIX_META_STRING("WINDING"), ref<android::graphics::Path_FillType>>(); }
inline ref<android::graphics::Path_FillType> Path_FillType::EVEN_ODD_() { return get_static_field<SCAPIX_META_STRING("EVEN_ODD"), ref<android::graphics::Path_FillType>>(); }
inline ref<android::graphics::Path_FillType> Path_FillType::INVERSE_WINDING_() { return get_static_field<SCAPIX_META_STRING("INVERSE_WINDING"), ref<android::graphics::Path_FillType>>(); }
inline ref<android::graphics::Path_FillType> Path_FillType::INVERSE_EVEN_ODD_() { return get_static_field<SCAPIX_META_STRING("INVERSE_EVEN_ODD"), ref<android::graphics::Path_FillType>>(); }
inline ref<link::java::array<android::graphics::Path_FillType>> Path_FillType::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::graphics::Path_FillType>>>(); }
inline ref<android::graphics::Path_FillType> Path_FillType::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Path_FillType>>(name); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PATH_FILLTYPE_H