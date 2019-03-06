// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVINPUTINFO_H
#define SCAPIX_ANDROID_MEDIA_TV_TVINPUTINFO_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::content::pm { class ServiceInfo; }
namespace android::graphics::drawable { class Drawable; }
namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace android::media::tv { class TvInputInfo_Builder; }

namespace android::media::tv {

class TvInputInfo : public object_base<SCAPIX_META_STRING("android/media/tv/TvInputInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TvInputInfo_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static ref<java::lang::String> EXTRA_INPUT_ID_();
	static jint TYPE_COMPONENT_();
	static jint TYPE_COMPOSITE_();
	static jint TYPE_DISPLAY_PORT_();
	static jint TYPE_DVI_();
	static jint TYPE_HDMI_();
	static jint TYPE_OTHER_();
	static jint TYPE_SCART_();
	static jint TYPE_SVIDEO_();
	static jint TYPE_TUNER_();
	static jint TYPE_VGA_();

	ref<java::lang::String> getId();
	ref<java::lang::String> getParentId();
	ref<android::content::pm::ServiceInfo> getServiceInfo();
	ref<android::content::Intent> createSetupIntent();
	ref<android::content::Intent> createSettingsIntent();
	jint getType();
	jint getTunerCount();
	jboolean canRecord();
	ref<android::os::Bundle> getExtras();
	jboolean isPassthroughInput();
	jboolean isHidden(ref<android::content::Context> context);
	ref<java::lang::CharSequence> loadLabel(ref<android::content::Context> context);
	ref<java::lang::CharSequence> loadCustomLabel(ref<android::content::Context> context);
	ref<android::graphics::drawable::Drawable> loadIcon(ref<android::content::Context> context);
	jint describeContents();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> o);
	ref<java::lang::String> toString();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	TvInputInfo(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<android::os::Parcelable_Creator> TvInputInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> TvInputInfo::EXTRA_INPUT_ID_() { return get_static_field<SCAPIX_META_STRING("EXTRA_INPUT_ID"), ref<java::lang::String>>(); }
inline jint TvInputInfo::TYPE_COMPONENT_() { return get_static_field<SCAPIX_META_STRING("TYPE_COMPONENT"), jint>(); }
inline jint TvInputInfo::TYPE_COMPOSITE_() { return get_static_field<SCAPIX_META_STRING("TYPE_COMPOSITE"), jint>(); }
inline jint TvInputInfo::TYPE_DISPLAY_PORT_() { return get_static_field<SCAPIX_META_STRING("TYPE_DISPLAY_PORT"), jint>(); }
inline jint TvInputInfo::TYPE_DVI_() { return get_static_field<SCAPIX_META_STRING("TYPE_DVI"), jint>(); }
inline jint TvInputInfo::TYPE_HDMI_() { return get_static_field<SCAPIX_META_STRING("TYPE_HDMI"), jint>(); }
inline jint TvInputInfo::TYPE_OTHER_() { return get_static_field<SCAPIX_META_STRING("TYPE_OTHER"), jint>(); }
inline jint TvInputInfo::TYPE_SCART_() { return get_static_field<SCAPIX_META_STRING("TYPE_SCART"), jint>(); }
inline jint TvInputInfo::TYPE_SVIDEO_() { return get_static_field<SCAPIX_META_STRING("TYPE_SVIDEO"), jint>(); }
inline jint TvInputInfo::TYPE_TUNER_() { return get_static_field<SCAPIX_META_STRING("TYPE_TUNER"), jint>(); }
inline jint TvInputInfo::TYPE_VGA_() { return get_static_field<SCAPIX_META_STRING("TYPE_VGA"), jint>(); }
inline ref<java::lang::String> TvInputInfo::getId() { return call_method<SCAPIX_META_STRING("getId"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TvInputInfo::getParentId() { return call_method<SCAPIX_META_STRING("getParentId"), ref<java::lang::String>>(); }
inline ref<android::content::pm::ServiceInfo> TvInputInfo::getServiceInfo() { return call_method<SCAPIX_META_STRING("getServiceInfo"), ref<android::content::pm::ServiceInfo>>(); }
inline ref<android::content::Intent> TvInputInfo::createSetupIntent() { return call_method<SCAPIX_META_STRING("createSetupIntent"), ref<android::content::Intent>>(); }
inline ref<android::content::Intent> TvInputInfo::createSettingsIntent() { return call_method<SCAPIX_META_STRING("createSettingsIntent"), ref<android::content::Intent>>(); }
inline jint TvInputInfo::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline jint TvInputInfo::getTunerCount() { return call_method<SCAPIX_META_STRING("getTunerCount"), jint>(); }
inline jboolean TvInputInfo::canRecord() { return call_method<SCAPIX_META_STRING("canRecord"), jboolean>(); }
inline ref<android::os::Bundle> TvInputInfo::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline jboolean TvInputInfo::isPassthroughInput() { return call_method<SCAPIX_META_STRING("isPassthroughInput"), jboolean>(); }
inline jboolean TvInputInfo::isHidden(ref<android::content::Context> context) { return call_method<SCAPIX_META_STRING("isHidden"), jboolean>(context); }
inline ref<java::lang::CharSequence> TvInputInfo::loadLabel(ref<android::content::Context> context) { return call_method<SCAPIX_META_STRING("loadLabel"), ref<java::lang::CharSequence>>(context); }
inline ref<java::lang::CharSequence> TvInputInfo::loadCustomLabel(ref<android::content::Context> context) { return call_method<SCAPIX_META_STRING("loadCustomLabel"), ref<java::lang::CharSequence>>(context); }
inline ref<android::graphics::drawable::Drawable> TvInputInfo::loadIcon(ref<android::content::Context> context) { return call_method<SCAPIX_META_STRING("loadIcon"), ref<android::graphics::drawable::Drawable>>(context); }
inline jint TvInputInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline jint TvInputInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean TvInputInfo::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline ref<java::lang::String> TvInputInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline void TvInputInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVINPUTINFO_H