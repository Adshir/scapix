// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/CharBuffer.h>

#ifndef SCAPIX_JAVA_NIO_STRINGCHARBUFFER_H
#define SCAPIX_JAVA_NIO_STRINGCHARBUFFER_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::nio { class ByteOrder; }

namespace java::nio {

// private
class StringCharBuffer : public object_base<SCAPIX_META_STRING("java/nio/StringCharBuffer"),
	java::nio::CharBuffer>
{
public:

	ref<java::nio::CharBuffer> slice();
	ref<java::nio::CharBuffer> duplicate();
	ref<java::nio::CharBuffer> asReadOnlyBuffer();
	jchar get();
	jchar get(jint index);
	ref<java::nio::CharBuffer> put(jchar c);
	ref<java::nio::CharBuffer> put(jint index, jchar c);
	ref<java::nio::CharBuffer> compact();
	jboolean isReadOnly();
	ref<java::nio::CharBuffer> subSequence(jint start, jint end);
	jboolean isDirect();
	ref<java::nio::ByteOrder> order();
	jboolean equals(ref<java::lang::Object> ob);
	jint compareTo(ref<java::nio::CharBuffer> that);

protected:

	StringCharBuffer(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::CharBuffer> StringCharBuffer::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> StringCharBuffer::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> StringCharBuffer::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::CharBuffer>>(); }
inline jchar StringCharBuffer::get() { return call_method<SCAPIX_META_STRING("get"), jchar>(); }
inline jchar StringCharBuffer::get(jint index) { return call_method<SCAPIX_META_STRING("get"), jchar>(index); }
inline ref<java::nio::CharBuffer> StringCharBuffer::put(jchar c) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(c); }
inline ref<java::nio::CharBuffer> StringCharBuffer::put(jint index, jchar c) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(index, c); }
inline ref<java::nio::CharBuffer> StringCharBuffer::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::CharBuffer>>(); }
inline jboolean StringCharBuffer::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::CharBuffer> StringCharBuffer::subSequence(jint start, jint end) { return call_method<SCAPIX_META_STRING("subSequence"), ref<java::nio::CharBuffer>>(start, end); }
inline jboolean StringCharBuffer::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline ref<java::nio::ByteOrder> StringCharBuffer::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }
inline jboolean StringCharBuffer::equals(ref<java::lang::Object> ob) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(ob); }
inline jint StringCharBuffer::compareTo(ref<java::nio::CharBuffer> that) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(that); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_STRINGCHARBUFFER_H