// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS_H
#define SCAPIX_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::net { class Uri; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::content::pm {

class PackageInstaller_SessionParams : public object_base<SCAPIX_META_STRING("android/content/pm/PackageInstaller$SessionParams"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint MODE_FULL_INSTALL_();
	static jint MODE_INHERIT_EXISTING_();

	static ref<PackageInstaller_SessionParams> new_object(jint mode);
	void setInstallLocation(jint installLocation);
	void setSize(jlong sizeBytes);
	void setAppPackageName(ref<java::lang::String> appPackageName);
	void setAppIcon(ref<android::graphics::Bitmap> appIcon);
	void setAppLabel(ref<java::lang::CharSequence> appLabel);
	void setOriginatingUri(ref<android::net::Uri> originatingUri);
	void setOriginatingUid(jint originatingUid);
	void setReferrerUri(ref<android::net::Uri> referrerUri);
	void setInstallReason(jint installReason);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	PackageInstaller_SessionParams(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::pm {

inline ref<android::os::Parcelable_Creator> PackageInstaller_SessionParams::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint PackageInstaller_SessionParams::MODE_FULL_INSTALL_() { return get_static_field<SCAPIX_META_STRING("MODE_FULL_INSTALL"), jint>(); }
inline jint PackageInstaller_SessionParams::MODE_INHERIT_EXISTING_() { return get_static_field<SCAPIX_META_STRING("MODE_INHERIT_EXISTING"), jint>(); }
inline ref<PackageInstaller_SessionParams> PackageInstaller_SessionParams::new_object(jint mode) { return base_::new_object(mode); }
inline void PackageInstaller_SessionParams::setInstallLocation(jint installLocation) { return call_method<SCAPIX_META_STRING("setInstallLocation"), void>(installLocation); }
inline void PackageInstaller_SessionParams::setSize(jlong sizeBytes) { return call_method<SCAPIX_META_STRING("setSize"), void>(sizeBytes); }
inline void PackageInstaller_SessionParams::setAppPackageName(ref<java::lang::String> appPackageName) { return call_method<SCAPIX_META_STRING("setAppPackageName"), void>(appPackageName); }
inline void PackageInstaller_SessionParams::setAppIcon(ref<android::graphics::Bitmap> appIcon) { return call_method<SCAPIX_META_STRING("setAppIcon"), void>(appIcon); }
inline void PackageInstaller_SessionParams::setAppLabel(ref<java::lang::CharSequence> appLabel) { return call_method<SCAPIX_META_STRING("setAppLabel"), void>(appLabel); }
inline void PackageInstaller_SessionParams::setOriginatingUri(ref<android::net::Uri> originatingUri) { return call_method<SCAPIX_META_STRING("setOriginatingUri"), void>(originatingUri); }
inline void PackageInstaller_SessionParams::setOriginatingUid(jint originatingUid) { return call_method<SCAPIX_META_STRING("setOriginatingUid"), void>(originatingUid); }
inline void PackageInstaller_SessionParams::setReferrerUri(ref<android::net::Uri> referrerUri) { return call_method<SCAPIX_META_STRING("setReferrerUri"), void>(referrerUri); }
inline void PackageInstaller_SessionParams::setInstallReason(jint installReason) { return call_method<SCAPIX_META_STRING("setInstallReason"), void>(installReason); }
inline jint PackageInstaller_SessionParams::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void PackageInstaller_SessionParams::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSIONPARAMS_H