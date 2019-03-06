// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_SECURITY_BASICPERMISSION_H
#define SCAPIX_JAVA_SECURITY_BASICPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security {

class BasicPermission : public object_base<SCAPIX_META_STRING("java/security/BasicPermission"),
	java::security::Permission,
	java::io::Serializable>
{
public:

	static ref<BasicPermission> new_object(ref<java::lang::String> name);
	static ref<BasicPermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);
	jboolean implies(ref<java::security::Permission> p);
	ref<java::lang::String> getActions();

protected:

	BasicPermission(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security {

inline ref<BasicPermission> BasicPermission::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<BasicPermission> BasicPermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }
inline jboolean BasicPermission::implies(ref<java::security::Permission> p) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(p); }
inline ref<java::lang::String> BasicPermission::getActions() { return call_method<SCAPIX_META_STRING("getActions"), ref<java::lang::String>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_BASICPERMISSION_H