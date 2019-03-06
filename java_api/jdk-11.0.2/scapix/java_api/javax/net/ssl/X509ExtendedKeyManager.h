// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/X509KeyManager.h>

#ifndef SCAPIX_JAVAX_NET_SSL_X509EXTENDEDKEYMANAGER_H
#define SCAPIX_JAVAX_NET_SSL_X509EXTENDEDKEYMANAGER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class Principal; }
namespace javax::net::ssl { class SSLEngine; }

namespace javax::net::ssl {

class X509ExtendedKeyManager : public object_base<SCAPIX_META_STRING("javax/net/ssl/X509ExtendedKeyManager"),
	java::lang::Object,
	javax::net::ssl::X509KeyManager>
{
public:

	ref<java::lang::String> chooseEngineClientAlias(ref<link::java::array<java::lang::String>> keyType, ref<link::java::array<java::security::Principal>> issuers, ref<javax::net::ssl::SSLEngine> engine);
	ref<java::lang::String> chooseEngineServerAlias(ref<java::lang::String> keyType, ref<link::java::array<java::security::Principal>> issuers, ref<javax::net::ssl::SSLEngine> engine);

protected:

	X509ExtendedKeyManager(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/javax/net/ssl/SSLEngine.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<java::lang::String> X509ExtendedKeyManager::chooseEngineClientAlias(ref<link::java::array<java::lang::String>> keyType, ref<link::java::array<java::security::Principal>> issuers, ref<javax::net::ssl::SSLEngine> engine) { return call_method<SCAPIX_META_STRING("chooseEngineClientAlias"), ref<java::lang::String>>(keyType, issuers, engine); }
inline ref<java::lang::String> X509ExtendedKeyManager::chooseEngineServerAlias(ref<java::lang::String> keyType, ref<link::java::array<java::security::Principal>> issuers, ref<javax::net::ssl::SSLEngine> engine) { return call_method<SCAPIX_META_STRING("chooseEngineServerAlias"), ref<java::lang::String>>(keyType, issuers, engine); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_X509EXTENDEDKEYMANAGER_H