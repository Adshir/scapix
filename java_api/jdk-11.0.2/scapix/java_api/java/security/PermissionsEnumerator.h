// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_SECURITY_PERMISSIONSENUMERATOR_H
#define SCAPIX_JAVA_SECURITY_PERMISSIONSENUMERATOR_H

namespace scapix::java_api {

namespace java::security { class Permission; }

namespace java::security {

// private
class PermissionsEnumerator : public object_base<SCAPIX_META_STRING("java/security/PermissionsEnumerator"),
	java::lang::Object,
	java::util::Enumeration>
{
public:

	jboolean hasMoreElements();
	ref<java::security::Permission> nextElement();

protected:

	PermissionsEnumerator(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/security/Permission.h>

namespace scapix::java_api {
namespace java::security {

inline jboolean PermissionsEnumerator::hasMoreElements() { return call_method<SCAPIX_META_STRING("hasMoreElements"), jboolean>(); }
inline ref<java::security::Permission> PermissionsEnumerator::nextElement() { return call_method<SCAPIX_META_STRING("nextElement"), ref<java::security::Permission>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_PERMISSIONSENUMERATOR_H