// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_R_ARRAY_H
#define SCAPIX_ANDROID_R_ARRAY_H

namespace scapix::java_api {


namespace android {

class R_array : public object_base<SCAPIX_META_STRING("android/R$array"),
	java::lang::Object>
{
public:

	static jint emailAddressTypes();
	static jint imProtocols();
	static jint organizationTypes();
	static jint phoneTypes();
	static jint postalAddressTypes();

	static ref<R_array> new_object();

protected:

	R_array(handle_type h) : base_(h) {}

};

} // namespace android
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android {

inline jint R_array::emailAddressTypes() { return get_static_field<SCAPIX_META_STRING("emailAddressTypes"), jint>(); }
inline jint R_array::imProtocols() { return get_static_field<SCAPIX_META_STRING("imProtocols"), jint>(); }
inline jint R_array::organizationTypes() { return get_static_field<SCAPIX_META_STRING("organizationTypes"), jint>(); }
inline jint R_array::phoneTypes() { return get_static_field<SCAPIX_META_STRING("phoneTypes"), jint>(); }
inline jint R_array::postalAddressTypes() { return get_static_field<SCAPIX_META_STRING("postalAddressTypes"), jint>(); }
inline ref<R_array> R_array::new_object() { return base_::new_object(); }

} // namespace android
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_R_ARRAY_H
