// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVAX_NET_SSL_HANDSHAKECOMPLETEDLISTENER_H
#define SCAPIX_JAVAX_NET_SSL_HANDSHAKECOMPLETEDLISTENER_H

namespace scapix::java_api {

namespace javax::net::ssl { class HandshakeCompletedEvent; }

namespace javax::net::ssl {

class HandshakeCompletedListener : public object_base<SCAPIX_META_STRING("javax/net/ssl/HandshakeCompletedListener"),
	java::lang::Object,
	java::util::EventListener>
{
public:

	void handshakeCompleted(ref<javax::net::ssl::HandshakeCompletedEvent> p1);

protected:

	HandshakeCompletedListener(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/javax/net/ssl/HandshakeCompletedEvent.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline void HandshakeCompletedListener::handshakeCompleted(ref<javax::net::ssl::HandshakeCompletedEvent> p1) { return call_method<SCAPIX_META_STRING("handshakeCompleted"), void>(p1); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_HANDSHAKECOMPLETEDLISTENER_H