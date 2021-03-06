// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/accounts/AccountsException.h>

#ifndef SCAPIX_ANDROID_ACCOUNTS_NETWORKERROREXCEPTION_H
#define SCAPIX_ANDROID_ACCOUNTS_NETWORKERROREXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::accounts {

class NetworkErrorException : public object_base<SCAPIX_META_STRING("android/accounts/NetworkErrorException"),
	android::accounts::AccountsException>
{
public:

	static ref<NetworkErrorException> new_object();
	static ref<NetworkErrorException> new_object(ref<java::lang::String> message);
	static ref<NetworkErrorException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<NetworkErrorException> new_object(ref<java::lang::Throwable> cause);

protected:

	NetworkErrorException(handle_type h) : base_(h) {}

};

} // namespace android::accounts
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::accounts {

inline ref<NetworkErrorException> NetworkErrorException::new_object() { return base_::new_object(); }
inline ref<NetworkErrorException> NetworkErrorException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<NetworkErrorException> NetworkErrorException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<NetworkErrorException> NetworkErrorException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace android::accounts
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCOUNTS_NETWORKERROREXCEPTION_H
