// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_R_PLURALS_H
#define SCAPIX_ANDROID_R_PLURALS_H

namespace scapix::java_api {


namespace android {

class R_plurals : public object_base<SCAPIX_META_STRING("android/R$plurals"),
	java::lang::Object>
{
public:

	static ref<R_plurals> new_object();

protected:

	R_plurals(handle_type h) : base_(h) {}

};

} // namespace android
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android {

inline ref<R_plurals> R_plurals::new_object() { return base_::new_object(); }

} // namespace android
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_R_PLURALS_H