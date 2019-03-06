// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_OS_WORKSOURCE_H
#define SCAPIX_ANDROID_OS_WORKSOURCE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::os {

class WorkSource : public object_base<SCAPIX_META_STRING("android/os/WorkSource"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<WorkSource> new_object();
	static ref<WorkSource> new_object(ref<android::os::WorkSource> orig);
	void clear();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	jboolean diff(ref<android::os::WorkSource> other);
	void set(ref<android::os::WorkSource> other);
	jboolean add(ref<android::os::WorkSource> other);
	jboolean remove(ref<android::os::WorkSource> other);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();

protected:

	WorkSource(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<android::os::Parcelable_Creator> WorkSource::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<WorkSource> WorkSource::new_object() { return base_::new_object(); }
inline ref<WorkSource> WorkSource::new_object(ref<android::os::WorkSource> orig) { return base_::new_object(orig); }
inline void WorkSource::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean WorkSource::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint WorkSource::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean WorkSource::diff(ref<android::os::WorkSource> other) { return call_method<SCAPIX_META_STRING("diff"), jboolean>(other); }
inline void WorkSource::set(ref<android::os::WorkSource> other) { return call_method<SCAPIX_META_STRING("set"), void>(other); }
inline jboolean WorkSource::add(ref<android::os::WorkSource> other) { return call_method<SCAPIX_META_STRING("add"), jboolean>(other); }
inline jboolean WorkSource::remove(ref<android::os::WorkSource> other) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(other); }
inline jint WorkSource::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void WorkSource::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> WorkSource::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_WORKSOURCE_H