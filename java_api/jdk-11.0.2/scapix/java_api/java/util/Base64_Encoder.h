// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_BASE64_ENCODER_H
#define SCAPIX_JAVA_UTIL_BASE64_ENCODER_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }
namespace java::lang { class String; }
namespace java::nio { class ByteBuffer; }

namespace java::util {

class Base64_Encoder : public object_base<SCAPIX_META_STRING("java/util/Base64$Encoder"),
	java::lang::Object>
{
public:

	ref<link::java::array<jbyte>> encode(ref<link::java::array<jbyte>> src);
	jint encode(ref<link::java::array<jbyte>> src, ref<link::java::array<jbyte>> dst);
	ref<java::lang::String> encodeToString(ref<link::java::array<jbyte>> src);
	ref<java::nio::ByteBuffer> encode(ref<java::nio::ByteBuffer> buffer);
	ref<java::io::OutputStream> wrap(ref<java::io::OutputStream> os);
	ref<java::util::Base64_Encoder> withoutPadding();

protected:

	Base64_Encoder(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>

namespace scapix::java_api {
namespace java::util {

inline ref<link::java::array<jbyte>> Base64_Encoder::encode(ref<link::java::array<jbyte>> src) { return call_method<SCAPIX_META_STRING("encode"), ref<link::java::array<jbyte>>>(src); }
inline jint Base64_Encoder::encode(ref<link::java::array<jbyte>> src, ref<link::java::array<jbyte>> dst) { return call_method<SCAPIX_META_STRING("encode"), jint>(src, dst); }
inline ref<java::lang::String> Base64_Encoder::encodeToString(ref<link::java::array<jbyte>> src) { return call_method<SCAPIX_META_STRING("encodeToString"), ref<java::lang::String>>(src); }
inline ref<java::nio::ByteBuffer> Base64_Encoder::encode(ref<java::nio::ByteBuffer> buffer) { return call_method<SCAPIX_META_STRING("encode"), ref<java::nio::ByteBuffer>>(buffer); }
inline ref<java::io::OutputStream> Base64_Encoder::wrap(ref<java::io::OutputStream> os) { return call_method<SCAPIX_META_STRING("wrap"), ref<java::io::OutputStream>>(os); }
inline ref<java::util::Base64_Encoder> Base64_Encoder::withoutPadding() { return call_method<SCAPIX_META_STRING("withoutPadding"), ref<java::util::Base64_Encoder>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_BASE64_ENCODER_H