// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NET_MACADDRESS_H
#define SCAPIX_ANDROID_NET_MACADDRESS_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::net {

class MacAddress : public object_base<SCAPIX_META_STRING("android/net/MacAddress"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::net::MacAddress> BROADCAST_ADDRESS_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint TYPE_BROADCAST_();
	static jint TYPE_MULTICAST_();
	static jint TYPE_UNICAST_();

	jint getAddressType();
	jboolean isLocallyAssigned();
	ref<link::java::array<jbyte>> toByteArray();
	ref<java::lang::String> toString();
	ref<java::lang::String> toOuiString();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> o);
	void writeToParcel(ref<android::os::Parcel> out, jint flags);
	jint describeContents();
	static ref<android::net::MacAddress> fromString(ref<java::lang::String> addr);
	static ref<android::net::MacAddress> fromBytes(ref<link::java::array<jbyte>> addr);

protected:

	MacAddress(handle_type h) : base_(h) {}

};

} // namespace android::net
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net {

inline ref<android::net::MacAddress> MacAddress::BROADCAST_ADDRESS_() { return get_static_field<SCAPIX_META_STRING("BROADCAST_ADDRESS"), ref<android::net::MacAddress>>(); }
inline ref<android::os::Parcelable_Creator> MacAddress::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint MacAddress::TYPE_BROADCAST_() { return get_static_field<SCAPIX_META_STRING("TYPE_BROADCAST"), jint>(); }
inline jint MacAddress::TYPE_MULTICAST_() { return get_static_field<SCAPIX_META_STRING("TYPE_MULTICAST"), jint>(); }
inline jint MacAddress::TYPE_UNICAST_() { return get_static_field<SCAPIX_META_STRING("TYPE_UNICAST"), jint>(); }
inline jint MacAddress::getAddressType() { return call_method<SCAPIX_META_STRING("getAddressType"), jint>(); }
inline jboolean MacAddress::isLocallyAssigned() { return call_method<SCAPIX_META_STRING("isLocallyAssigned"), jboolean>(); }
inline ref<link::java::array<jbyte>> MacAddress::toByteArray() { return call_method<SCAPIX_META_STRING("toByteArray"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> MacAddress::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MacAddress::toOuiString() { return call_method<SCAPIX_META_STRING("toOuiString"), ref<java::lang::String>>(); }
inline jint MacAddress::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean MacAddress::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline void MacAddress::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }
inline jint MacAddress::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline ref<android::net::MacAddress> MacAddress::fromString(ref<java::lang::String> addr) { return call_static_method<SCAPIX_META_STRING("fromString"), ref<android::net::MacAddress>>(addr); }
inline ref<android::net::MacAddress> MacAddress::fromBytes(ref<link::java::array<jbyte>> addr) { return call_static_method<SCAPIX_META_STRING("fromBytes"), ref<android::net::MacAddress>>(addr); }

} // namespace android::net
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_MACADDRESS_H