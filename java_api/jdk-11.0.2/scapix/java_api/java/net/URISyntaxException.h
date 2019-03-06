// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_NET_URISYNTAXEXCEPTION_H
#define SCAPIX_JAVA_NET_URISYNTAXEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::net {

class URISyntaxException : public object_base<SCAPIX_META_STRING("java/net/URISyntaxException"),
	java::lang::Exception>
{
public:

	static ref<URISyntaxException> new_object(ref<java::lang::String> input, ref<java::lang::String> reason, jint index);
	static ref<URISyntaxException> new_object(ref<java::lang::String> input, ref<java::lang::String> reason);
	ref<java::lang::String> getInput();
	ref<java::lang::String> getReason();
	jint getIndex();
	ref<java::lang::String> getMessage();

protected:

	URISyntaxException(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::net {

inline ref<URISyntaxException> URISyntaxException::new_object(ref<java::lang::String> input, ref<java::lang::String> reason, jint index) { return base_::new_object(input, reason, index); }
inline ref<URISyntaxException> URISyntaxException::new_object(ref<java::lang::String> input, ref<java::lang::String> reason) { return base_::new_object(input, reason); }
inline ref<java::lang::String> URISyntaxException::getInput() { return call_method<SCAPIX_META_STRING("getInput"), ref<java::lang::String>>(); }
inline ref<java::lang::String> URISyntaxException::getReason() { return call_method<SCAPIX_META_STRING("getReason"), ref<java::lang::String>>(); }
inline jint URISyntaxException::getIndex() { return call_method<SCAPIX_META_STRING("getIndex"), jint>(); }
inline ref<java::lang::String> URISyntaxException::getMessage() { return call_method<SCAPIX_META_STRING("getMessage"), ref<java::lang::String>>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_URISYNTAXEXCEPTION_H