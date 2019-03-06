// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/FloatBuffer.h>

#ifndef SCAPIX_JAVA_NIO_BYTEBUFFERASFLOATBUFFERL_H
#define SCAPIX_JAVA_NIO_BYTEBUFFERASFLOATBUFFERL_H

namespace scapix::java_api {

namespace java::nio { class ByteOrder; }

namespace java::nio {

// private
class ByteBufferAsFloatBufferL : public object_base<SCAPIX_META_STRING("java/nio/ByteBufferAsFloatBufferL"),
	java::nio::FloatBuffer>
{
public:

	ref<java::nio::FloatBuffer> slice();
	ref<java::nio::FloatBuffer> duplicate();
	ref<java::nio::FloatBuffer> asReadOnlyBuffer();
	jfloat get();
	jfloat get(jint i);
	ref<java::nio::FloatBuffer> put(jfloat x);
	ref<java::nio::FloatBuffer> put(jint i, jfloat x);
	ref<java::nio::FloatBuffer> compact();
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::ByteOrder> order();

protected:

	ByteBufferAsFloatBufferL(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::FloatBuffer> ByteBufferAsFloatBufferL::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> ByteBufferAsFloatBufferL::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> ByteBufferAsFloatBufferL::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::FloatBuffer>>(); }
inline jfloat ByteBufferAsFloatBufferL::get() { return call_method<SCAPIX_META_STRING("get"), jfloat>(); }
inline jfloat ByteBufferAsFloatBufferL::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jfloat>(i); }
inline ref<java::nio::FloatBuffer> ByteBufferAsFloatBufferL::put(jfloat x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(x); }
inline ref<java::nio::FloatBuffer> ByteBufferAsFloatBufferL::put(jint i, jfloat x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(i, x); }
inline ref<java::nio::FloatBuffer> ByteBufferAsFloatBufferL::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::FloatBuffer>>(); }
inline jboolean ByteBufferAsFloatBufferL::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean ByteBufferAsFloatBufferL::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::ByteOrder> ByteBufferAsFloatBufferL::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_BYTEBUFFERASFLOATBUFFERL_H