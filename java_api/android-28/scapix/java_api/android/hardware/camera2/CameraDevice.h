// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_H

namespace scapix::java_api {

namespace android::hardware::camera2 { class CameraCaptureSession_StateCallback; }
namespace android::hardware::camera2 { class CaptureRequest_Builder; }
namespace android::hardware::camera2 { class TotalCaptureResult; }
namespace android::hardware::camera2::params { class InputConfiguration; }
namespace android::hardware::camera2::params { class SessionConfiguration; }
namespace android::os { class Handler; }
namespace java::lang { class String; }
namespace java::util { class List; }
namespace java::util { class Set; }
namespace android::hardware::camera2 { class CameraDevice_StateCallback; }

namespace android::hardware::camera2 {

class CameraDevice : public object_base<SCAPIX_META_STRING("android/hardware/camera2/CameraDevice"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using StateCallback = CameraDevice_StateCallback;

	static jint TEMPLATE_MANUAL_();
	static jint TEMPLATE_PREVIEW_();
	static jint TEMPLATE_RECORD_();
	static jint TEMPLATE_STILL_CAPTURE_();
	static jint TEMPLATE_VIDEO_SNAPSHOT_();
	static jint TEMPLATE_ZERO_SHUTTER_LAG_();

	ref<java::lang::String> getId();
	void createCaptureSession(ref<java::util::List> p1, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, ref<android::os::Handler> p3);
	void createCaptureSessionByOutputConfigurations(ref<java::util::List> p1, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, ref<android::os::Handler> p3);
	void createReprocessableCaptureSession(ref<android::hardware::camera2::params::InputConfiguration> p1, ref<java::util::List> p2, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p3, ref<android::os::Handler> p4);
	void createReprocessableCaptureSessionByConfigurations(ref<android::hardware::camera2::params::InputConfiguration> p1, ref<java::util::List> p2, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p3, ref<android::os::Handler> p4);
	void createConstrainedHighSpeedCaptureSession(ref<java::util::List> p1, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, ref<android::os::Handler> p3);
	void createCaptureSession(ref<android::hardware::camera2::params::SessionConfiguration> config);
	ref<android::hardware::camera2::CaptureRequest_Builder> createCaptureRequest(jint p1);
	ref<android::hardware::camera2::CaptureRequest_Builder> createCaptureRequest(jint templateType, ref<java::util::Set> physicalCameraIdSet);
	ref<android::hardware::camera2::CaptureRequest_Builder> createReprocessCaptureRequest(ref<android::hardware::camera2::TotalCaptureResult> p1);
	void close();

protected:

	CameraDevice(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/camera2/CameraCaptureSession_StateCallback.h>
#include <scapix/java_api/android/hardware/camera2/CaptureRequest_Builder.h>
#include <scapix/java_api/android/hardware/camera2/TotalCaptureResult.h>
#include <scapix/java_api/android/hardware/camera2/params/InputConfiguration.h>
#include <scapix/java_api/android/hardware/camera2/params/SessionConfiguration.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace android::hardware::camera2 {

inline jint CameraDevice::TEMPLATE_MANUAL_() { return get_static_field<SCAPIX_META_STRING("TEMPLATE_MANUAL"), jint>(); }
inline jint CameraDevice::TEMPLATE_PREVIEW_() { return get_static_field<SCAPIX_META_STRING("TEMPLATE_PREVIEW"), jint>(); }
inline jint CameraDevice::TEMPLATE_RECORD_() { return get_static_field<SCAPIX_META_STRING("TEMPLATE_RECORD"), jint>(); }
inline jint CameraDevice::TEMPLATE_STILL_CAPTURE_() { return get_static_field<SCAPIX_META_STRING("TEMPLATE_STILL_CAPTURE"), jint>(); }
inline jint CameraDevice::TEMPLATE_VIDEO_SNAPSHOT_() { return get_static_field<SCAPIX_META_STRING("TEMPLATE_VIDEO_SNAPSHOT"), jint>(); }
inline jint CameraDevice::TEMPLATE_ZERO_SHUTTER_LAG_() { return get_static_field<SCAPIX_META_STRING("TEMPLATE_ZERO_SHUTTER_LAG"), jint>(); }
inline ref<java::lang::String> CameraDevice::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<java::lang::String>>(); }
inline void CameraDevice::createCaptureSession(ref<java::util::List> p1, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, ref<android::os::Handler> p3) { return call_method<SCAPIX_META_STRING("createCaptureSession"), void>(p1, p2, p3); }
inline void CameraDevice::createCaptureSessionByOutputConfigurations(ref<java::util::List> p1, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, ref<android::os::Handler> p3) { return call_method<SCAPIX_META_STRING("createCaptureSessionByOutputConfigurations"), void>(p1, p2, p3); }
inline void CameraDevice::createReprocessableCaptureSession(ref<android::hardware::camera2::params::InputConfiguration> p1, ref<java::util::List> p2, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p3, ref<android::os::Handler> p4) { return call_method<SCAPIX_META_STRING("createReprocessableCaptureSession"), void>(p1, p2, p3, p4); }
inline void CameraDevice::createReprocessableCaptureSessionByConfigurations(ref<android::hardware::camera2::params::InputConfiguration> p1, ref<java::util::List> p2, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p3, ref<android::os::Handler> p4) { return call_method<SCAPIX_META_STRING("createReprocessableCaptureSessionByConfigurations"), void>(p1, p2, p3, p4); }
inline void CameraDevice::createConstrainedHighSpeedCaptureSession(ref<java::util::List> p1, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> p2, ref<android::os::Handler> p3) { return call_method<SCAPIX_META_STRING("createConstrainedHighSpeedCaptureSession"), void>(p1, p2, p3); }
inline void CameraDevice::createCaptureSession(ref<android::hardware::camera2::params::SessionConfiguration> config) { return call_method<SCAPIX_META_STRING("createCaptureSession"), void>(config); }
inline ref<android::hardware::camera2::CaptureRequest_Builder> CameraDevice::createCaptureRequest(jint p1) { return call_method<SCAPIX_META_STRING("createCaptureRequest"), ref<android::hardware::camera2::CaptureRequest_Builder>>(p1); }
inline ref<android::hardware::camera2::CaptureRequest_Builder> CameraDevice::createCaptureRequest(jint templateType, ref<java::util::Set> physicalCameraIdSet) { return call_method<SCAPIX_META_STRING("createCaptureRequest"), ref<android::hardware::camera2::CaptureRequest_Builder>>(templateType, physicalCameraIdSet); }
inline ref<android::hardware::camera2::CaptureRequest_Builder> CameraDevice::createReprocessCaptureRequest(ref<android::hardware::camera2::TotalCaptureResult> p1) { return call_method<SCAPIX_META_STRING("createReprocessCaptureRequest"), ref<android::hardware::camera2::CaptureRequest_Builder>>(p1); }
inline void CameraDevice::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace android::hardware::camera2
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_CAMERADEVICE_H
