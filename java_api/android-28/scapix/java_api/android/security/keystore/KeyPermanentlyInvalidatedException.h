// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/InvalidKeyException.h>

#ifndef SCAPIX_ANDROID_SECURITY_KEYSTORE_KEYPERMANENTLYINVALIDATEDEXCEPTION_H
#define SCAPIX_ANDROID_SECURITY_KEYSTORE_KEYPERMANENTLYINVALIDATEDEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::security::keystore {

class KeyPermanentlyInvalidatedException : public object_base<SCAPIX_META_STRING("android/security/keystore/KeyPermanentlyInvalidatedException"),
	java::security::InvalidKeyException>
{
public:

	static ref<KeyPermanentlyInvalidatedException> new_object();
	static ref<KeyPermanentlyInvalidatedException> new_object(ref<java::lang::String> message);
	static ref<KeyPermanentlyInvalidatedException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);

protected:

	KeyPermanentlyInvalidatedException(handle_type h) : base_(h) {}

};

} // namespace android::security::keystore
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::security::keystore {

inline ref<KeyPermanentlyInvalidatedException> KeyPermanentlyInvalidatedException::new_object() { return base_::new_object(); }
inline ref<KeyPermanentlyInvalidatedException> KeyPermanentlyInvalidatedException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<KeyPermanentlyInvalidatedException> KeyPermanentlyInvalidatedException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

} // namespace android::security::keystore
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SECURITY_KEYSTORE_KEYPERMANENTLYINVALIDATEDEXCEPTION_H