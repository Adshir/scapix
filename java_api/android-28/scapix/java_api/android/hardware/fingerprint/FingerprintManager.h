// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_H
#define SCAPIX_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_H

namespace scapix::java_api {

namespace android::hardware::fingerprint { class FingerprintManager_AuthenticationCallback; }
namespace android::hardware::fingerprint { class FingerprintManager_CryptoObject; }
namespace android::os { class CancellationSignal; }
namespace android::os { class Handler; }
namespace android::hardware::fingerprint { class FingerprintManager_AuthenticationResult; }

namespace android::hardware::fingerprint {

class FingerprintManager : public object_base<SCAPIX_META_STRING("android/hardware/fingerprint/FingerprintManager"),
	java::lang::Object>
{
public:

	using CryptoObject = FingerprintManager_CryptoObject;
	using AuthenticationResult = FingerprintManager_AuthenticationResult;
	using AuthenticationCallback = FingerprintManager_AuthenticationCallback;

	static jint FINGERPRINT_ACQUIRED_GOOD_();
	static jint FINGERPRINT_ACQUIRED_IMAGER_DIRTY_();
	static jint FINGERPRINT_ACQUIRED_INSUFFICIENT_();
	static jint FINGERPRINT_ACQUIRED_PARTIAL_();
	static jint FINGERPRINT_ACQUIRED_TOO_FAST_();
	static jint FINGERPRINT_ACQUIRED_TOO_SLOW_();
	static jint FINGERPRINT_ERROR_CANCELED_();
	static jint FINGERPRINT_ERROR_HW_NOT_PRESENT_();
	static jint FINGERPRINT_ERROR_HW_UNAVAILABLE_();
	static jint FINGERPRINT_ERROR_LOCKOUT_();
	static jint FINGERPRINT_ERROR_LOCKOUT_PERMANENT_();
	static jint FINGERPRINT_ERROR_NO_FINGERPRINTS_();
	static jint FINGERPRINT_ERROR_NO_SPACE_();
	static jint FINGERPRINT_ERROR_TIMEOUT_();
	static jint FINGERPRINT_ERROR_UNABLE_TO_PROCESS_();
	static jint FINGERPRINT_ERROR_USER_CANCELED_();
	static jint FINGERPRINT_ERROR_VENDOR_();

	void authenticate(ref<android::hardware::fingerprint::FingerprintManager_CryptoObject> crypto, ref<android::os::CancellationSignal> cancel, jint flags, ref<android::hardware::fingerprint::FingerprintManager_AuthenticationCallback> callback, ref<android::os::Handler> handler);
	jboolean hasEnrolledFingerprints();
	jboolean isHardwareDetected();

protected:

	FingerprintManager(handle_type h) : base_(h) {}

};

} // namespace android::hardware::fingerprint
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/fingerprint/FingerprintManager_AuthenticationCallback.h>
#include <scapix/java_api/android/hardware/fingerprint/FingerprintManager_CryptoObject.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/Handler.h>

namespace scapix::java_api {
namespace android::hardware::fingerprint {

inline jint FingerprintManager::FINGERPRINT_ACQUIRED_GOOD_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ACQUIRED_GOOD"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ACQUIRED_IMAGER_DIRTY_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ACQUIRED_IMAGER_DIRTY"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ACQUIRED_INSUFFICIENT_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ACQUIRED_INSUFFICIENT"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ACQUIRED_PARTIAL_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ACQUIRED_PARTIAL"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_FAST_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ACQUIRED_TOO_FAST"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_SLOW_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ACQUIRED_TOO_SLOW"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_CANCELED_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_CANCELED"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_HW_NOT_PRESENT_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_HW_NOT_PRESENT"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_HW_UNAVAILABLE_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_HW_UNAVAILABLE"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_LOCKOUT"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT_PERMANENT_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_LOCKOUT_PERMANENT"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_NO_FINGERPRINTS_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_NO_FINGERPRINTS"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_NO_SPACE_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_NO_SPACE"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_TIMEOUT_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_TIMEOUT"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_UNABLE_TO_PROCESS_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_UNABLE_TO_PROCESS"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_USER_CANCELED_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_USER_CANCELED"), jint>(); }
inline jint FingerprintManager::FINGERPRINT_ERROR_VENDOR_() { return get_static_field<SCAPIX_META_STRING("FINGERPRINT_ERROR_VENDOR"), jint>(); }
inline void FingerprintManager::authenticate(ref<android::hardware::fingerprint::FingerprintManager_CryptoObject> crypto, ref<android::os::CancellationSignal> cancel, jint flags, ref<android::hardware::fingerprint::FingerprintManager_AuthenticationCallback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("authenticate"), void>(crypto, cancel, flags, callback, handler); }
inline jboolean FingerprintManager::hasEnrolledFingerprints() { return call_method<SCAPIX_META_STRING("hasEnrolledFingerprints"), jboolean>(); }
inline jboolean FingerprintManager::isHardwareDetected() { return call_method<SCAPIX_META_STRING("isHardwareDetected"), jboolean>(); }

} // namespace android::hardware::fingerprint
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_H