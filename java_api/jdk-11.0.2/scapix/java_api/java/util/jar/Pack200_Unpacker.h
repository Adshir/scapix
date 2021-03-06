// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_JAR_PACK200_UNPACKER_H
#define SCAPIX_JAVA_UTIL_JAR_PACK200_UNPACKER_H

namespace scapix::java_api {

namespace java::io { class File; }
namespace java::io { class InputStream; }
namespace java::lang { class String; }
namespace java::util { class SortedMap; }
namespace java::util::jar { class JarOutputStream; }

namespace java::util::jar {

class Pack200_Unpacker : public object_base<SCAPIX_META_STRING("java/util/jar/Pack200$Unpacker"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> KEEP_();
	static ref<java::lang::String> TRUE_();
	static ref<java::lang::String> FALSE_();
	static ref<java::lang::String> DEFLATE_HINT_();
	static ref<java::lang::String> PROGRESS_();

	ref<java::util::SortedMap> properties();
	void unpack(ref<java::io::InputStream> p1, ref<java::util::jar::JarOutputStream> p2);
	void unpack(ref<java::io::File> p1, ref<java::util::jar::JarOutputStream> p2);

protected:

	Pack200_Unpacker(handle_type h) : base_(h) {}

};

} // namespace java::util::jar
} // namespace scapix::java_api

#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/SortedMap.h>
#include <scapix/java_api/java/util/jar/JarOutputStream.h>

namespace scapix::java_api {
namespace java::util::jar {

inline ref<java::lang::String> Pack200_Unpacker::KEEP_() { return get_static_field<SCAPIX_META_STRING("KEEP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Pack200_Unpacker::TRUE_() { return get_static_field<SCAPIX_META_STRING("TRUE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Pack200_Unpacker::FALSE_() { return get_static_field<SCAPIX_META_STRING("FALSE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Pack200_Unpacker::DEFLATE_HINT_() { return get_static_field<SCAPIX_META_STRING("DEFLATE_HINT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Pack200_Unpacker::PROGRESS_() { return get_static_field<SCAPIX_META_STRING("PROGRESS"), ref<java::lang::String>>(); }
inline ref<java::util::SortedMap> Pack200_Unpacker::properties() { return call_method<SCAPIX_META_STRING("properties"), ref<java::util::SortedMap>>(); }
inline void Pack200_Unpacker::unpack(ref<java::io::InputStream> p1, ref<java::util::jar::JarOutputStream> p2) { return call_method<SCAPIX_META_STRING("unpack"), void>(p1, p2); }
inline void Pack200_Unpacker::unpack(ref<java::io::File> p1, ref<java::util::jar::JarOutputStream> p2) { return call_method<SCAPIX_META_STRING("unpack"), void>(p1, p2); }

} // namespace java::util::jar
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_JAR_PACK200_UNPACKER_H
