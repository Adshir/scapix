// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_HTTP_SSLCERTIFICATE_H
#define SCAPIX_ANDROID_NET_HTTP_SSLCERTIFICATE_H

namespace scapix::java_api {

namespace android::net::http { class SslCertificate_DName; }
namespace android::os { class Bundle; }
namespace java::lang { class String; }
namespace java::security::cert { class X509Certificate; }
namespace java::util { class Date; }

namespace android::net::http {

class SslCertificate : public object_base<SCAPIX_META_STRING("android/net/http/SslCertificate"),
	java::lang::Object>
{
public:

	using DName = SslCertificate_DName;

	static ref<SslCertificate> new_object(ref<java::lang::String> issuedTo, ref<java::lang::String> issuedBy, ref<java::lang::String> validNotBefore, ref<java::lang::String> validNotAfter);
	static ref<SslCertificate> new_object(ref<java::lang::String> issuedTo, ref<java::lang::String> issuedBy, ref<java::util::Date> validNotBefore, ref<java::util::Date> validNotAfter);
	static ref<SslCertificate> new_object(ref<java::security::cert::X509Certificate> certificate);
	static ref<android::os::Bundle> saveState(ref<android::net::http::SslCertificate> certificate);
	static ref<android::net::http::SslCertificate> restoreState(ref<android::os::Bundle> bundle);
	ref<java::util::Date> getValidNotBeforeDate();
	ref<java::lang::String> getValidNotBefore();
	ref<java::util::Date> getValidNotAfterDate();
	ref<java::lang::String> getValidNotAfter();
	ref<android::net::http::SslCertificate_DName> getIssuedTo();
	ref<android::net::http::SslCertificate_DName> getIssuedBy();
	ref<java::lang::String> toString();

protected:

	SslCertificate(handle_type h) : base_(h) {}

};

} // namespace android::net::http
} // namespace scapix::java_api

#include <scapix/java_api/android/net/http/SslCertificate_DName.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/Date.h>

namespace scapix::java_api {
namespace android::net::http {

inline ref<SslCertificate> SslCertificate::new_object(ref<java::lang::String> issuedTo, ref<java::lang::String> issuedBy, ref<java::lang::String> validNotBefore, ref<java::lang::String> validNotAfter) { return base_::new_object(issuedTo, issuedBy, validNotBefore, validNotAfter); }
inline ref<SslCertificate> SslCertificate::new_object(ref<java::lang::String> issuedTo, ref<java::lang::String> issuedBy, ref<java::util::Date> validNotBefore, ref<java::util::Date> validNotAfter) { return base_::new_object(issuedTo, issuedBy, validNotBefore, validNotAfter); }
inline ref<SslCertificate> SslCertificate::new_object(ref<java::security::cert::X509Certificate> certificate) { return base_::new_object(certificate); }
inline ref<android::os::Bundle> SslCertificate::saveState(ref<android::net::http::SslCertificate> certificate) { return call_static_method<SCAPIX_META_STRING("saveState"), ref<android::os::Bundle>>(certificate); }
inline ref<android::net::http::SslCertificate> SslCertificate::restoreState(ref<android::os::Bundle> bundle) { return call_static_method<SCAPIX_META_STRING("restoreState"), ref<android::net::http::SslCertificate>>(bundle); }
inline ref<java::util::Date> SslCertificate::getValidNotBeforeDate() { return call_method<SCAPIX_META_STRING("getValidNotBeforeDate"), ref<java::util::Date>>(); }
inline ref<java::lang::String> SslCertificate::getValidNotBefore() { return call_method<SCAPIX_META_STRING("getValidNotBefore"), ref<java::lang::String>>(); }
inline ref<java::util::Date> SslCertificate::getValidNotAfterDate() { return call_method<SCAPIX_META_STRING("getValidNotAfterDate"), ref<java::util::Date>>(); }
inline ref<java::lang::String> SslCertificate::getValidNotAfter() { return call_method<SCAPIX_META_STRING("getValidNotAfter"), ref<java::lang::String>>(); }
inline ref<android::net::http::SslCertificate_DName> SslCertificate::getIssuedTo() { return call_method<SCAPIX_META_STRING("getIssuedTo"), ref<android::net::http::SslCertificate_DName>>(); }
inline ref<android::net::http::SslCertificate_DName> SslCertificate::getIssuedBy() { return call_method<SCAPIX_META_STRING("getIssuedBy"), ref<android::net::http::SslCertificate_DName>>(); }
inline ref<java::lang::String> SslCertificate::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::net::http
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_HTTP_SSLCERTIFICATE_H