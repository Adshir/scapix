// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/provider/Settings_NameValueTable.h>

#ifndef SCAPIX_ANDROID_PROVIDER_SETTINGS_GLOBAL_H
#define SCAPIX_ANDROID_PROVIDER_SETTINGS_GLOBAL_H

namespace scapix::java_api {

namespace android::content { class ContentResolver; }
namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class Settings_Global : public object_base<SCAPIX_META_STRING("android/provider/Settings$Global"),
	android::provider::Settings_NameValueTable>
{
public:

	static ref<java::lang::String> ADB_ENABLED_();
	static ref<java::lang::String> AIRPLANE_MODE_ON_();
	static ref<java::lang::String> AIRPLANE_MODE_RADIOS_();
	static ref<java::lang::String> ALWAYS_FINISH_ACTIVITIES_();
	static ref<java::lang::String> ANIMATOR_DURATION_SCALE_();
	static ref<java::lang::String> AUTO_TIME_();
	static ref<java::lang::String> AUTO_TIME_ZONE_();
	static ref<java::lang::String> BLUETOOTH_ON_();
	static ref<java::lang::String> BOOT_COUNT_();
	static ref<java::lang::String> CONTACT_METADATA_SYNC_ENABLED_();
	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DATA_ROAMING_();
	static ref<java::lang::String> DEBUG_APP_();
	static ref<java::lang::String> DEVELOPMENT_SETTINGS_ENABLED_();
	static ref<java::lang::String> DEVICE_NAME_();
	static ref<java::lang::String> DEVICE_PROVISIONED_();
	static ref<java::lang::String> HTTP_PROXY_();
	static ref<java::lang::String> INSTALL_NON_MARKET_APPS_();
	static ref<java::lang::String> MODE_RINGER_();
	static ref<java::lang::String> NETWORK_PREFERENCE_();
	static ref<java::lang::String> RADIO_BLUETOOTH_();
	static ref<java::lang::String> RADIO_CELL_();
	static ref<java::lang::String> RADIO_NFC_();
	static ref<java::lang::String> RADIO_WIFI_();
	static ref<java::lang::String> SHOW_PROCESSES_();
	static ref<java::lang::String> STAY_ON_WHILE_PLUGGED_IN_();
	static ref<java::lang::String> TRANSITION_ANIMATION_SCALE_();
	static ref<java::lang::String> USB_MASS_STORAGE_ENABLED_();
	static ref<java::lang::String> USE_GOOGLE_MAIL_();
	static ref<java::lang::String> WAIT_FOR_DEBUGGER_();
	static ref<java::lang::String> WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN_();
	static ref<java::lang::String> WIFI_MAX_DHCP_RETRY_COUNT_();
	static ref<java::lang::String> WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS_();
	static ref<java::lang::String> WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON_();
	static ref<java::lang::String> WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY_();
	static ref<java::lang::String> WIFI_NUM_OPEN_NETWORKS_KEPT_();
	static ref<java::lang::String> WIFI_ON_();
	static ref<java::lang::String> WIFI_SLEEP_POLICY_();
	static jint WIFI_SLEEP_POLICY_DEFAULT_();
	static jint WIFI_SLEEP_POLICY_NEVER_();
	static jint WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED_();
	static ref<java::lang::String> WIFI_WATCHDOG_ON_();
	static ref<java::lang::String> WINDOW_ANIMATION_SCALE_();

	static ref<Settings_Global> new_object();
	static ref<java::lang::String> getString(ref<android::content::ContentResolver> resolver, ref<java::lang::String> name);
	static jboolean putString(ref<android::content::ContentResolver> resolver, ref<java::lang::String> name, ref<java::lang::String> value);
	static ref<android::net::Uri> getUriFor(ref<java::lang::String> name);
	static jint getInt(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jint def);
	static jint getInt(ref<android::content::ContentResolver> cr, ref<java::lang::String> name);
	static jboolean putInt(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jint value);
	static jlong getLong(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jlong def);
	static jlong getLong(ref<android::content::ContentResolver> cr, ref<java::lang::String> name);
	static jboolean putLong(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jlong value);
	static jfloat getFloat(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jfloat def);
	static jfloat getFloat(ref<android::content::ContentResolver> cr, ref<java::lang::String> name);
	static jboolean putFloat(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jfloat value);

protected:

	Settings_Global(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> Settings_Global::ADB_ENABLED_() { return get_static_field<SCAPIX_META_STRING("ADB_ENABLED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::AIRPLANE_MODE_ON_() { return get_static_field<SCAPIX_META_STRING("AIRPLANE_MODE_ON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::AIRPLANE_MODE_RADIOS_() { return get_static_field<SCAPIX_META_STRING("AIRPLANE_MODE_RADIOS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::ALWAYS_FINISH_ACTIVITIES_() { return get_static_field<SCAPIX_META_STRING("ALWAYS_FINISH_ACTIVITIES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::ANIMATOR_DURATION_SCALE_() { return get_static_field<SCAPIX_META_STRING("ANIMATOR_DURATION_SCALE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::AUTO_TIME_() { return get_static_field<SCAPIX_META_STRING("AUTO_TIME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::AUTO_TIME_ZONE_() { return get_static_field<SCAPIX_META_STRING("AUTO_TIME_ZONE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::BLUETOOTH_ON_() { return get_static_field<SCAPIX_META_STRING("BLUETOOTH_ON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::BOOT_COUNT_() { return get_static_field<SCAPIX_META_STRING("BOOT_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::CONTACT_METADATA_SYNC_ENABLED_() { return get_static_field<SCAPIX_META_STRING("CONTACT_METADATA_SYNC_ENABLED"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> Settings_Global::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> Settings_Global::DATA_ROAMING_() { return get_static_field<SCAPIX_META_STRING("DATA_ROAMING"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::DEBUG_APP_() { return get_static_field<SCAPIX_META_STRING("DEBUG_APP"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::DEVELOPMENT_SETTINGS_ENABLED_() { return get_static_field<SCAPIX_META_STRING("DEVELOPMENT_SETTINGS_ENABLED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::DEVICE_NAME_() { return get_static_field<SCAPIX_META_STRING("DEVICE_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::DEVICE_PROVISIONED_() { return get_static_field<SCAPIX_META_STRING("DEVICE_PROVISIONED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::HTTP_PROXY_() { return get_static_field<SCAPIX_META_STRING("HTTP_PROXY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::INSTALL_NON_MARKET_APPS_() { return get_static_field<SCAPIX_META_STRING("INSTALL_NON_MARKET_APPS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::MODE_RINGER_() { return get_static_field<SCAPIX_META_STRING("MODE_RINGER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::NETWORK_PREFERENCE_() { return get_static_field<SCAPIX_META_STRING("NETWORK_PREFERENCE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::RADIO_BLUETOOTH_() { return get_static_field<SCAPIX_META_STRING("RADIO_BLUETOOTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::RADIO_CELL_() { return get_static_field<SCAPIX_META_STRING("RADIO_CELL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::RADIO_NFC_() { return get_static_field<SCAPIX_META_STRING("RADIO_NFC"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::RADIO_WIFI_() { return get_static_field<SCAPIX_META_STRING("RADIO_WIFI"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::SHOW_PROCESSES_() { return get_static_field<SCAPIX_META_STRING("SHOW_PROCESSES"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::STAY_ON_WHILE_PLUGGED_IN_() { return get_static_field<SCAPIX_META_STRING("STAY_ON_WHILE_PLUGGED_IN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::TRANSITION_ANIMATION_SCALE_() { return get_static_field<SCAPIX_META_STRING("TRANSITION_ANIMATION_SCALE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::USB_MASS_STORAGE_ENABLED_() { return get_static_field<SCAPIX_META_STRING("USB_MASS_STORAGE_ENABLED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::USE_GOOGLE_MAIL_() { return get_static_field<SCAPIX_META_STRING("USE_GOOGLE_MAIL"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WAIT_FOR_DEBUGGER_() { return get_static_field<SCAPIX_META_STRING("WAIT_FOR_DEBUGGER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN_() { return get_static_field<SCAPIX_META_STRING("WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_MAX_DHCP_RETRY_COUNT_() { return get_static_field<SCAPIX_META_STRING("WIFI_MAX_DHCP_RETRY_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS_() { return get_static_field<SCAPIX_META_STRING("WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON_() { return get_static_field<SCAPIX_META_STRING("WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY_() { return get_static_field<SCAPIX_META_STRING("WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_NUM_OPEN_NETWORKS_KEPT_() { return get_static_field<SCAPIX_META_STRING("WIFI_NUM_OPEN_NETWORKS_KEPT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_ON_() { return get_static_field<SCAPIX_META_STRING("WIFI_ON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WIFI_SLEEP_POLICY_() { return get_static_field<SCAPIX_META_STRING("WIFI_SLEEP_POLICY"), ref<java::lang::String>>(); }
inline jint Settings_Global::WIFI_SLEEP_POLICY_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("WIFI_SLEEP_POLICY_DEFAULT"), jint>(); }
inline jint Settings_Global::WIFI_SLEEP_POLICY_NEVER_() { return get_static_field<SCAPIX_META_STRING("WIFI_SLEEP_POLICY_NEVER"), jint>(); }
inline jint Settings_Global::WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED_() { return get_static_field<SCAPIX_META_STRING("WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED"), jint>(); }
inline ref<java::lang::String> Settings_Global::WIFI_WATCHDOG_ON_() { return get_static_field<SCAPIX_META_STRING("WIFI_WATCHDOG_ON"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Settings_Global::WINDOW_ANIMATION_SCALE_() { return get_static_field<SCAPIX_META_STRING("WINDOW_ANIMATION_SCALE"), ref<java::lang::String>>(); }
inline ref<Settings_Global> Settings_Global::new_object() { return base_::new_object(); }
inline ref<java::lang::String> Settings_Global::getString(ref<android::content::ContentResolver> resolver, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getString"), ref<java::lang::String>>(resolver, name); }
inline jboolean Settings_Global::putString(ref<android::content::ContentResolver> resolver, ref<java::lang::String> name, ref<java::lang::String> value) { return call_static_method<SCAPIX_META_STRING("putString"), jboolean>(resolver, name, value); }
inline ref<android::net::Uri> Settings_Global::getUriFor(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getUriFor"), ref<android::net::Uri>>(name); }
inline jint Settings_Global::getInt(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jint def) { return call_static_method<SCAPIX_META_STRING("getInt"), jint>(cr, name, def); }
inline jint Settings_Global::getInt(ref<android::content::ContentResolver> cr, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getInt"), jint>(cr, name); }
inline jboolean Settings_Global::putInt(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jint value) { return call_static_method<SCAPIX_META_STRING("putInt"), jboolean>(cr, name, value); }
inline jlong Settings_Global::getLong(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jlong def) { return call_static_method<SCAPIX_META_STRING("getLong"), jlong>(cr, name, def); }
inline jlong Settings_Global::getLong(ref<android::content::ContentResolver> cr, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getLong"), jlong>(cr, name); }
inline jboolean Settings_Global::putLong(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jlong value) { return call_static_method<SCAPIX_META_STRING("putLong"), jboolean>(cr, name, value); }
inline jfloat Settings_Global::getFloat(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jfloat def) { return call_static_method<SCAPIX_META_STRING("getFloat"), jfloat>(cr, name, def); }
inline jfloat Settings_Global::getFloat(ref<android::content::ContentResolver> cr, ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getFloat"), jfloat>(cr, name); }
inline jboolean Settings_Global::putFloat(ref<android::content::ContentResolver> cr, ref<java::lang::String> name, jfloat value) { return call_static_method<SCAPIX_META_STRING("putFloat"), jboolean>(cr, name, value); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_SETTINGS_GLOBAL_H