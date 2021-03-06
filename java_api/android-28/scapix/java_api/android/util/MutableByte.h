// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_MUTABLEBYTE_H
#define SCAPIX_ANDROID_UTIL_MUTABLEBYTE_H

namespace scapix::java_api {
namespace android::util {

class MutableByte : public object_base<SCAPIX_META_STRING("android/util/MutableByte"),
	java::lang::Object>
{
public:

	jbyte value();
	void value(jbyte);

	static ref<MutableByte> new_object(jbyte value);

protected:

	MutableByte(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::util {

inline jbyte MutableByte::value() { return get_field<SCAPIX_META_STRING("value"), jbyte>(); }
inline void MutableByte::value(jbyte v) { set_field<SCAPIX_META_STRING("value"), jbyte>(v); }
inline ref<MutableByte> MutableByte::new_object(jbyte value) { return base_::new_object(value); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_MUTABLEBYTE_H
