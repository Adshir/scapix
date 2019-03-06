// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_INT3_H
#define SCAPIX_ANDROID_RENDERSCRIPT_INT3_H

namespace scapix::java_api {
namespace android::renderscript {

class Int3 : public object_base<SCAPIX_META_STRING("android/renderscript/Int3"),
	java::lang::Object>
{
public:

	jint x();
	void x(jint);
	jint y();
	void y(jint);
	jint z();
	void z(jint);

	static ref<Int3> new_object();
	static ref<Int3> new_object(jint x, jint y, jint z);

protected:

	Int3(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::renderscript {

inline jint Int3::x() { return get_field<SCAPIX_META_STRING("x"), jint>(); }
inline void Int3::x(jint v) { set_field<SCAPIX_META_STRING("x"), jint>(v); }
inline jint Int3::y() { return get_field<SCAPIX_META_STRING("y"), jint>(); }
inline void Int3::y(jint v) { set_field<SCAPIX_META_STRING("y"), jint>(v); }
inline jint Int3::z() { return get_field<SCAPIX_META_STRING("z"), jint>(); }
inline void Int3::z(jint v) { set_field<SCAPIX_META_STRING("z"), jint>(v); }
inline ref<Int3> Int3::new_object() { return base_::new_object(); }
inline ref<Int3> Int3::new_object(jint x, jint y, jint z) { return base_::new_object(x, y, z); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_INT3_H