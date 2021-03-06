// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_CHANNEL_H
#define SCAPIX_JAVA_NIO_CHANNELS_CHANNEL_H

namespace scapix::java_api {
namespace java::nio::channels {

class Channel : public object_base<SCAPIX_META_STRING("java/nio/channels/Channel"),
	java::lang::Object,
	java::io::Closeable>
{
public:

	jboolean isOpen();
	void close();

protected:

	Channel(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::nio::channels {

inline jboolean Channel::isOpen() { return call_method<SCAPIX_META_STRING("isOpen"), jboolean>(); }
inline void Channel::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_CHANNEL_H
