// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>
#include <scapix/java_api/java/io/Flushable.h>

#ifndef SCAPIX_JAVA_IO_OUTPUTSTREAM_H
#define SCAPIX_JAVA_IO_OUTPUTSTREAM_H

namespace scapix::java_api {
namespace java::io {

class OutputStream : public object_base<SCAPIX_META_STRING("java/io/OutputStream"),
	java::lang::Object,
	java::io::Closeable,
	java::io::Flushable>
{
public:

	static ref<OutputStream> new_object();
	void write(jint p1);
	void write(ref<link::java::array<jbyte>> b);
	void write(ref<link::java::array<jbyte>> b, jint off, jint len);
	void flush();
	void close();

protected:

	OutputStream(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::io {

inline ref<OutputStream> OutputStream::new_object() { return base_::new_object(); }
inline void OutputStream::write(jint p1) { return call_method<SCAPIX_META_STRING("write"), void>(p1); }
inline void OutputStream::write(ref<link::java::array<jbyte>> b) { return call_method<SCAPIX_META_STRING("write"), void>(b); }
inline void OutputStream::write(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(b, off, len); }
inline void OutputStream::flush() { return call_method<SCAPIX_META_STRING("flush"), void>(); }
inline void OutputStream::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_OUTPUTSTREAM_H
