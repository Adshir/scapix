// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_R_MIPMAP_H
#define SCAPIX_ANDROID_R_MIPMAP_H

namespace scapix::java_api {


namespace android {

class R_mipmap : public object_base<SCAPIX_META_STRING("android/R$mipmap"),
	java::lang::Object>
{
public:

	static jint sym_def_app_icon();

	static ref<R_mipmap> new_object();

protected:

	R_mipmap(handle_type h) : base_(h) {}

};

} // namespace android
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android {

inline jint R_mipmap::sym_def_app_icon() { return get_static_field<SCAPIX_META_STRING("sym_def_app_icon"), jint>(); }
inline ref<R_mipmap> R_mipmap::new_object() { return base_::new_object(); }

} // namespace android
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_R_MIPMAP_H