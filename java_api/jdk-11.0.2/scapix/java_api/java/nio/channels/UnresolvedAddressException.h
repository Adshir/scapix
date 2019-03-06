// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_H
#define SCAPIX_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_H

namespace scapix::java_api {
namespace java::nio::channels {

class UnresolvedAddressException : public object_base<SCAPIX_META_STRING("java/nio/channels/UnresolvedAddressException"),
	java::lang::IllegalArgumentException>
{
public:

	static ref<UnresolvedAddressException> new_object();

protected:

	UnresolvedAddressException(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::nio::channels {

inline ref<UnresolvedAddressException> UnresolvedAddressException::new_object() { return base_::new_object(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_H