// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/net/ServerSocket.h>

#ifndef SCAPIX_JAVAX_NET_SSL_SSLSERVERSOCKET_H
#define SCAPIX_JAVAX_NET_SSL_SSLSERVERSOCKET_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::net::ssl { class SSLParameters; }

namespace javax::net::ssl {

class SSLServerSocket : public object_base<SCAPIX_META_STRING("javax/net/ssl/SSLServerSocket"),
	java::net::ServerSocket>
{
public:

	ref<link::java::array<java::lang::String>> getEnabledCipherSuites();
	void setEnabledCipherSuites(ref<link::java::array<java::lang::String>> p1);
	ref<link::java::array<java::lang::String>> getSupportedCipherSuites();
	ref<link::java::array<java::lang::String>> getSupportedProtocols();
	ref<link::java::array<java::lang::String>> getEnabledProtocols();
	void setEnabledProtocols(ref<link::java::array<java::lang::String>> p1);
	void setNeedClientAuth(jboolean p1);
	jboolean getNeedClientAuth();
	void setWantClientAuth(jboolean p1);
	jboolean getWantClientAuth();
	void setUseClientMode(jboolean p1);
	jboolean getUseClientMode();
	void setEnableSessionCreation(jboolean p1);
	jboolean getEnableSessionCreation();
	ref<javax::net::ssl::SSLParameters> getSSLParameters();
	void setSSLParameters(ref<javax::net::ssl::SSLParameters> params);

protected:

	SSLServerSocket(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/net/ssl/SSLParameters.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<link::java::array<java::lang::String>> SSLServerSocket::getEnabledCipherSuites() { return call_method<SCAPIX_META_STRING("getEnabledCipherSuites"), ref<link::java::array<java::lang::String>>>(); }
inline void SSLServerSocket::setEnabledCipherSuites(ref<link::java::array<java::lang::String>> p1) { return call_method<SCAPIX_META_STRING("setEnabledCipherSuites"), void>(p1); }
inline ref<link::java::array<java::lang::String>> SSLServerSocket::getSupportedCipherSuites() { return call_method<SCAPIX_META_STRING("getSupportedCipherSuites"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> SSLServerSocket::getSupportedProtocols() { return call_method<SCAPIX_META_STRING("getSupportedProtocols"), ref<link::java::array<java::lang::String>>>(); }
inline ref<link::java::array<java::lang::String>> SSLServerSocket::getEnabledProtocols() { return call_method<SCAPIX_META_STRING("getEnabledProtocols"), ref<link::java::array<java::lang::String>>>(); }
inline void SSLServerSocket::setEnabledProtocols(ref<link::java::array<java::lang::String>> p1) { return call_method<SCAPIX_META_STRING("setEnabledProtocols"), void>(p1); }
inline void SSLServerSocket::setNeedClientAuth(jboolean p1) { return call_method<SCAPIX_META_STRING("setNeedClientAuth"), void>(p1); }
inline jboolean SSLServerSocket::getNeedClientAuth() { return call_method<SCAPIX_META_STRING("getNeedClientAuth"), jboolean>(); }
inline void SSLServerSocket::setWantClientAuth(jboolean p1) { return call_method<SCAPIX_META_STRING("setWantClientAuth"), void>(p1); }
inline jboolean SSLServerSocket::getWantClientAuth() { return call_method<SCAPIX_META_STRING("getWantClientAuth"), jboolean>(); }
inline void SSLServerSocket::setUseClientMode(jboolean p1) { return call_method<SCAPIX_META_STRING("setUseClientMode"), void>(p1); }
inline jboolean SSLServerSocket::getUseClientMode() { return call_method<SCAPIX_META_STRING("getUseClientMode"), jboolean>(); }
inline void SSLServerSocket::setEnableSessionCreation(jboolean p1) { return call_method<SCAPIX_META_STRING("setEnableSessionCreation"), void>(p1); }
inline jboolean SSLServerSocket::getEnableSessionCreation() { return call_method<SCAPIX_META_STRING("getEnableSessionCreation"), jboolean>(); }
inline ref<javax::net::ssl::SSLParameters> SSLServerSocket::getSSLParameters() { return call_method<SCAPIX_META_STRING("getSSLParameters"), ref<javax::net::ssl::SSLParameters>>(); }
inline void SSLServerSocket::setSSLParameters(ref<javax::net::ssl::SSLParameters> params) { return call_method<SCAPIX_META_STRING("setSSLParameters"), void>(params); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_SSLSERVERSOCKET_H