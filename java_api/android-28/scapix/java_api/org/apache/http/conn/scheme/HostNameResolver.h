// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_H
#define SCAPIX_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::net { class InetAddress; }

namespace org::apache::http::conn::scheme {

class HostNameResolver : public object_base<SCAPIX_META_STRING("org/apache/http/conn/scheme/HostNameResolver"),
	java::lang::Object>
{
public:

	ref<java::net::InetAddress> resolve(ref<java::lang::String> p1);

protected:

	HostNameResolver(handle_type h) : base_(h) {}

};

} // namespace org::apache::http::conn::scheme
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>

namespace scapix::java_api {
namespace org::apache::http::conn::scheme {

inline ref<java::net::InetAddress> HostNameResolver::resolve(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("resolve"), ref<java::net::InetAddress>>(p1); }

} // namespace org::apache::http::conn::scheme
} // namespace scapix::java_api

#endif // SCAPIX_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_H