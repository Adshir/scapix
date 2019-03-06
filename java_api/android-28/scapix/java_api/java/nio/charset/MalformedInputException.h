// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharacterCodingException.h>

#ifndef SCAPIX_JAVA_NIO_CHARSET_MALFORMEDINPUTEXCEPTION_H
#define SCAPIX_JAVA_NIO_CHARSET_MALFORMEDINPUTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::nio::charset {

class MalformedInputException : public object_base<SCAPIX_META_STRING("java/nio/charset/MalformedInputException"),
	java::nio::charset::CharacterCodingException>
{
public:

	static ref<MalformedInputException> new_object(jint inputLength);
	jint getInputLength();
	ref<java::lang::String> getMessage();

protected:

	MalformedInputException(handle_type h) : base_(h) {}

};

} // namespace java::nio::charset
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::nio::charset {

inline ref<MalformedInputException> MalformedInputException::new_object(jint inputLength) { return base_::new_object(inputLength); }
inline jint MalformedInputException::getInputLength() { return call_method<SCAPIX_META_STRING("getInputLength"), jint>(); }
inline ref<java::lang::String> MalformedInputException::getMessage() { return call_method<SCAPIX_META_STRING("getMessage"), ref<java::lang::String>>(); }

} // namespace java::nio::charset
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHARSET_MALFORMEDINPUTEXCEPTION_H