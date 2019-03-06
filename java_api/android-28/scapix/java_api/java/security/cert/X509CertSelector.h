// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/CertSelector.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_X509CERTSELECTOR_H
#define SCAPIX_JAVA_SECURITY_CERT_X509CERTSELECTOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::math { class BigInteger; }
namespace java::security { class PublicKey; }
namespace java::security::cert { class Certificate; }
namespace java::security::cert { class X509Certificate; }
namespace java::util { class Collection; }
namespace java::util { class Date; }
namespace java::util { class Set; }
namespace javax::security::auth::x500 { class X500Principal; }

namespace java::security::cert {

class X509CertSelector : public object_base<SCAPIX_META_STRING("java/security/cert/X509CertSelector"),
	java::lang::Object,
	java::security::cert::CertSelector>
{
public:

	static ref<X509CertSelector> new_object();
	void setCertificate(ref<java::security::cert::X509Certificate> cert);
	void setSerialNumber(ref<java::math::BigInteger> serial);
	void setIssuer(ref<javax::security::auth::x500::X500Principal> issuer);
	void setIssuer(ref<java::lang::String> issuerDN);
	void setIssuer(ref<link::java::array<jbyte>> issuerDN);
	void setSubject(ref<javax::security::auth::x500::X500Principal> subject);
	void setSubject(ref<java::lang::String> subjectDN);
	void setSubject(ref<link::java::array<jbyte>> subjectDN);
	void setSubjectKeyIdentifier(ref<link::java::array<jbyte>> subjectKeyID);
	void setAuthorityKeyIdentifier(ref<link::java::array<jbyte>> authorityKeyID);
	void setCertificateValid(ref<java::util::Date> certValid);
	void setPrivateKeyValid(ref<java::util::Date> privateKeyValid);
	void setSubjectPublicKeyAlgID(ref<java::lang::String> oid);
	void setSubjectPublicKey(ref<java::security::PublicKey> key);
	void setSubjectPublicKey(ref<link::java::array<jbyte>> key);
	void setKeyUsage(ref<link::java::array<jboolean>> keyUsage);
	void setExtendedKeyUsage(ref<java::util::Set> keyPurposeSet);
	void setMatchAllSubjectAltNames(jboolean matchAllNames);
	void setSubjectAlternativeNames(ref<java::util::Collection> names);
	void addSubjectAlternativeName(jint type, ref<java::lang::String> name);
	void addSubjectAlternativeName(jint type, ref<link::java::array<jbyte>> name);
	void setNameConstraints(ref<link::java::array<jbyte>> bytes);
	void setBasicConstraints(jint minMaxPathLen);
	void setPolicy(ref<java::util::Set> certPolicySet);
	void setPathToNames(ref<java::util::Collection> names);
	void addPathToName(jint type, ref<java::lang::String> name);
	void addPathToName(jint type, ref<link::java::array<jbyte>> name);
	ref<java::security::cert::X509Certificate> getCertificate();
	ref<java::math::BigInteger> getSerialNumber();
	ref<javax::security::auth::x500::X500Principal> getIssuer();
	ref<java::lang::String> getIssuerAsString();
	ref<link::java::array<jbyte>> getIssuerAsBytes();
	ref<javax::security::auth::x500::X500Principal> getSubject();
	ref<java::lang::String> getSubjectAsString();
	ref<link::java::array<jbyte>> getSubjectAsBytes();
	ref<link::java::array<jbyte>> getSubjectKeyIdentifier();
	ref<link::java::array<jbyte>> getAuthorityKeyIdentifier();
	ref<java::util::Date> getCertificateValid();
	ref<java::util::Date> getPrivateKeyValid();
	ref<java::lang::String> getSubjectPublicKeyAlgID();
	ref<java::security::PublicKey> getSubjectPublicKey();
	ref<link::java::array<jboolean>> getKeyUsage();
	ref<java::util::Set> getExtendedKeyUsage();
	jboolean getMatchAllSubjectAltNames();
	ref<java::util::Collection> getSubjectAlternativeNames();
	ref<link::java::array<jbyte>> getNameConstraints();
	jint getBasicConstraints();
	ref<java::util::Set> getPolicy();
	ref<java::util::Collection> getPathToNames();
	ref<java::lang::String> toString();
	jboolean match(ref<java::security::cert::Certificate> cert);
	ref<java::lang::Object> clone();

protected:

	X509CertSelector(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<X509CertSelector> X509CertSelector::new_object() { return base_::new_object(); }
inline void X509CertSelector::setCertificate(ref<java::security::cert::X509Certificate> cert) { return call_method<SCAPIX_META_STRING("setCertificate"), void>(cert); }
inline void X509CertSelector::setSerialNumber(ref<java::math::BigInteger> serial) { return call_method<SCAPIX_META_STRING("setSerialNumber"), void>(serial); }
inline void X509CertSelector::setIssuer(ref<javax::security::auth::x500::X500Principal> issuer) { return call_method<SCAPIX_META_STRING("setIssuer"), void>(issuer); }
inline void X509CertSelector::setIssuer(ref<java::lang::String> issuerDN) { return call_method<SCAPIX_META_STRING("setIssuer"), void>(issuerDN); }
inline void X509CertSelector::setIssuer(ref<link::java::array<jbyte>> issuerDN) { return call_method<SCAPIX_META_STRING("setIssuer"), void>(issuerDN); }
inline void X509CertSelector::setSubject(ref<javax::security::auth::x500::X500Principal> subject) { return call_method<SCAPIX_META_STRING("setSubject"), void>(subject); }
inline void X509CertSelector::setSubject(ref<java::lang::String> subjectDN) { return call_method<SCAPIX_META_STRING("setSubject"), void>(subjectDN); }
inline void X509CertSelector::setSubject(ref<link::java::array<jbyte>> subjectDN) { return call_method<SCAPIX_META_STRING("setSubject"), void>(subjectDN); }
inline void X509CertSelector::setSubjectKeyIdentifier(ref<link::java::array<jbyte>> subjectKeyID) { return call_method<SCAPIX_META_STRING("setSubjectKeyIdentifier"), void>(subjectKeyID); }
inline void X509CertSelector::setAuthorityKeyIdentifier(ref<link::java::array<jbyte>> authorityKeyID) { return call_method<SCAPIX_META_STRING("setAuthorityKeyIdentifier"), void>(authorityKeyID); }
inline void X509CertSelector::setCertificateValid(ref<java::util::Date> certValid) { return call_method<SCAPIX_META_STRING("setCertificateValid"), void>(certValid); }
inline void X509CertSelector::setPrivateKeyValid(ref<java::util::Date> privateKeyValid) { return call_method<SCAPIX_META_STRING("setPrivateKeyValid"), void>(privateKeyValid); }
inline void X509CertSelector::setSubjectPublicKeyAlgID(ref<java::lang::String> oid) { return call_method<SCAPIX_META_STRING("setSubjectPublicKeyAlgID"), void>(oid); }
inline void X509CertSelector::setSubjectPublicKey(ref<java::security::PublicKey> key) { return call_method<SCAPIX_META_STRING("setSubjectPublicKey"), void>(key); }
inline void X509CertSelector::setSubjectPublicKey(ref<link::java::array<jbyte>> key) { return call_method<SCAPIX_META_STRING("setSubjectPublicKey"), void>(key); }
inline void X509CertSelector::setKeyUsage(ref<link::java::array<jboolean>> keyUsage) { return call_method<SCAPIX_META_STRING("setKeyUsage"), void>(keyUsage); }
inline void X509CertSelector::setExtendedKeyUsage(ref<java::util::Set> keyPurposeSet) { return call_method<SCAPIX_META_STRING("setExtendedKeyUsage"), void>(keyPurposeSet); }
inline void X509CertSelector::setMatchAllSubjectAltNames(jboolean matchAllNames) { return call_method<SCAPIX_META_STRING("setMatchAllSubjectAltNames"), void>(matchAllNames); }
inline void X509CertSelector::setSubjectAlternativeNames(ref<java::util::Collection> names) { return call_method<SCAPIX_META_STRING("setSubjectAlternativeNames"), void>(names); }
inline void X509CertSelector::addSubjectAlternativeName(jint type, ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("addSubjectAlternativeName"), void>(type, name); }
inline void X509CertSelector::addSubjectAlternativeName(jint type, ref<link::java::array<jbyte>> name) { return call_method<SCAPIX_META_STRING("addSubjectAlternativeName"), void>(type, name); }
inline void X509CertSelector::setNameConstraints(ref<link::java::array<jbyte>> bytes) { return call_method<SCAPIX_META_STRING("setNameConstraints"), void>(bytes); }
inline void X509CertSelector::setBasicConstraints(jint minMaxPathLen) { return call_method<SCAPIX_META_STRING("setBasicConstraints"), void>(minMaxPathLen); }
inline void X509CertSelector::setPolicy(ref<java::util::Set> certPolicySet) { return call_method<SCAPIX_META_STRING("setPolicy"), void>(certPolicySet); }
inline void X509CertSelector::setPathToNames(ref<java::util::Collection> names) { return call_method<SCAPIX_META_STRING("setPathToNames"), void>(names); }
inline void X509CertSelector::addPathToName(jint type, ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("addPathToName"), void>(type, name); }
inline void X509CertSelector::addPathToName(jint type, ref<link::java::array<jbyte>> name) { return call_method<SCAPIX_META_STRING("addPathToName"), void>(type, name); }
inline ref<java::security::cert::X509Certificate> X509CertSelector::getCertificate() { return call_method<SCAPIX_META_STRING("getCertificate"), ref<java::security::cert::X509Certificate>>(); }
inline ref<java::math::BigInteger> X509CertSelector::getSerialNumber() { return call_method<SCAPIX_META_STRING("getSerialNumber"), ref<java::math::BigInteger>>(); }
inline ref<javax::security::auth::x500::X500Principal> X509CertSelector::getIssuer() { return call_method<SCAPIX_META_STRING("getIssuer"), ref<javax::security::auth::x500::X500Principal>>(); }
inline ref<java::lang::String> X509CertSelector::getIssuerAsString() { return call_method<SCAPIX_META_STRING("getIssuerAsString"), ref<java::lang::String>>(); }
inline ref<link::java::array<jbyte>> X509CertSelector::getIssuerAsBytes() { return call_method<SCAPIX_META_STRING("getIssuerAsBytes"), ref<link::java::array<jbyte>>>(); }
inline ref<javax::security::auth::x500::X500Principal> X509CertSelector::getSubject() { return call_method<SCAPIX_META_STRING("getSubject"), ref<javax::security::auth::x500::X500Principal>>(); }
inline ref<java::lang::String> X509CertSelector::getSubjectAsString() { return call_method<SCAPIX_META_STRING("getSubjectAsString"), ref<java::lang::String>>(); }
inline ref<link::java::array<jbyte>> X509CertSelector::getSubjectAsBytes() { return call_method<SCAPIX_META_STRING("getSubjectAsBytes"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> X509CertSelector::getSubjectKeyIdentifier() { return call_method<SCAPIX_META_STRING("getSubjectKeyIdentifier"), ref<link::java::array<jbyte>>>(); }
inline ref<link::java::array<jbyte>> X509CertSelector::getAuthorityKeyIdentifier() { return call_method<SCAPIX_META_STRING("getAuthorityKeyIdentifier"), ref<link::java::array<jbyte>>>(); }
inline ref<java::util::Date> X509CertSelector::getCertificateValid() { return call_method<SCAPIX_META_STRING("getCertificateValid"), ref<java::util::Date>>(); }
inline ref<java::util::Date> X509CertSelector::getPrivateKeyValid() { return call_method<SCAPIX_META_STRING("getPrivateKeyValid"), ref<java::util::Date>>(); }
inline ref<java::lang::String> X509CertSelector::getSubjectPublicKeyAlgID() { return call_method<SCAPIX_META_STRING("getSubjectPublicKeyAlgID"), ref<java::lang::String>>(); }
inline ref<java::security::PublicKey> X509CertSelector::getSubjectPublicKey() { return call_method<SCAPIX_META_STRING("getSubjectPublicKey"), ref<java::security::PublicKey>>(); }
inline ref<link::java::array<jboolean>> X509CertSelector::getKeyUsage() { return call_method<SCAPIX_META_STRING("getKeyUsage"), ref<link::java::array<jboolean>>>(); }
inline ref<java::util::Set> X509CertSelector::getExtendedKeyUsage() { return call_method<SCAPIX_META_STRING("getExtendedKeyUsage"), ref<java::util::Set>>(); }
inline jboolean X509CertSelector::getMatchAllSubjectAltNames() { return call_method<SCAPIX_META_STRING("getMatchAllSubjectAltNames"), jboolean>(); }
inline ref<java::util::Collection> X509CertSelector::getSubjectAlternativeNames() { return call_method<SCAPIX_META_STRING("getSubjectAlternativeNames"), ref<java::util::Collection>>(); }
inline ref<link::java::array<jbyte>> X509CertSelector::getNameConstraints() { return call_method<SCAPIX_META_STRING("getNameConstraints"), ref<link::java::array<jbyte>>>(); }
inline jint X509CertSelector::getBasicConstraints() { return call_method<SCAPIX_META_STRING("getBasicConstraints"), jint>(); }
inline ref<java::util::Set> X509CertSelector::getPolicy() { return call_method<SCAPIX_META_STRING("getPolicy"), ref<java::util::Set>>(); }
inline ref<java::util::Collection> X509CertSelector::getPathToNames() { return call_method<SCAPIX_META_STRING("getPathToNames"), ref<java::util::Collection>>(); }
inline ref<java::lang::String> X509CertSelector::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jboolean X509CertSelector::match(ref<java::security::cert::Certificate> cert) { return call_method<SCAPIX_META_STRING("match"), jboolean>(cert); }
inline ref<java::lang::Object> X509CertSelector::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_X509CERTSELECTOR_H