// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/opengl/EGLObjectHandle.h>

#ifndef SCAPIX_ANDROID_OPENGL_EGLCONFIG_H
#define SCAPIX_ANDROID_OPENGL_EGLCONFIG_H

namespace scapix::java_api {

namespace java::lang { class Object; }

namespace android::opengl {

class EGLConfig : public object_base<SCAPIX_META_STRING("android/opengl/EGLConfig"),
	android::opengl::EGLObjectHandle>
{
public:

	jboolean equals(ref<java::lang::Object> o);

protected:

	EGLConfig(handle_type h) : base_(h) {}

};

} // namespace android::opengl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>

namespace scapix::java_api {
namespace android::opengl {

inline jboolean EGLConfig::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }

} // namespace android::opengl
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OPENGL_EGLCONFIG_H