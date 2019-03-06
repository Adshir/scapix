// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_KEYSTORESPI_H
#define SCAPIX_JAVA_SECURITY_KEYSTORESPI_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::io { class OutputStream; }
namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::security { class Key; }
namespace java::security { class KeyStore_Entry; }
namespace java::security { class KeyStore_LoadStoreParameter; }
namespace java::security { class KeyStore_ProtectionParameter; }
namespace java::security::cert { class Certificate; }
namespace java::util { class Date; }
namespace java::util { class Enumeration; }

namespace java::security {

class KeyStoreSpi : public object_base<SCAPIX_META_STRING("java/security/KeyStoreSpi"),
	java::lang::Object>
{
public:

	static ref<KeyStoreSpi> new_object();
	ref<java::security::Key> engineGetKey(ref<java::lang::String> p1, ref<link::java::array<jchar>> p2);
	ref<link::java::array<java::security::cert::Certificate>> engineGetCertificateChain(ref<java::lang::String> p1);
	ref<java::security::cert::Certificate> engineGetCertificate(ref<java::lang::String> p1);
	ref<java::util::Date> engineGetCreationDate(ref<java::lang::String> p1);
	void engineSetKeyEntry(ref<java::lang::String> p1, ref<java::security::Key> p2, ref<link::java::array<jchar>> p3, ref<link::java::array<java::security::cert::Certificate>> p4);
	void engineSetKeyEntry(ref<java::lang::String> p1, ref<link::java::array<jbyte>> p2, ref<link::java::array<java::security::cert::Certificate>> p3);
	void engineSetCertificateEntry(ref<java::lang::String> p1, ref<java::security::cert::Certificate> p2);
	void engineDeleteEntry(ref<java::lang::String> p1);
	ref<java::util::Enumeration> engineAliases();
	jboolean engineContainsAlias(ref<java::lang::String> p1);
	jint engineSize();
	jboolean engineIsKeyEntry(ref<java::lang::String> p1);
	jboolean engineIsCertificateEntry(ref<java::lang::String> p1);
	ref<java::lang::String> engineGetCertificateAlias(ref<java::security::cert::Certificate> p1);
	void engineStore(ref<java::io::OutputStream> p1, ref<link::java::array<jchar>> p2);
	void engineStore(ref<java::security::KeyStore_LoadStoreParameter> param);
	void engineLoad(ref<java::io::InputStream> p1, ref<link::java::array<jchar>> p2);
	void engineLoad(ref<java::security::KeyStore_LoadStoreParameter> param);
	ref<java::security::KeyStore_Entry> engineGetEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_ProtectionParameter> protParam);
	void engineSetEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_Entry> entry, ref<java::security::KeyStore_ProtectionParameter> protParam);
	jboolean engineEntryInstanceOf(ref<java::lang::String> alias, ref<java::lang::Class> entryClass);

protected:

	KeyStoreSpi(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/KeyStore_Entry.h>
#include <scapix/java_api/java/security/KeyStore_LoadStoreParameter.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Enumeration.h>

namespace scapix::java_api {
namespace java::security {

inline ref<KeyStoreSpi> KeyStoreSpi::new_object() { return base_::new_object(); }
inline ref<java::security::Key> KeyStoreSpi::engineGetKey(ref<java::lang::String> p1, ref<link::java::array<jchar>> p2) { return call_method<SCAPIX_META_STRING("engineGetKey"), ref<java::security::Key>>(p1, p2); }
inline ref<link::java::array<java::security::cert::Certificate>> KeyStoreSpi::engineGetCertificateChain(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineGetCertificateChain"), ref<link::java::array<java::security::cert::Certificate>>>(p1); }
inline ref<java::security::cert::Certificate> KeyStoreSpi::engineGetCertificate(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineGetCertificate"), ref<java::security::cert::Certificate>>(p1); }
inline ref<java::util::Date> KeyStoreSpi::engineGetCreationDate(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineGetCreationDate"), ref<java::util::Date>>(p1); }
inline void KeyStoreSpi::engineSetKeyEntry(ref<java::lang::String> p1, ref<java::security::Key> p2, ref<link::java::array<jchar>> p3, ref<link::java::array<java::security::cert::Certificate>> p4) { return call_method<SCAPIX_META_STRING("engineSetKeyEntry"), void>(p1, p2, p3, p4); }
inline void KeyStoreSpi::engineSetKeyEntry(ref<java::lang::String> p1, ref<link::java::array<jbyte>> p2, ref<link::java::array<java::security::cert::Certificate>> p3) { return call_method<SCAPIX_META_STRING("engineSetKeyEntry"), void>(p1, p2, p3); }
inline void KeyStoreSpi::engineSetCertificateEntry(ref<java::lang::String> p1, ref<java::security::cert::Certificate> p2) { return call_method<SCAPIX_META_STRING("engineSetCertificateEntry"), void>(p1, p2); }
inline void KeyStoreSpi::engineDeleteEntry(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineDeleteEntry"), void>(p1); }
inline ref<java::util::Enumeration> KeyStoreSpi::engineAliases() { return call_method<SCAPIX_META_STRING("engineAliases"), ref<java::util::Enumeration>>(); }
inline jboolean KeyStoreSpi::engineContainsAlias(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineContainsAlias"), jboolean>(p1); }
inline jint KeyStoreSpi::engineSize() { return call_method<SCAPIX_META_STRING("engineSize"), jint>(); }
inline jboolean KeyStoreSpi::engineIsKeyEntry(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineIsKeyEntry"), jboolean>(p1); }
inline jboolean KeyStoreSpi::engineIsCertificateEntry(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("engineIsCertificateEntry"), jboolean>(p1); }
inline ref<java::lang::String> KeyStoreSpi::engineGetCertificateAlias(ref<java::security::cert::Certificate> p1) { return call_method<SCAPIX_META_STRING("engineGetCertificateAlias"), ref<java::lang::String>>(p1); }
inline void KeyStoreSpi::engineStore(ref<java::io::OutputStream> p1, ref<link::java::array<jchar>> p2) { return call_method<SCAPIX_META_STRING("engineStore"), void>(p1, p2); }
inline void KeyStoreSpi::engineStore(ref<java::security::KeyStore_LoadStoreParameter> param) { return call_method<SCAPIX_META_STRING("engineStore"), void>(param); }
inline void KeyStoreSpi::engineLoad(ref<java::io::InputStream> p1, ref<link::java::array<jchar>> p2) { return call_method<SCAPIX_META_STRING("engineLoad"), void>(p1, p2); }
inline void KeyStoreSpi::engineLoad(ref<java::security::KeyStore_LoadStoreParameter> param) { return call_method<SCAPIX_META_STRING("engineLoad"), void>(param); }
inline ref<java::security::KeyStore_Entry> KeyStoreSpi::engineGetEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_ProtectionParameter> protParam) { return call_method<SCAPIX_META_STRING("engineGetEntry"), ref<java::security::KeyStore_Entry>>(alias, protParam); }
inline void KeyStoreSpi::engineSetEntry(ref<java::lang::String> alias, ref<java::security::KeyStore_Entry> entry, ref<java::security::KeyStore_ProtectionParameter> protParam) { return call_method<SCAPIX_META_STRING("engineSetEntry"), void>(alias, entry, protParam); }
inline jboolean KeyStoreSpi::engineEntryInstanceOf(ref<java::lang::String> alias, ref<java::lang::Class> entryClass) { return call_method<SCAPIX_META_STRING("engineEntryInstanceOf"), jboolean>(alias, entryClass); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_KEYSTORESPI_H