// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/net/SocketImpl.h>

#ifndef SCAPIX_JAVA_NET_ABSTRACTPLAINSOCKETIMPL_H
#define SCAPIX_JAVA_NET_ABSTRACTPLAINSOCKETIMPL_H

namespace scapix::java_api {

namespace java::lang { class Object; }

namespace java::net {

// private
class AbstractPlainSocketImpl : public object_base<SCAPIX_META_STRING("java/net/AbstractPlainSocketImpl"),
	java::net::SocketImpl>
{
public:

	static jint SHUT_RD_();
	static jint SHUT_WR_();

	void setOption(jint opt, ref<java::lang::Object> val);
	ref<java::lang::Object> getOption(jint opt);
	jboolean isClosedOrPending();
	jint getTimeout();

protected:

	AbstractPlainSocketImpl(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>

namespace scapix::java_api {
namespace java::net {

inline jint AbstractPlainSocketImpl::SHUT_RD_() { return get_static_field<SCAPIX_META_STRING("SHUT_RD"), jint>(); }
inline jint AbstractPlainSocketImpl::SHUT_WR_() { return get_static_field<SCAPIX_META_STRING("SHUT_WR"), jint>(); }
inline void AbstractPlainSocketImpl::setOption(jint opt, ref<java::lang::Object> val) { return call_method<SCAPIX_META_STRING("setOption"), void>(opt, val); }
inline ref<java::lang::Object> AbstractPlainSocketImpl::getOption(jint opt) { return call_method<SCAPIX_META_STRING("getOption"), ref<java::lang::Object>>(opt); }
inline jboolean AbstractPlainSocketImpl::isClosedOrPending() { return call_method<SCAPIX_META_STRING("isClosedOrPending"), jboolean>(); }
inline jint AbstractPlainSocketImpl::getTimeout() { return call_method<SCAPIX_META_STRING("getTimeout"), jint>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_ABSTRACTPLAINSOCKETIMPL_H