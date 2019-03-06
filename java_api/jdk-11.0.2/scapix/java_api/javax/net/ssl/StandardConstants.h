// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_NET_SSL_STANDARDCONSTANTS_H
#define SCAPIX_JAVAX_NET_SSL_STANDARDCONSTANTS_H

namespace scapix::java_api {
namespace javax::net::ssl {

class StandardConstants : public object_base<SCAPIX_META_STRING("javax/net/ssl/StandardConstants"),
	java::lang::Object>
{
public:

	static jint SNI_HOST_NAME_();


protected:

	StandardConstants(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api


namespace scapix::java_api {
namespace javax::net::ssl {

inline jint StandardConstants::SNI_HOST_NAME_() { return get_static_field<SCAPIX_META_STRING("SNI_HOST_NAME"), jint>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_STANDARDCONSTANTS_H