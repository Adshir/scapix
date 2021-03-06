// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_OS_CPUUSAGEINFO_H
#define SCAPIX_ANDROID_OS_CPUUSAGEINFO_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }

namespace android::os {

class CpuUsageInfo : public object_base<SCAPIX_META_STRING("android/os/CpuUsageInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	jlong getActive();
	jlong getTotal();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> out, jint flags);

protected:

	CpuUsageInfo(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::os {

inline ref<android::os::Parcelable_Creator> CpuUsageInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jlong CpuUsageInfo::getActive() { return call_method<SCAPIX_META_STRING("getActive"), jlong>(); }
inline jlong CpuUsageInfo::getTotal() { return call_method<SCAPIX_META_STRING("getTotal"), jlong>(); }
inline jint CpuUsageInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void CpuUsageInfo::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_CPUUSAGEINFO_H
