// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/DataOutput.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_IO_OBJECTOUTPUT_H
#define SCAPIX_JAVA_IO_OBJECTOUTPUT_H

namespace scapix::java_api {
namespace java::io {

class ObjectOutput : public object_base<SCAPIX_META_STRING("java/io/ObjectOutput"),
	java::lang::Object,
	java::io::DataOutput,
	java::lang::AutoCloseable>
{
public:

	void writeObject(ref<java::lang::Object> p1);
	void write(jint p1);
	void write(ref<link::java::array<jbyte>> p1);
	void write(ref<link::java::array<jbyte>> p1, jint p2, jint p3);
	void flush();
	void close();

protected:

	ObjectOutput(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::io {

inline void ObjectOutput::writeObject(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("writeObject"), void>(p1); }
inline void ObjectOutput::write(jint p1) { return call_method<SCAPIX_META_STRING("write"), void>(p1); }
inline void ObjectOutput::write(ref<link::java::array<jbyte>> p1) { return call_method<SCAPIX_META_STRING("write"), void>(p1); }
inline void ObjectOutput::write(ref<link::java::array<jbyte>> p1, jint p2, jint p3) { return call_method<SCAPIX_META_STRING("write"), void>(p1, p2, p3); }
inline void ObjectOutput::flush() { return call_method<SCAPIX_META_STRING("flush"), void>(); }
inline void ObjectOutput::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_OBJECTOUTPUT_H