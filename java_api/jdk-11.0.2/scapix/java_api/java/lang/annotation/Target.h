// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_LANG_ANNOTATION_TARGET_H
#define SCAPIX_JAVA_LANG_ANNOTATION_TARGET_H

namespace scapix::java_api {

namespace java::lang::annotation { class ElementType; }

namespace java::lang::annotation {

class Target : public object_base<SCAPIX_META_STRING("java/lang/annotation/Target"),
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	ref<link::java::array<java::lang::annotation::ElementType>> value();

protected:

	Target(handle_type h) : base_(h) {}

};

} // namespace java::lang::annotation
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/annotation/ElementType.h>

namespace scapix::java_api {
namespace java::lang::annotation {

inline ref<link::java::array<java::lang::annotation::ElementType>> Target::value() { return call_method<SCAPIX_META_STRING("value"), ref<link::java::array<java::lang::annotation::ElementType>>>(); }

} // namespace java::lang::annotation
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_ANNOTATION_TARGET_H