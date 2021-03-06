// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_TELECOM_CONNECTIONREQUEST_H
#define SCAPIX_ANDROID_TELECOM_CONNECTIONREQUEST_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::telecom { class Connection_RttTextStream; }
namespace android::telecom { class PhoneAccountHandle; }
namespace java::lang { class String; }

namespace android::telecom {

class ConnectionRequest : public object_base<SCAPIX_META_STRING("android/telecom/ConnectionRequest"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<ConnectionRequest> new_object(ref<android::telecom::PhoneAccountHandle> accountHandle, ref<android::net::Uri> handle, ref<android::os::Bundle> extras);
	static ref<ConnectionRequest> new_object(ref<android::telecom::PhoneAccountHandle> accountHandle, ref<android::net::Uri> handle, ref<android::os::Bundle> extras, jint videoState);
	ref<android::telecom::PhoneAccountHandle> getAccountHandle();
	ref<android::net::Uri> getAddress();
	ref<android::os::Bundle> getExtras();
	jint getVideoState();
	ref<android::telecom::Connection_RttTextStream> getRttTextStream();
	jboolean isRequestingRtt();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> destination, jint flags);

protected:

	ConnectionRequest(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/telecom/Connection_RttTextStream.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telecom {

inline ref<android::os::Parcelable_Creator> ConnectionRequest::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<ConnectionRequest> ConnectionRequest::new_object(ref<android::telecom::PhoneAccountHandle> accountHandle, ref<android::net::Uri> handle, ref<android::os::Bundle> extras) { return base_::new_object(accountHandle, handle, extras); }
inline ref<ConnectionRequest> ConnectionRequest::new_object(ref<android::telecom::PhoneAccountHandle> accountHandle, ref<android::net::Uri> handle, ref<android::os::Bundle> extras, jint videoState) { return base_::new_object(accountHandle, handle, extras, videoState); }
inline ref<android::telecom::PhoneAccountHandle> ConnectionRequest::getAccountHandle() { return call_method<SCAPIX_META_STRING("getAccountHandle"), ref<android::telecom::PhoneAccountHandle>>(); }
inline ref<android::net::Uri> ConnectionRequest::getAddress() { return call_method<SCAPIX_META_STRING("getAddress"), ref<android::net::Uri>>(); }
inline ref<android::os::Bundle> ConnectionRequest::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline jint ConnectionRequest::getVideoState() { return call_method<SCAPIX_META_STRING("getVideoState"), jint>(); }
inline ref<android::telecom::Connection_RttTextStream> ConnectionRequest::getRttTextStream() { return call_method<SCAPIX_META_STRING("getRttTextStream"), ref<android::telecom::Connection_RttTextStream>>(); }
inline jboolean ConnectionRequest::isRequestingRtt() { return call_method<SCAPIX_META_STRING("isRequestingRtt"), jboolean>(); }
inline ref<java::lang::String> ConnectionRequest::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ConnectionRequest::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ConnectionRequest::writeToParcel(ref<android::os::Parcel> destination, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(destination, flags); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_CONNECTIONREQUEST_H
