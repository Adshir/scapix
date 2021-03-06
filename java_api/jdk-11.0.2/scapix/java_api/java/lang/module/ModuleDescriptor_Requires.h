// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_REQUIRES_H
#define SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_REQUIRES_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Optional; }
namespace java::util { class Set; }
namespace java::lang::module { class ModuleDescriptor_Requires_Modifier; }

namespace java::lang::module {

class ModuleDescriptor_Requires : public object_base<SCAPIX_META_STRING("java/lang/module/ModuleDescriptor$Requires"),
	java::lang::Object,
	java::lang::Comparable>
{
public:

	using Modifier = ModuleDescriptor_Requires_Modifier;

	ref<java::util::Set> modifiers();
	ref<java::lang::String> name();
	ref<java::util::Optional> compiledVersion();
	ref<java::util::Optional> rawCompiledVersion();
	jint compareTo(ref<java::lang::module::ModuleDescriptor_Requires> that);
	jboolean equals(ref<java::lang::Object> ob);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	ModuleDescriptor_Requires(handle_type h) : base_(h) {}

};

} // namespace java::lang::module
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::lang::module {

inline ref<java::util::Set> ModuleDescriptor_Requires::modifiers() { return call_method<SCAPIX_META_STRING("modifiers"), ref<java::util::Set>>(); }
inline ref<java::lang::String> ModuleDescriptor_Requires::name() { return call_method<SCAPIX_META_STRING("name"), ref<java::lang::String>>(); }
inline ref<java::util::Optional> ModuleDescriptor_Requires::compiledVersion() { return call_method<SCAPIX_META_STRING("compiledVersion"), ref<java::util::Optional>>(); }
inline ref<java::util::Optional> ModuleDescriptor_Requires::rawCompiledVersion() { return call_method<SCAPIX_META_STRING("rawCompiledVersion"), ref<java::util::Optional>>(); }
inline jint ModuleDescriptor_Requires::compareTo(ref<java::lang::module::ModuleDescriptor_Requires> that) { return call_method<SCAPIX_META_STRING("compareTo"), jint>(that); }
inline jboolean ModuleDescriptor_Requires::equals(ref<java::lang::Object> ob) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(ob); }
inline jint ModuleDescriptor_Requires::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> ModuleDescriptor_Requires::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::lang::module
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_REQUIRES_H
