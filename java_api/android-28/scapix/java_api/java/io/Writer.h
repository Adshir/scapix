// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/io/Closeable.h>
#include <scapix/java_api/java/io/Flushable.h>

#ifndef SCAPIX_JAVA_IO_WRITER_H
#define SCAPIX_JAVA_IO_WRITER_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace java::io {

class Writer : public object_base<SCAPIX_META_STRING("java/io/Writer"),
	java::lang::Object,
	java::lang::Appendable,
	java::io::Closeable,
	java::io::Flushable>
{
public:

	void write(jint c);
	void write(ref<link::java::array<jchar>> cbuf);
	void write(ref<link::java::array<jchar>> p1, jint p2, jint p3);
	void write(ref<java::lang::String> str);
	void write(ref<java::lang::String> str, jint off, jint len);
	ref<java::io::Writer> append(ref<java::lang::CharSequence> csq);
	ref<java::io::Writer> append(ref<java::lang::CharSequence> csq, jint start, jint end);
	ref<java::io::Writer> append(jchar c);
	void flush();
	void close();

protected:

	Writer(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::io {

inline void Writer::write(jint c) { return call_method<SCAPIX_META_STRING("write"), void>(c); }
inline void Writer::write(ref<link::java::array<jchar>> cbuf) { return call_method<SCAPIX_META_STRING("write"), void>(cbuf); }
inline void Writer::write(ref<link::java::array<jchar>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("write"), void>(p1, p2, p3); }
inline void Writer::write(ref<java::lang::String> str) { return call_method<SCAPIX_META_STRING("write"), void>(str); }
inline void Writer::write(ref<java::lang::String> str, jint off, jint len) { return call_method<SCAPIX_META_STRING("write"), void>(str, off, len); }
inline ref<java::io::Writer> Writer::append(ref<java::lang::CharSequence> csq) { return call_method<SCAPIX_META_STRING("append"), ref<java::io::Writer>>(csq); }
inline ref<java::io::Writer> Writer::append(ref<java::lang::CharSequence> csq, jint start, jint end) { return call_method<SCAPIX_META_STRING("append"), ref<java::io::Writer>>(csq, start, end); }
inline ref<java::io::Writer> Writer::append(jchar c) { return call_method<SCAPIX_META_STRING("append"), ref<java::io::Writer>>(c); }
inline void Writer::flush() { return call_method<SCAPIX_META_STRING("flush"), void>(); }
inline void Writer::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_WRITER_H
