// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/content/pm/ComponentInfo.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_ACTIVITYINFO_H
#define SCAPIX_ANDROID_CONTENT_PM_ACTIVITYINFO_H

namespace scapix::java_api {

namespace android::content::pm { class ActivityInfo_WindowLayout; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::util { class Printer; }
namespace java::lang { class String; }

namespace android::content::pm {

class ActivityInfo : public object_base<SCAPIX_META_STRING("android/content/pm/ActivityInfo"),
	android::content::pm::ComponentInfo,
	android::os::Parcelable>
{
public:

	using WindowLayout = ActivityInfo_WindowLayout;

	static jint COLOR_MODE_DEFAULT_();
	static jint COLOR_MODE_HDR_();
	static jint COLOR_MODE_WIDE_COLOR_GAMUT_();
	static jint CONFIG_COLOR_MODE_();
	static jint CONFIG_DENSITY_();
	static jint CONFIG_FONT_SCALE_();
	static jint CONFIG_KEYBOARD_();
	static jint CONFIG_KEYBOARD_HIDDEN_();
	static jint CONFIG_LAYOUT_DIRECTION_();
	static jint CONFIG_LOCALE_();
	static jint CONFIG_MCC_();
	static jint CONFIG_MNC_();
	static jint CONFIG_NAVIGATION_();
	static jint CONFIG_ORIENTATION_();
	static jint CONFIG_SCREEN_LAYOUT_();
	static jint CONFIG_SCREEN_SIZE_();
	static jint CONFIG_SMALLEST_SCREEN_SIZE_();
	static jint CONFIG_TOUCHSCREEN_();
	static jint CONFIG_UI_MODE_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint DOCUMENT_LAUNCH_ALWAYS_();
	static jint DOCUMENT_LAUNCH_INTO_EXISTING_();
	static jint DOCUMENT_LAUNCH_NEVER_();
	static jint DOCUMENT_LAUNCH_NONE_();
	static jint FLAG_ALLOW_TASK_REPARENTING_();
	static jint FLAG_ALWAYS_RETAIN_TASK_STATE_();
	static jint FLAG_AUTO_REMOVE_FROM_RECENTS_();
	static jint FLAG_CLEAR_TASK_ON_LAUNCH_();
	static jint FLAG_ENABLE_VR_MODE_();
	static jint FLAG_EXCLUDE_FROM_RECENTS_();
	static jint FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS_();
	static jint FLAG_FINISH_ON_TASK_LAUNCH_();
	static jint FLAG_HARDWARE_ACCELERATED_();
	static jint FLAG_IMMERSIVE_();
	static jint FLAG_MULTIPROCESS_();
	static jint FLAG_NO_HISTORY_();
	static jint FLAG_RELINQUISH_TASK_IDENTITY_();
	static jint FLAG_RESUME_WHILE_PAUSING_();
	static jint FLAG_SINGLE_USER_();
	static jint FLAG_STATE_NOT_NEEDED_();
	static jint LAUNCH_MULTIPLE_();
	static jint LAUNCH_SINGLE_INSTANCE_();
	static jint LAUNCH_SINGLE_TASK_();
	static jint LAUNCH_SINGLE_TOP_();
	static jint PERSIST_ACROSS_REBOOTS_();
	static jint PERSIST_NEVER_();
	static jint PERSIST_ROOT_ONLY_();
	static jint SCREEN_ORIENTATION_BEHIND_();
	static jint SCREEN_ORIENTATION_FULL_SENSOR_();
	static jint SCREEN_ORIENTATION_FULL_USER_();
	static jint SCREEN_ORIENTATION_LANDSCAPE_();
	static jint SCREEN_ORIENTATION_LOCKED_();
	static jint SCREEN_ORIENTATION_NOSENSOR_();
	static jint SCREEN_ORIENTATION_PORTRAIT_();
	static jint SCREEN_ORIENTATION_REVERSE_LANDSCAPE_();
	static jint SCREEN_ORIENTATION_REVERSE_PORTRAIT_();
	static jint SCREEN_ORIENTATION_SENSOR_();
	static jint SCREEN_ORIENTATION_SENSOR_LANDSCAPE_();
	static jint SCREEN_ORIENTATION_SENSOR_PORTRAIT_();
	static jint SCREEN_ORIENTATION_UNSPECIFIED_();
	static jint SCREEN_ORIENTATION_USER_();
	static jint SCREEN_ORIENTATION_USER_LANDSCAPE_();
	static jint SCREEN_ORIENTATION_USER_PORTRAIT_();
	static jint UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW_();
	jint colorMode();
	void colorMode(jint);
	jint configChanges();
	void configChanges(jint);
	jint documentLaunchMode();
	void documentLaunchMode(jint);
	jint flags();
	void flags(jint);
	jint launchMode();
	void launchMode(jint);
	jint maxRecents();
	void maxRecents(jint);
	ref<java::lang::String> parentActivityName();
	void parentActivityName(ref<java::lang::String>);
	ref<java::lang::String> permission();
	void permission(ref<java::lang::String>);
	jint persistableMode();
	void persistableMode(jint);
	jint screenOrientation();
	void screenOrientation(jint);
	jint softInputMode();
	void softInputMode(jint);
	ref<java::lang::String> targetActivity();
	void targetActivity(ref<java::lang::String>);
	ref<java::lang::String> taskAffinity();
	void taskAffinity(ref<java::lang::String>);
	jint theme();
	void theme(jint);
	jint uiOptions();
	void uiOptions(jint);
	ref<android::content::pm::ActivityInfo_WindowLayout> windowLayout();
	void windowLayout(ref<android::content::pm::ActivityInfo_WindowLayout>);

	static ref<ActivityInfo> new_object();
	static ref<ActivityInfo> new_object(ref<android::content::pm::ActivityInfo> orig);
	jint getThemeResource();
	void dump(ref<android::util::Printer> pw, ref<java::lang::String> prefix);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags);

protected:

	ActivityInfo(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/pm/ActivityInfo_WindowLayout.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::pm {

inline jint ActivityInfo::COLOR_MODE_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("COLOR_MODE_DEFAULT"), jint>(); }
inline jint ActivityInfo::COLOR_MODE_HDR_() { return get_static_field<SCAPIX_META_STRING("COLOR_MODE_HDR"), jint>(); }
inline jint ActivityInfo::COLOR_MODE_WIDE_COLOR_GAMUT_() { return get_static_field<SCAPIX_META_STRING("COLOR_MODE_WIDE_COLOR_GAMUT"), jint>(); }
inline jint ActivityInfo::CONFIG_COLOR_MODE_() { return get_static_field<SCAPIX_META_STRING("CONFIG_COLOR_MODE"), jint>(); }
inline jint ActivityInfo::CONFIG_DENSITY_() { return get_static_field<SCAPIX_META_STRING("CONFIG_DENSITY"), jint>(); }
inline jint ActivityInfo::CONFIG_FONT_SCALE_() { return get_static_field<SCAPIX_META_STRING("CONFIG_FONT_SCALE"), jint>(); }
inline jint ActivityInfo::CONFIG_KEYBOARD_() { return get_static_field<SCAPIX_META_STRING("CONFIG_KEYBOARD"), jint>(); }
inline jint ActivityInfo::CONFIG_KEYBOARD_HIDDEN_() { return get_static_field<SCAPIX_META_STRING("CONFIG_KEYBOARD_HIDDEN"), jint>(); }
inline jint ActivityInfo::CONFIG_LAYOUT_DIRECTION_() { return get_static_field<SCAPIX_META_STRING("CONFIG_LAYOUT_DIRECTION"), jint>(); }
inline jint ActivityInfo::CONFIG_LOCALE_() { return get_static_field<SCAPIX_META_STRING("CONFIG_LOCALE"), jint>(); }
inline jint ActivityInfo::CONFIG_MCC_() { return get_static_field<SCAPIX_META_STRING("CONFIG_MCC"), jint>(); }
inline jint ActivityInfo::CONFIG_MNC_() { return get_static_field<SCAPIX_META_STRING("CONFIG_MNC"), jint>(); }
inline jint ActivityInfo::CONFIG_NAVIGATION_() { return get_static_field<SCAPIX_META_STRING("CONFIG_NAVIGATION"), jint>(); }
inline jint ActivityInfo::CONFIG_ORIENTATION_() { return get_static_field<SCAPIX_META_STRING("CONFIG_ORIENTATION"), jint>(); }
inline jint ActivityInfo::CONFIG_SCREEN_LAYOUT_() { return get_static_field<SCAPIX_META_STRING("CONFIG_SCREEN_LAYOUT"), jint>(); }
inline jint ActivityInfo::CONFIG_SCREEN_SIZE_() { return get_static_field<SCAPIX_META_STRING("CONFIG_SCREEN_SIZE"), jint>(); }
inline jint ActivityInfo::CONFIG_SMALLEST_SCREEN_SIZE_() { return get_static_field<SCAPIX_META_STRING("CONFIG_SMALLEST_SCREEN_SIZE"), jint>(); }
inline jint ActivityInfo::CONFIG_TOUCHSCREEN_() { return get_static_field<SCAPIX_META_STRING("CONFIG_TOUCHSCREEN"), jint>(); }
inline jint ActivityInfo::CONFIG_UI_MODE_() { return get_static_field<SCAPIX_META_STRING("CONFIG_UI_MODE"), jint>(); }
inline ref<android::os::Parcelable_Creator> ActivityInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint ActivityInfo::DOCUMENT_LAUNCH_ALWAYS_() { return get_static_field<SCAPIX_META_STRING("DOCUMENT_LAUNCH_ALWAYS"), jint>(); }
inline jint ActivityInfo::DOCUMENT_LAUNCH_INTO_EXISTING_() { return get_static_field<SCAPIX_META_STRING("DOCUMENT_LAUNCH_INTO_EXISTING"), jint>(); }
inline jint ActivityInfo::DOCUMENT_LAUNCH_NEVER_() { return get_static_field<SCAPIX_META_STRING("DOCUMENT_LAUNCH_NEVER"), jint>(); }
inline jint ActivityInfo::DOCUMENT_LAUNCH_NONE_() { return get_static_field<SCAPIX_META_STRING("DOCUMENT_LAUNCH_NONE"), jint>(); }
inline jint ActivityInfo::FLAG_ALLOW_TASK_REPARENTING_() { return get_static_field<SCAPIX_META_STRING("FLAG_ALLOW_TASK_REPARENTING"), jint>(); }
inline jint ActivityInfo::FLAG_ALWAYS_RETAIN_TASK_STATE_() { return get_static_field<SCAPIX_META_STRING("FLAG_ALWAYS_RETAIN_TASK_STATE"), jint>(); }
inline jint ActivityInfo::FLAG_AUTO_REMOVE_FROM_RECENTS_() { return get_static_field<SCAPIX_META_STRING("FLAG_AUTO_REMOVE_FROM_RECENTS"), jint>(); }
inline jint ActivityInfo::FLAG_CLEAR_TASK_ON_LAUNCH_() { return get_static_field<SCAPIX_META_STRING("FLAG_CLEAR_TASK_ON_LAUNCH"), jint>(); }
inline jint ActivityInfo::FLAG_ENABLE_VR_MODE_() { return get_static_field<SCAPIX_META_STRING("FLAG_ENABLE_VR_MODE"), jint>(); }
inline jint ActivityInfo::FLAG_EXCLUDE_FROM_RECENTS_() { return get_static_field<SCAPIX_META_STRING("FLAG_EXCLUDE_FROM_RECENTS"), jint>(); }
inline jint ActivityInfo::FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS_() { return get_static_field<SCAPIX_META_STRING("FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS"), jint>(); }
inline jint ActivityInfo::FLAG_FINISH_ON_TASK_LAUNCH_() { return get_static_field<SCAPIX_META_STRING("FLAG_FINISH_ON_TASK_LAUNCH"), jint>(); }
inline jint ActivityInfo::FLAG_HARDWARE_ACCELERATED_() { return get_static_field<SCAPIX_META_STRING("FLAG_HARDWARE_ACCELERATED"), jint>(); }
inline jint ActivityInfo::FLAG_IMMERSIVE_() { return get_static_field<SCAPIX_META_STRING("FLAG_IMMERSIVE"), jint>(); }
inline jint ActivityInfo::FLAG_MULTIPROCESS_() { return get_static_field<SCAPIX_META_STRING("FLAG_MULTIPROCESS"), jint>(); }
inline jint ActivityInfo::FLAG_NO_HISTORY_() { return get_static_field<SCAPIX_META_STRING("FLAG_NO_HISTORY"), jint>(); }
inline jint ActivityInfo::FLAG_RELINQUISH_TASK_IDENTITY_() { return get_static_field<SCAPIX_META_STRING("FLAG_RELINQUISH_TASK_IDENTITY"), jint>(); }
inline jint ActivityInfo::FLAG_RESUME_WHILE_PAUSING_() { return get_static_field<SCAPIX_META_STRING("FLAG_RESUME_WHILE_PAUSING"), jint>(); }
inline jint ActivityInfo::FLAG_SINGLE_USER_() { return get_static_field<SCAPIX_META_STRING("FLAG_SINGLE_USER"), jint>(); }
inline jint ActivityInfo::FLAG_STATE_NOT_NEEDED_() { return get_static_field<SCAPIX_META_STRING("FLAG_STATE_NOT_NEEDED"), jint>(); }
inline jint ActivityInfo::LAUNCH_MULTIPLE_() { return get_static_field<SCAPIX_META_STRING("LAUNCH_MULTIPLE"), jint>(); }
inline jint ActivityInfo::LAUNCH_SINGLE_INSTANCE_() { return get_static_field<SCAPIX_META_STRING("LAUNCH_SINGLE_INSTANCE"), jint>(); }
inline jint ActivityInfo::LAUNCH_SINGLE_TASK_() { return get_static_field<SCAPIX_META_STRING("LAUNCH_SINGLE_TASK"), jint>(); }
inline jint ActivityInfo::LAUNCH_SINGLE_TOP_() { return get_static_field<SCAPIX_META_STRING("LAUNCH_SINGLE_TOP"), jint>(); }
inline jint ActivityInfo::PERSIST_ACROSS_REBOOTS_() { return get_static_field<SCAPIX_META_STRING("PERSIST_ACROSS_REBOOTS"), jint>(); }
inline jint ActivityInfo::PERSIST_NEVER_() { return get_static_field<SCAPIX_META_STRING("PERSIST_NEVER"), jint>(); }
inline jint ActivityInfo::PERSIST_ROOT_ONLY_() { return get_static_field<SCAPIX_META_STRING("PERSIST_ROOT_ONLY"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_BEHIND_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_BEHIND"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_FULL_SENSOR_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_FULL_SENSOR"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_FULL_USER_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_FULL_USER"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_LANDSCAPE_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_LANDSCAPE"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_LOCKED_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_LOCKED"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_NOSENSOR_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_NOSENSOR"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_PORTRAIT_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_PORTRAIT"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_LANDSCAPE_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_REVERSE_LANDSCAPE"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_PORTRAIT_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_REVERSE_PORTRAIT"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_SENSOR"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_LANDSCAPE_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_SENSOR_LANDSCAPE"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_PORTRAIT_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_SENSOR_PORTRAIT"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_UNSPECIFIED_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_UNSPECIFIED"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_USER_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_USER"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_USER_LANDSCAPE_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_USER_LANDSCAPE"), jint>(); }
inline jint ActivityInfo::SCREEN_ORIENTATION_USER_PORTRAIT_() { return get_static_field<SCAPIX_META_STRING("SCREEN_ORIENTATION_USER_PORTRAIT"), jint>(); }
inline jint ActivityInfo::UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW_() { return get_static_field<SCAPIX_META_STRING("UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW"), jint>(); }
inline jint ActivityInfo::colorMode() { return get_field<SCAPIX_META_STRING("colorMode"), jint>(); }
inline void ActivityInfo::colorMode(jint v) { set_field<SCAPIX_META_STRING("colorMode"), jint>(v); }
inline jint ActivityInfo::configChanges() { return get_field<SCAPIX_META_STRING("configChanges"), jint>(); }
inline void ActivityInfo::configChanges(jint v) { set_field<SCAPIX_META_STRING("configChanges"), jint>(v); }
inline jint ActivityInfo::documentLaunchMode() { return get_field<SCAPIX_META_STRING("documentLaunchMode"), jint>(); }
inline void ActivityInfo::documentLaunchMode(jint v) { set_field<SCAPIX_META_STRING("documentLaunchMode"), jint>(v); }
inline jint ActivityInfo::flags() { return get_field<SCAPIX_META_STRING("flags"), jint>(); }
inline void ActivityInfo::flags(jint v) { set_field<SCAPIX_META_STRING("flags"), jint>(v); }
inline jint ActivityInfo::launchMode() { return get_field<SCAPIX_META_STRING("launchMode"), jint>(); }
inline void ActivityInfo::launchMode(jint v) { set_field<SCAPIX_META_STRING("launchMode"), jint>(v); }
inline jint ActivityInfo::maxRecents() { return get_field<SCAPIX_META_STRING("maxRecents"), jint>(); }
inline void ActivityInfo::maxRecents(jint v) { set_field<SCAPIX_META_STRING("maxRecents"), jint>(v); }
inline ref<java::lang::String> ActivityInfo::parentActivityName() { return get_field<SCAPIX_META_STRING("parentActivityName"), ref<java::lang::String>>(); }
inline void ActivityInfo::parentActivityName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("parentActivityName"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> ActivityInfo::permission() { return get_field<SCAPIX_META_STRING("permission"), ref<java::lang::String>>(); }
inline void ActivityInfo::permission(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("permission"), ref<java::lang::String>>(v); }
inline jint ActivityInfo::persistableMode() { return get_field<SCAPIX_META_STRING("persistableMode"), jint>(); }
inline void ActivityInfo::persistableMode(jint v) { set_field<SCAPIX_META_STRING("persistableMode"), jint>(v); }
inline jint ActivityInfo::screenOrientation() { return get_field<SCAPIX_META_STRING("screenOrientation"), jint>(); }
inline void ActivityInfo::screenOrientation(jint v) { set_field<SCAPIX_META_STRING("screenOrientation"), jint>(v); }
inline jint ActivityInfo::softInputMode() { return get_field<SCAPIX_META_STRING("softInputMode"), jint>(); }
inline void ActivityInfo::softInputMode(jint v) { set_field<SCAPIX_META_STRING("softInputMode"), jint>(v); }
inline ref<java::lang::String> ActivityInfo::targetActivity() { return get_field<SCAPIX_META_STRING("targetActivity"), ref<java::lang::String>>(); }
inline void ActivityInfo::targetActivity(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("targetActivity"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> ActivityInfo::taskAffinity() { return get_field<SCAPIX_META_STRING("taskAffinity"), ref<java::lang::String>>(); }
inline void ActivityInfo::taskAffinity(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("taskAffinity"), ref<java::lang::String>>(v); }
inline jint ActivityInfo::theme() { return get_field<SCAPIX_META_STRING("theme"), jint>(); }
inline void ActivityInfo::theme(jint v) { set_field<SCAPIX_META_STRING("theme"), jint>(v); }
inline jint ActivityInfo::uiOptions() { return get_field<SCAPIX_META_STRING("uiOptions"), jint>(); }
inline void ActivityInfo::uiOptions(jint v) { set_field<SCAPIX_META_STRING("uiOptions"), jint>(v); }
inline ref<android::content::pm::ActivityInfo_WindowLayout> ActivityInfo::windowLayout() { return get_field<SCAPIX_META_STRING("windowLayout"), ref<android::content::pm::ActivityInfo_WindowLayout>>(); }
inline void ActivityInfo::windowLayout(ref<android::content::pm::ActivityInfo_WindowLayout> v) { set_field<SCAPIX_META_STRING("windowLayout"), ref<android::content::pm::ActivityInfo_WindowLayout>>(v); }
inline ref<ActivityInfo> ActivityInfo::new_object() { return base_::new_object(); }
inline ref<ActivityInfo> ActivityInfo::new_object(ref<android::content::pm::ActivityInfo> orig) { return base_::new_object(orig); }
inline jint ActivityInfo::getThemeResource() { return call_method<SCAPIX_META_STRING("getThemeResource"), jint>(); }
inline void ActivityInfo::dump(ref<android::util::Printer> pw, ref<java::lang::String> prefix) { return call_method<SCAPIX_META_STRING("dump"), void>(pw, prefix); }
inline ref<java::lang::String> ActivityInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint ActivityInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void ActivityInfo::writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, parcelableFlags); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_ACTIVITYINFO_H
