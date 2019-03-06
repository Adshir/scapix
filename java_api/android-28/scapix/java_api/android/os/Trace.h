// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_TRACE_H
#define SCAPIX_ANDROID_OS_TRACE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::os {

class Trace : public object_base<SCAPIX_META_STRING("android/os/Trace"),
	java::lang::Object>
{
public:

	static void beginSection(ref<java::lang::String> sectionName);
	static void endSection();

protected:

	Trace(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline void Trace::beginSection(ref<java::lang::String> sectionName) { return call_static_method<SCAPIX_META_STRING("beginSection"), void>(sectionName); }
inline void Trace::endSection() { return call_static_method<SCAPIX_META_STRING("endSection"), void>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_TRACE_H