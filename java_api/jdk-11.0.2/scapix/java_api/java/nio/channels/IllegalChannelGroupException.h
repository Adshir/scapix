// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_ILLEGALCHANNELGROUPEXCEPTION_H
#define SCAPIX_JAVA_NIO_CHANNELS_ILLEGALCHANNELGROUPEXCEPTION_H

namespace scapix::java_api {
namespace java::nio::channels {

class IllegalChannelGroupException : public object_base<SCAPIX_META_STRING("java/nio/channels/IllegalChannelGroupException"),
	java::lang::IllegalArgumentException>
{
public:

	static ref<IllegalChannelGroupException> new_object();

protected:

	IllegalChannelGroupException(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::nio::channels {

inline ref<IllegalChannelGroupException> IllegalChannelGroupException::new_object() { return base_::new_object(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_ILLEGALCHANNELGROUPEXCEPTION_H