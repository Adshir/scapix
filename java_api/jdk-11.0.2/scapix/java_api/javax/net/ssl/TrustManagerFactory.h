// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_H
#define SCAPIX_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class KeyStore; }
namespace java::security { class Provider; }
namespace javax::net::ssl { class ManagerFactoryParameters; }
namespace javax::net::ssl { class TrustManager; }

namespace javax::net::ssl {

class TrustManagerFactory : public object_base<SCAPIX_META_STRING("javax/net/ssl/TrustManagerFactory"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> getDefaultAlgorithm();
	ref<java::lang::String> getAlgorithm();
	static ref<javax::net::ssl::TrustManagerFactory> getInstance(ref<java::lang::String> algorithm);
	static ref<javax::net::ssl::TrustManagerFactory> getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider);
	static ref<javax::net::ssl::TrustManagerFactory> getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider);
	ref<java::security::Provider> getProvider();
	void init(ref<java::security::KeyStore> ks);
	void init(ref<javax::net::ssl::ManagerFactoryParameters> spec);
	ref<link::java::array<javax::net::ssl::TrustManager>> getTrustManagers();

protected:

	TrustManagerFactory(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/javax/net/ssl/ManagerFactoryParameters.h>
#include <scapix/java_api/javax/net/ssl/TrustManager.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<java::lang::String> TrustManagerFactory::getDefaultAlgorithm() { return call_static_method<SCAPIX_META_STRING("getDefaultAlgorithm"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TrustManagerFactory::getAlgorithm() { return call_method<SCAPIX_META_STRING("getAlgorithm"), ref<java::lang::String>>(); }
inline ref<javax::net::ssl::TrustManagerFactory> TrustManagerFactory::getInstance(ref<java::lang::String> algorithm) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::net::ssl::TrustManagerFactory>>(algorithm); }
inline ref<javax::net::ssl::TrustManagerFactory> TrustManagerFactory::getInstance(ref<java::lang::String> algorithm, ref<java::lang::String> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::net::ssl::TrustManagerFactory>>(algorithm, provider); }
inline ref<javax::net::ssl::TrustManagerFactory> TrustManagerFactory::getInstance(ref<java::lang::String> algorithm, ref<java::security::Provider> provider) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<javax::net::ssl::TrustManagerFactory>>(algorithm, provider); }
inline ref<java::security::Provider> TrustManagerFactory::getProvider() { return call_method<SCAPIX_META_STRING("getProvider"), ref<java::security::Provider>>(); }
inline void TrustManagerFactory::init(ref<java::security::KeyStore> ks) { return call_method<SCAPIX_META_STRING("init"), void>(ks); }
inline void TrustManagerFactory::init(ref<javax::net::ssl::ManagerFactoryParameters> spec) { return call_method<SCAPIX_META_STRING("init"), void>(spec); }
inline ref<link::java::array<javax::net::ssl::TrustManager>> TrustManagerFactory::getTrustManagers() { return call_method<SCAPIX_META_STRING("getTrustManagers"), ref<link::java::array<javax::net::ssl::TrustManager>>>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_H