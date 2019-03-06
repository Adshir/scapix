// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>

#ifndef SCAPIX_JAVA_SECURITY_ALLPERMISSION_H
#define SCAPIX_JAVA_SECURITY_ALLPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security {

class AllPermission : public object_base<SCAPIX_META_STRING("java/security/AllPermission"),
	java::security::Permission>
{
public:

	static ref<AllPermission> new_object();
	static ref<AllPermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);
	jboolean implies(ref<java::security::Permission> p);
	ref<java::lang::String> getActions();

protected:

	AllPermission(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security {

inline ref<AllPermission> AllPermission::new_object() { return base_::new_object(); }
inline ref<AllPermission> AllPermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }
inline jboolean AllPermission::implies(ref<java::security::Permission> p) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(p); }
inline ref<java::lang::String> AllPermission::getActions() { return call_method<SCAPIX_META_STRING("getActions"), ref<java::lang::String>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_ALLPERMISSION_H