// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_H
#define SCAPIX_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::net::ssl { class SSLSession; }

namespace javax::net::ssl {

class SSLSessionBindingEvent : public object_base<SCAPIX_META_STRING("javax/net/ssl/SSLSessionBindingEvent"),
	java::util::EventObject>
{
public:

	static ref<SSLSessionBindingEvent> new_object(ref<javax::net::ssl::SSLSession> session, ref<java::lang::String> name);
	ref<java::lang::String> getName();
	ref<javax::net::ssl::SSLSession> getSession();

protected:

	SSLSessionBindingEvent(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<SSLSessionBindingEvent> SSLSessionBindingEvent::new_object(ref<javax::net::ssl::SSLSession> session, ref<java::lang::String> name) { return base_::new_object(session, name); }
inline ref<java::lang::String> SSLSessionBindingEvent::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<javax::net::ssl::SSLSession> SSLSessionBindingEvent::getSession() { return call_method<SCAPIX_META_STRING("getSession"), ref<javax::net::ssl::SSLSession>>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_H