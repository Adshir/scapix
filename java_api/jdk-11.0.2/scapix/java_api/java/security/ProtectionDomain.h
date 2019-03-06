// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SECURITY_PROTECTIONDOMAIN_H
#define SCAPIX_JAVA_SECURITY_PROTECTIONDOMAIN_H

namespace scapix::java_api {

namespace java::lang { class ClassLoader; }
namespace java::lang { class String; }
namespace java::security { class CodeSource; }
namespace java::security { class Permission; }
namespace java::security { class PermissionCollection; }
namespace java::security { class Principal; }

namespace java::security {

class ProtectionDomain : public object_base<SCAPIX_META_STRING("java/security/ProtectionDomain"),
	java::lang::Object>
{
public:

	static ref<ProtectionDomain> new_object(ref<java::security::CodeSource> codesource, ref<java::security::PermissionCollection> permissions);
	static ref<ProtectionDomain> new_object(ref<java::security::CodeSource> codesource, ref<java::security::PermissionCollection> permissions, ref<java::lang::ClassLoader> classloader, ref<link::java::array<java::security::Principal>> principals);
	ref<java::security::CodeSource> getCodeSource();
	ref<java::lang::ClassLoader> getClassLoader();
	ref<link::java::array<java::security::Principal>> getPrincipals();
	ref<java::security::PermissionCollection> getPermissions();
	jboolean staticPermissionsOnly();
	jboolean implies(ref<java::security::Permission> perm);
	ref<java::lang::String> toString();

protected:

	ProtectionDomain(handle_type h) : base_(h) {}

};

} // namespace java::security
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/CodeSource.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#include <scapix/java_api/java/security/Principal.h>

namespace scapix::java_api {
namespace java::security {

inline ref<ProtectionDomain> ProtectionDomain::new_object(ref<java::security::CodeSource> codesource, ref<java::security::PermissionCollection> permissions) { return base_::new_object(codesource, permissions); }
inline ref<ProtectionDomain> ProtectionDomain::new_object(ref<java::security::CodeSource> codesource, ref<java::security::PermissionCollection> permissions, ref<java::lang::ClassLoader> classloader, ref<link::java::array<java::security::Principal>> principals) { return base_::new_object(codesource, permissions, classloader, principals); }
inline ref<java::security::CodeSource> ProtectionDomain::getCodeSource() { return call_method<SCAPIX_META_STRING("getCodeSource"), ref<java::security::CodeSource>>(); }
inline ref<java::lang::ClassLoader> ProtectionDomain::getClassLoader() { return call_method<SCAPIX_META_STRING("getClassLoader"), ref<java::lang::ClassLoader>>(); }
inline ref<link::java::array<java::security::Principal>> ProtectionDomain::getPrincipals() { return call_method<SCAPIX_META_STRING("getPrincipals"), ref<link::java::array<java::security::Principal>>>(); }
inline ref<java::security::PermissionCollection> ProtectionDomain::getPermissions() { return call_method<SCAPIX_META_STRING("getPermissions"), ref<java::security::PermissionCollection>>(); }
inline jboolean ProtectionDomain::staticPermissionsOnly() { return call_method<SCAPIX_META_STRING("staticPermissionsOnly"), jboolean>(); }
inline jboolean ProtectionDomain::implies(ref<java::security::Permission> perm) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(perm); }
inline ref<java::lang::String> ProtectionDomain::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::security
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_PROTECTIONDOMAIN_H