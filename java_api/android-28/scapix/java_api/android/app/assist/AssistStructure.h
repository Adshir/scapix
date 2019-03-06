// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_H
#define SCAPIX_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_H

namespace scapix::java_api {

namespace android::app::assist { class AssistStructure_WindowNode; }
namespace android::content { class ComponentName; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::app::assist { class AssistStructure_ViewNode; }

namespace android::app::assist {

class AssistStructure : public object_base<SCAPIX_META_STRING("android/app/assist/AssistStructure"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using WindowNode = AssistStructure_WindowNode;
	using ViewNode = AssistStructure_ViewNode;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<AssistStructure> new_object();
	jlong getAcquisitionStartTime();
	jlong getAcquisitionEndTime();
	ref<android::content::ComponentName> getActivityComponent();
	jboolean isHomeActivity();
	jint getWindowNodeCount();
	ref<android::app::assist::AssistStructure_WindowNode> getWindowNodeAt(jint index);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> out, jint flags);

protected:

	AssistStructure(handle_type h) : base_(h) {}

};

} // namespace android::app::assist
} // namespace scapix::java_api

#include <scapix/java_api/android/app/assist/AssistStructure_WindowNode.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::app::assist {

inline ref<android::os::Parcelable_Creator> AssistStructure::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<AssistStructure> AssistStructure::new_object() { return base_::new_object(); }
inline jlong AssistStructure::getAcquisitionStartTime() { return call_method<SCAPIX_META_STRING("getAcquisitionStartTime"), jlong>(); }
inline jlong AssistStructure::getAcquisitionEndTime() { return call_method<SCAPIX_META_STRING("getAcquisitionEndTime"), jlong>(); }
inline ref<android::content::ComponentName> AssistStructure::getActivityComponent() { return call_method<SCAPIX_META_STRING("getActivityComponent"), ref<android::content::ComponentName>>(); }
inline jboolean AssistStructure::isHomeActivity() { return call_method<SCAPIX_META_STRING("isHomeActivity"), jboolean>(); }
inline jint AssistStructure::getWindowNodeCount() { return call_method<SCAPIX_META_STRING("getWindowNodeCount"), jint>(); }
inline ref<android::app::assist::AssistStructure_WindowNode> AssistStructure::getWindowNodeAt(jint index) { return call_method<SCAPIX_META_STRING("getWindowNodeAt"), ref<android::app::assist::AssistStructure_WindowNode>>(index); }
inline jint AssistStructure::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AssistStructure::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }

} // namespace android::app::assist
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_H