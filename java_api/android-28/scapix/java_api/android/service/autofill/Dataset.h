// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_DATASET_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_DATASET_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::service::autofill { class Dataset_Builder; }

namespace android::service::autofill {

class Dataset : public object_base<SCAPIX_META_STRING("android/service/autofill/Dataset"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = Dataset_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	Dataset(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<android::os::Parcelable_Creator> Dataset::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> Dataset::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint Dataset::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Dataset::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_DATASET_H