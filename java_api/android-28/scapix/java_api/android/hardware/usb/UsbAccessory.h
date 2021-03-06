// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_HARDWARE_USB_USBACCESSORY_H
#define SCAPIX_ANDROID_HARDWARE_USB_USBACCESSORY_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::hardware::usb {

class UsbAccessory : public object_base<SCAPIX_META_STRING("android/hardware/usb/UsbAccessory"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<java::lang::String> getManufacturer();
	ref<java::lang::String> getModel();
	ref<java::lang::String> getDescription();
	ref<java::lang::String> getVersion();
	ref<java::lang::String> getUri();
	ref<java::lang::String> getSerial();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	UsbAccessory(handle_type h) : base_(h) {}

};

} // namespace android::hardware::usb
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::usb {

inline ref<android::os::Parcelable_Creator> UsbAccessory::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> UsbAccessory::getManufacturer() { return call_method<SCAPIX_META_STRING("getManufacturer"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UsbAccessory::getModel() { return call_method<SCAPIX_META_STRING("getModel"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UsbAccessory::getDescription() { return call_method<SCAPIX_META_STRING("getDescription"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UsbAccessory::getVersion() { return call_method<SCAPIX_META_STRING("getVersion"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UsbAccessory::getUri() { return call_method<SCAPIX_META_STRING("getUri"), ref<java::lang::String>>(); }
inline ref<java::lang::String> UsbAccessory::getSerial() { return call_method<SCAPIX_META_STRING("getSerial"), ref<java::lang::String>>(); }
inline jboolean UsbAccessory::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint UsbAccessory::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> UsbAccessory::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint UsbAccessory::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void UsbAccessory::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::hardware::usb
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_USB_USBACCESSORY_H
