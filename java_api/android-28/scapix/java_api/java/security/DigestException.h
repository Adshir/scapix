// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_SECURITY_DIGESTEXCEPTION_H
#define SCAPIX_JAVA_SECURITY_DIGESTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::security {

class DigestException : public object_base<SCAPIX_META_STRING("java/security/DigestException"),
	java::security::GeneralSecurityException>
{
public:

	static ref<DigestException> new_object();
	static ref<DigestException> new_object(ref<java::lang::String> msg);
	static ref<DigestException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<DigestException> new_object(ref<java::lang::Throwable> cause);

protected:

	DigestException(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::security {

inline ref<DigestException> DigestException::new_object() { return base_::new_object(); }
inline ref<DigestException> DigestException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<DigestException> DigestException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<DigestException> DigestException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_DIGESTEXCEPTION_H