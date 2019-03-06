// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::security::cert {

class CertificateException : public object_base<SCAPIX_META_STRING("java/security/cert/CertificateException"),
	java::security::GeneralSecurityException>
{
public:

	static ref<CertificateException> new_object();
	static ref<CertificateException> new_object(ref<java::lang::String> msg);
	static ref<CertificateException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<CertificateException> new_object(ref<java::lang::Throwable> cause);

protected:

	CertificateException(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<CertificateException> CertificateException::new_object() { return base_::new_object(); }
inline ref<CertificateException> CertificateException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<CertificateException> CertificateException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<CertificateException> CertificateException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_H