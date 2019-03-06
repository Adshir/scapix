// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_FILLREQUEST_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_FILLREQUEST_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace java::util { class List; }

namespace android::service::autofill {

class FillRequest : public object_base<SCAPIX_META_STRING("android/service/autofill/FillRequest"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint FLAG_MANUAL_REQUEST_();

	jint getId();
	jint getFlags();
	ref<java::util::List> getFillContexts();
	ref<java::lang::String> toString();
	ref<android::os::Bundle> getClientState();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	FillRequest(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<android::os::Parcelable_Creator> FillRequest::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint FillRequest::FLAG_MANUAL_REQUEST_() { return get_static_field<SCAPIX_META_STRING("FLAG_MANUAL_REQUEST"), jint>(); }
inline jint FillRequest::getId() { return call_method<SCAPIX_META_STRING("getId"), jint>(); }
inline jint FillRequest::getFlags() { return call_method<SCAPIX_META_STRING("getFlags"), jint>(); }
inline ref<java::util::List> FillRequest::getFillContexts() { return call_method<SCAPIX_META_STRING("getFillContexts"), ref<java::util::List>>(); }
inline ref<java::lang::String> FillRequest::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<android::os::Bundle> FillRequest::getClientState() { return call_method<SCAPIX_META_STRING("getClientState"), ref<android::os::Bundle>>(); }
inline jint FillRequest::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void FillRequest::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_FILLREQUEST_H