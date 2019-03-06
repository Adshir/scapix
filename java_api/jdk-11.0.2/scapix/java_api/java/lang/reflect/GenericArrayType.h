// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/Type.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_GENERICARRAYTYPE_H
#define SCAPIX_JAVA_LANG_REFLECT_GENERICARRAYTYPE_H

namespace scapix::java_api {
namespace java::lang::reflect {

class GenericArrayType : public object_base<SCAPIX_META_STRING("java/lang/reflect/GenericArrayType"),
	java::lang::Object,
	java::lang::reflect::Type>
{
public:

	ref<java::lang::reflect::Type> getGenericComponentType();

protected:

	GenericArrayType(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<java::lang::reflect::Type> GenericArrayType::getGenericComponentType() { return call_method<SCAPIX_META_STRING("getGenericComponentType"), ref<java::lang::reflect::Type>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_GENERICARRAYTYPE_H