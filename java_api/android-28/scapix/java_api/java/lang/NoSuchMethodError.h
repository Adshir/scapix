// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IncompatibleClassChangeError.h>

#ifndef SCAPIX_JAVA_LANG_NOSUCHMETHODERROR_H
#define SCAPIX_JAVA_LANG_NOSUCHMETHODERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class NoSuchMethodError : public object_base<SCAPIX_META_STRING("java/lang/NoSuchMethodError"),
	java::lang::IncompatibleClassChangeError>
{
public:

	static ref<NoSuchMethodError> new_object();
	static ref<NoSuchMethodError> new_object(ref<java::lang::String> s);

protected:

	NoSuchMethodError(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<NoSuchMethodError> NoSuchMethodError::new_object() { return base_::new_object(); }
inline ref<NoSuchMethodError> NoSuchMethodError::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_NOSUCHMETHODERROR_H