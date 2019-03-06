// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY_H
#define SCAPIX_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY_H

namespace scapix::java_api {

namespace java::lang::invoke { class ClassSpecializer; }

namespace java::lang::invoke {

class ClassSpecializer_Factory : public object_base<SCAPIX_META_STRING("java/lang/invoke/ClassSpecializer$Factory"),
	java::lang::Object>
{
public:

	static ref<ClassSpecializer_Factory> new_object(ref<java::lang::invoke::ClassSpecializer> this_0);

protected:

	ClassSpecializer_Factory(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/invoke/ClassSpecializer.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<ClassSpecializer_Factory> ClassSpecializer_Factory::new_object(ref<java::lang::invoke::ClassSpecializer> this_0) { return base_::new_object(this_0); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY_H