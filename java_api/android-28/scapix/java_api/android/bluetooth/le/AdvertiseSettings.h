// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_H
#define SCAPIX_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::bluetooth::le { class AdvertiseSettings_Builder; }

namespace android::bluetooth::le {

class AdvertiseSettings : public object_base<SCAPIX_META_STRING("android/bluetooth/le/AdvertiseSettings"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AdvertiseSettings_Builder;

	static jint ADVERTISE_MODE_BALANCED_();
	static jint ADVERTISE_MODE_LOW_LATENCY_();
	static jint ADVERTISE_MODE_LOW_POWER_();
	static jint ADVERTISE_TX_POWER_HIGH_();
	static jint ADVERTISE_TX_POWER_LOW_();
	static jint ADVERTISE_TX_POWER_MEDIUM_();
	static jint ADVERTISE_TX_POWER_ULTRA_LOW_();
	static ref<android::os::Parcelable_Creator> CREATOR_();

	jint getMode();
	jint getTxPowerLevel();
	jboolean isConnectable();
	jint getTimeout();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	AdvertiseSettings(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::bluetooth::le {

inline jint AdvertiseSettings::ADVERTISE_MODE_BALANCED_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_MODE_BALANCED"), jint>(); }
inline jint AdvertiseSettings::ADVERTISE_MODE_LOW_LATENCY_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_MODE_LOW_LATENCY"), jint>(); }
inline jint AdvertiseSettings::ADVERTISE_MODE_LOW_POWER_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_MODE_LOW_POWER"), jint>(); }
inline jint AdvertiseSettings::ADVERTISE_TX_POWER_HIGH_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_TX_POWER_HIGH"), jint>(); }
inline jint AdvertiseSettings::ADVERTISE_TX_POWER_LOW_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_TX_POWER_LOW"), jint>(); }
inline jint AdvertiseSettings::ADVERTISE_TX_POWER_MEDIUM_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_TX_POWER_MEDIUM"), jint>(); }
inline jint AdvertiseSettings::ADVERTISE_TX_POWER_ULTRA_LOW_() { return get_static_field<SCAPIX_META_STRING("ADVERTISE_TX_POWER_ULTRA_LOW"), jint>(); }
inline ref<android::os::Parcelable_Creator> AdvertiseSettings::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint AdvertiseSettings::getMode() { return call_method<SCAPIX_META_STRING("getMode"), jint>(); }
inline jint AdvertiseSettings::getTxPowerLevel() { return call_method<SCAPIX_META_STRING("getTxPowerLevel"), jint>(); }
inline jboolean AdvertiseSettings::isConnectable() { return call_method<SCAPIX_META_STRING("isConnectable"), jboolean>(); }
inline jint AdvertiseSettings::getTimeout() { return call_method<SCAPIX_META_STRING("getTimeout"), jint>(); }
inline ref<java::lang::String> AdvertiseSettings::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint AdvertiseSettings::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AdvertiseSettings::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::bluetooth::le
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_H
