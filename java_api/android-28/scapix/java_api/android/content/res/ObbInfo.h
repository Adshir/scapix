// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_RES_OBBINFO_H
#define SCAPIX_ANDROID_CONTENT_RES_OBBINFO_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::content::res {

class ObbInfo : public object_base<SCAPIX_META_STRING("android/content/res/ObbInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint OBB_OVERLAY_();
	ref<java::lang::String> filename();
	void filename(ref<java::lang::String>);
	jint flags();
	void flags(jint);
	ref<java::lang::String> packageName();
	void packageName(ref<java::lang::String>);
	jint version();
	void version(jint);

	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags);

protected:

	ObbInfo(handle_type h) : base_(h) {}

};

} // namespace android::content::res
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::res {

inline ref<android::os::Parcelable_Creator> ObbInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint ObbInfo::OBB_OVERLAY_() { return get_static_field<SCAPIX_META_STRING("OBB_OVERLAY"), jint>(); }
inline ref<java::lang::String> ObbInfo::filename() { return get_field<SCAPIX_META_STRING("filename"), ref<java::lang::String>>(); }
inline void ObbInfo::filename(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("filename"), ref<java::lang::String>>(v); }
inline jint ObbInfo::flags() { return get_field<SCAPIX_META_STRING("flags"), jint>(); }
inline void ObbInfo::flags(jint v) { set_field<SCAPIX_META_STRING("flags"), jint>(v); }
inline ref<java::lang::String> ObbInfo::packageName() { return get_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(); }
inline void ObbInfo::packageName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(v); }
inline jint ObbInfo::version() { return get_field<SCAPIX_META_STRING("version"), jint>(); }
inline void ObbInfo::version(jint v) { set_field<SCAPIX_META_STRING("version"), jint>(v); }
inline ref<java::lang::String> ObbInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ObbInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ObbInfo::writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, parcelableFlags); }

} // namespace android::content::res
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_RES_OBBINFO_H