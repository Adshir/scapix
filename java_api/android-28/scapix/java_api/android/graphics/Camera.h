// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_CAMERA_H
#define SCAPIX_ANDROID_GRAPHICS_CAMERA_H

namespace scapix::java_api {

namespace android::graphics { class Canvas; }
namespace android::graphics { class Matrix; }

namespace android::graphics {

class Camera : public object_base<SCAPIX_META_STRING("android/graphics/Camera"),
	java::lang::Object>
{
public:

	static ref<Camera> new_object();
	void save();
	void restore();
	void translate(jfloat p1, jfloat p2, jfloat p3);
	void rotateX(jfloat p1);
	void rotateY(jfloat p1);
	void rotateZ(jfloat p1);
	void rotate(jfloat p1, jfloat p2, jfloat p3);
	jfloat getLocationX();
	jfloat getLocationY();
	jfloat getLocationZ();
	void setLocation(jfloat p1, jfloat p2, jfloat p3);
	void getMatrix(ref<android::graphics::Matrix> matrix);
	void applyToCanvas(ref<android::graphics::Canvas> canvas);
	jfloat dotWithNormal(jfloat p1, jfloat p2, jfloat p3);

protected:

	Camera(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Matrix.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<Camera> Camera::new_object() { return base_::new_object(); }
inline void Camera::save() { return call_method<SCAPIX_META_STRING("save"), void>(); }
inline void Camera::restore() { return call_method<SCAPIX_META_STRING("restore"), void>(); }
inline void Camera::translate(jfloat p1, jfloat p2, jfloat p3) { return call_method<SCAPIX_META_STRING("translate"), void>(p1, p2, p3); }
inline void Camera::rotateX(jfloat p1) { return call_method<SCAPIX_META_STRING("rotateX"), void>(p1); }
inline void Camera::rotateY(jfloat p1) { return call_method<SCAPIX_META_STRING("rotateY"), void>(p1); }
inline void Camera::rotateZ(jfloat p1) { return call_method<SCAPIX_META_STRING("rotateZ"), void>(p1); }
inline void Camera::rotate(jfloat p1, jfloat p2, jfloat p3) { return call_method<SCAPIX_META_STRING("rotate"), void>(p1, p2, p3); }
inline jfloat Camera::getLocationX() { return call_method<SCAPIX_META_STRING("getLocationX"), jfloat>(); }
inline jfloat Camera::getLocationY() { return call_method<SCAPIX_META_STRING("getLocationY"), jfloat>(); }
inline jfloat Camera::getLocationZ() { return call_method<SCAPIX_META_STRING("getLocationZ"), jfloat>(); }
inline void Camera::setLocation(jfloat p1, jfloat p2, jfloat p3) { return call_method<SCAPIX_META_STRING("setLocation"), void>(p1, p2, p3); }
inline void Camera::getMatrix(ref<android::graphics::Matrix> matrix) { return call_method<SCAPIX_META_STRING("getMatrix"), void>(matrix); }
inline void Camera::applyToCanvas(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("applyToCanvas"), void>(canvas); }
inline jfloat Camera::dotWithNormal(jfloat p1, jfloat p2, jfloat p3) { return call_method<SCAPIX_META_STRING("dotWithNormal"), jfloat>(p1, p2, p3); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_CAMERA_H