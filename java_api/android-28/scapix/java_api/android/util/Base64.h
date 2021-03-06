// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_BASE64_H
#define SCAPIX_ANDROID_UTIL_BASE64_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::util {

class Base64 : public object_base<SCAPIX_META_STRING("android/util/Base64"),
	java::lang::Object>
{
public:

	static jint CRLF_();
	static jint DEFAULT_();
	static jint NO_CLOSE_();
	static jint NO_PADDING_();
	static jint NO_WRAP_();
	static jint URL_SAFE_();

	static ref<link::java::array<jbyte>> decode(ref<java::lang::String> str, jint flags);
	static ref<link::java::array<jbyte>> decode(ref<link::java::array<jbyte>> input, jint flags);
	static ref<link::java::array<jbyte>> decode(ref<link::java::array<jbyte>> input, jint offset, jint len, jint flags);
	static ref<java::lang::String> encodeToString(ref<link::java::array<jbyte>> input, jint flags);
	static ref<java::lang::String> encodeToString(ref<link::java::array<jbyte>> input, jint offset, jint len, jint flags);
	static ref<link::java::array<jbyte>> encode(ref<link::java::array<jbyte>> input, jint flags);
	static ref<link::java::array<jbyte>> encode(ref<link::java::array<jbyte>> input, jint offset, jint len, jint flags);

protected:

	Base64(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::util {

inline jint Base64::CRLF_() { return get_static_field<SCAPIX_META_STRING("CRLF"), jint>(); }
inline jint Base64::DEFAULT_() { return get_static_field<SCAPIX_META_STRING("DEFAULT"), jint>(); }
inline jint Base64::NO_CLOSE_() { return get_static_field<SCAPIX_META_STRING("NO_CLOSE"), jint>(); }
inline jint Base64::NO_PADDING_() { return get_static_field<SCAPIX_META_STRING("NO_PADDING"), jint>(); }
inline jint Base64::NO_WRAP_() { return get_static_field<SCAPIX_META_STRING("NO_WRAP"), jint>(); }
inline jint Base64::URL_SAFE_() { return get_static_field<SCAPIX_META_STRING("URL_SAFE"), jint>(); }
inline ref<link::java::array<jbyte>> Base64::decode(ref<java::lang::String> str, jint flags) { return call_static_method<SCAPIX_META_STRING("decode"), ref<link::java::array<jbyte>>>(str, flags); }
inline ref<link::java::array<jbyte>> Base64::decode(ref<link::java::array<jbyte>> input, jint flags) { return call_static_method<SCAPIX_META_STRING("decode"), ref<link::java::array<jbyte>>>(input, flags); }
inline ref<link::java::array<jbyte>> Base64::decode(ref<link::java::array<jbyte>> input, jint offset, jint len, jint flags) { return call_static_method<SCAPIX_META_STRING("decode"), ref<link::java::array<jbyte>>>(input, offset, len, flags); }
inline ref<java::lang::String> Base64::encodeToString(ref<link::java::array<jbyte>> input, jint flags) { return call_static_method<SCAPIX_META_STRING("encodeToString"), ref<java::lang::String>>(input, flags); }
inline ref<java::lang::String> Base64::encodeToString(ref<link::java::array<jbyte>> input, jint offset, jint len, jint flags) { return call_static_method<SCAPIX_META_STRING("encodeToString"), ref<java::lang::String>>(input, offset, len, flags); }
inline ref<link::java::array<jbyte>> Base64::encode(ref<link::java::array<jbyte>> input, jint flags) { return call_static_method<SCAPIX_META_STRING("encode"), ref<link::java::array<jbyte>>>(input, flags); }
inline ref<link::java::array<jbyte>> Base64::encode(ref<link::java::array<jbyte>> input, jint offset, jint len, jint flags) { return call_static_method<SCAPIX_META_STRING("encode"), ref<link::java::array<jbyte>>>(input, offset, len, flags); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_BASE64_H
