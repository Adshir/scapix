// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/attribute/BasicFileAttributes.h>

#ifndef SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEATTRIBUTES_H
#define SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEATTRIBUTES_H

namespace scapix::java_api {

namespace java::nio::file::attribute { class GroupPrincipal; }
namespace java::nio::file::attribute { class UserPrincipal; }
namespace java::util { class Set; }

namespace java::nio::file::attribute {

class PosixFileAttributes : public object_base<SCAPIX_META_STRING("java/nio/file/attribute/PosixFileAttributes"),
	java::lang::Object,
	java::nio::file::attribute::BasicFileAttributes>
{
public:

	ref<java::nio::file::attribute::UserPrincipal> owner();
	ref<java::nio::file::attribute::GroupPrincipal> group();
	ref<java::util::Set> permissions();

protected:

	PosixFileAttributes(handle_type h) : base_(h) {}

};

} // namespace java::nio::file::attribute
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/file/attribute/GroupPrincipal.h>
#include <scapix/java_api/java/nio/file/attribute/UserPrincipal.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::nio::file::attribute {

inline ref<java::nio::file::attribute::UserPrincipal> PosixFileAttributes::owner() { return call_method<SCAPIX_META_STRING("owner"), ref<java::nio::file::attribute::UserPrincipal>>(); }
inline ref<java::nio::file::attribute::GroupPrincipal> PosixFileAttributes::group() { return call_method<SCAPIX_META_STRING("group"), ref<java::nio::file::attribute::GroupPrincipal>>(); }
inline ref<java::util::Set> PosixFileAttributes::permissions() { return call_method<SCAPIX_META_STRING("permissions"), ref<java::util::Set>>(); }

} // namespace java::nio::file::attribute
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEATTRIBUTES_H
