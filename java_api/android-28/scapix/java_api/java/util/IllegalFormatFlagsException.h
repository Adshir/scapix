// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/IllegalFormatException.h>

#ifndef SCAPIX_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_H
#define SCAPIX_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util {

class IllegalFormatFlagsException : public object_base<SCAPIX_META_STRING("java/util/IllegalFormatFlagsException"),
	java::util::IllegalFormatException>
{
public:

	static ref<IllegalFormatFlagsException> new_object(ref<java::lang::String> f);
	ref<java::lang::String> getFlags();
	ref<java::lang::String> getMessage();

protected:

	IllegalFormatFlagsException(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util {

inline ref<IllegalFormatFlagsException> IllegalFormatFlagsException::new_object(ref<java::lang::String> f) { return base_::new_object(f); }
inline ref<java::lang::String> IllegalFormatFlagsException::getFlags() { return call_method<SCAPIX_META_STRING("getFlags"), ref<java::lang::String>>(); }
inline ref<java::lang::String> IllegalFormatFlagsException::getMessage() { return call_method<SCAPIX_META_STRING("getMessage"), ref<java::lang::String>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_H