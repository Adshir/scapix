// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NET_URLENCODER_H
#define SCAPIX_JAVA_NET_URLENCODER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::nio::charset { class Charset; }

namespace java::net {

class URLEncoder : public object_base<SCAPIX_META_STRING("java/net/URLEncoder"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> encode(ref<java::lang::String> s);
	static ref<java::lang::String> encode(ref<java::lang::String> s, ref<java::lang::String> enc);
	static ref<java::lang::String> encode(ref<java::lang::String> s, ref<java::nio::charset::Charset> charset);

protected:

	URLEncoder(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>

namespace scapix::java_api {
namespace java::net {

inline ref<java::lang::String> URLEncoder::encode(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("encode"), ref<java::lang::String>>(s); }
inline ref<java::lang::String> URLEncoder::encode(ref<java::lang::String> s, ref<java::lang::String> enc) { return call_static_method<SCAPIX_META_STRING("encode"), ref<java::lang::String>>(s, enc); }
inline ref<java::lang::String> URLEncoder::encode(ref<java::lang::String> s, ref<java::nio::charset::Charset> charset) { return call_static_method<SCAPIX_META_STRING("encode"), ref<java::lang::String>>(s, charset); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_URLENCODER_H