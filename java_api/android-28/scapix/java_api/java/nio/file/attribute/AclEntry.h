// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_H
#define SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::nio::file::attribute { class AclEntry_Builder; }
namespace java::nio::file::attribute { class AclEntryType; }
namespace java::nio::file::attribute { class UserPrincipal; }
namespace java::util { class Set; }

namespace java::nio::file::attribute {

class AclEntry : public object_base<SCAPIX_META_STRING("java/nio/file/attribute/AclEntry"),
	java::lang::Object>
{
public:

	using Builder = AclEntry_Builder;

	static ref<java::nio::file::attribute::AclEntry_Builder> newBuilder();
	static ref<java::nio::file::attribute::AclEntry_Builder> newBuilder(ref<java::nio::file::attribute::AclEntry> entry);
	ref<java::nio::file::attribute::AclEntryType> type();
	ref<java::nio::file::attribute::UserPrincipal> principal();
	ref<java::util::Set> permissions();
	ref<java::util::Set> flags();
	jboolean equals(ref<java::lang::Object> ob);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	AclEntry(handle_type h) : base_(h) {}

};

} // namespace java::nio::file::attribute
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/attribute/AclEntry_Builder.h>
#include <scapix/java_api/java/nio/file/attribute/AclEntryType.h>
#include <scapix/java_api/java/nio/file/attribute/UserPrincipal.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::nio::file::attribute {

inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry::newBuilder() { return call_static_method<SCAPIX_META_STRING("newBuilder"), ref<java::nio::file::attribute::AclEntry_Builder>>(); }
inline ref<java::nio::file::attribute::AclEntry_Builder> AclEntry::newBuilder(ref<java::nio::file::attribute::AclEntry> entry) { return call_static_method<SCAPIX_META_STRING("newBuilder"), ref<java::nio::file::attribute::AclEntry_Builder>>(entry); }
inline ref<java::nio::file::attribute::AclEntryType> AclEntry::type() { return call_method<SCAPIX_META_STRING("type"), ref<java::nio::file::attribute::AclEntryType>>(); }
inline ref<java::nio::file::attribute::UserPrincipal> AclEntry::principal() { return call_method<SCAPIX_META_STRING("principal"), ref<java::nio::file::attribute::UserPrincipal>>(); }
inline ref<java::util::Set> AclEntry::permissions() { return call_method<SCAPIX_META_STRING("permissions"), ref<java::util::Set>>(); }
inline ref<java::util::Set> AclEntry::flags() { return call_method<SCAPIX_META_STRING("flags"), ref<java::util::Set>>(); }
inline jboolean AclEntry::equals(ref<java::lang::Object> ob) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(ob); }
inline jint AclEntry::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> AclEntry::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::nio::file::attribute
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_H