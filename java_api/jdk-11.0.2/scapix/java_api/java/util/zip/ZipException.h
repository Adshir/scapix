// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_UTIL_ZIP_ZIPEXCEPTION_H
#define SCAPIX_JAVA_UTIL_ZIP_ZIPEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util::zip {

class ZipException : public object_base<SCAPIX_META_STRING("java/util/zip/ZipException"),
	java::io::IOException>
{
public:

	static ref<ZipException> new_object();
	static ref<ZipException> new_object(ref<java::lang::String> s);

protected:

	ZipException(handle_type h) : base_(h) {}

};

} // namespace java::util::zip
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util::zip {

inline ref<ZipException> ZipException::new_object() { return base_::new_object(); }
inline ref<ZipException> ZipException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::util::zip
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ZIP_ZIPEXCEPTION_H