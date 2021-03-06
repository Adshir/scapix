// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/CertPathValidatorResult.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT_H
#define SCAPIX_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class PublicKey; }
namespace java::security::cert { class PolicyNode; }
namespace java::security::cert { class TrustAnchor; }

namespace java::security::cert {

class PKIXCertPathValidatorResult : public object_base<SCAPIX_META_STRING("java/security/cert/PKIXCertPathValidatorResult"),
	java::lang::Object,
	java::security::cert::CertPathValidatorResult>
{
public:

	static ref<PKIXCertPathValidatorResult> new_object(ref<java::security::cert::TrustAnchor> trustAnchor, ref<java::security::cert::PolicyNode> policyTree, ref<java::security::PublicKey> subjectPublicKey);
	ref<java::security::cert::TrustAnchor> getTrustAnchor();
	ref<java::security::cert::PolicyNode> getPolicyTree();
	ref<java::security::PublicKey> getPublicKey();
	ref<java::lang::Object> clone();
	ref<java::lang::String> toString();

protected:

	PKIXCertPathValidatorResult(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/cert/PolicyNode.h>
#include <scapix/java_api/java/security/cert/TrustAnchor.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<PKIXCertPathValidatorResult> PKIXCertPathValidatorResult::new_object(ref<java::security::cert::TrustAnchor> trustAnchor, ref<java::security::cert::PolicyNode> policyTree, ref<java::security::PublicKey> subjectPublicKey) { return base_::new_object(trustAnchor, policyTree, subjectPublicKey); }
inline ref<java::security::cert::TrustAnchor> PKIXCertPathValidatorResult::getTrustAnchor() { return call_method<SCAPIX_META_STRING("getTrustAnchor"), ref<java::security::cert::TrustAnchor>>(); }
inline ref<java::security::cert::PolicyNode> PKIXCertPathValidatorResult::getPolicyTree() { return call_method<SCAPIX_META_STRING("getPolicyTree"), ref<java::security::cert::PolicyNode>>(); }
inline ref<java::security::PublicKey> PKIXCertPathValidatorResult::getPublicKey() { return call_method<SCAPIX_META_STRING("getPublicKey"), ref<java::security::PublicKey>>(); }
inline ref<java::lang::Object> PKIXCertPathValidatorResult::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<java::lang::String> PKIXCertPathValidatorResult::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_PKIXCERTPATHVALIDATORRESULT_H
