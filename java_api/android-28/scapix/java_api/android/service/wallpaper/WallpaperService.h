// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_H
#define SCAPIX_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::os { class IBinder; }
namespace android::service::wallpaper { class WallpaperService_Engine; }
namespace java::lang { class String; }

namespace android::service::wallpaper {

class WallpaperService : public object_base<SCAPIX_META_STRING("android/service/wallpaper/WallpaperService"),
	android::app::Service>
{
public:

	using Engine = WallpaperService_Engine;

	static ref<java::lang::String> SERVICE_INTERFACE_();
	static ref<java::lang::String> SERVICE_META_DATA_();

	static ref<WallpaperService> new_object();
	void onCreate();
	void onDestroy();
	ref<android::os::IBinder> onBind(ref<android::content::Intent> intent);
	ref<android::service::wallpaper::WallpaperService_Engine> onCreateEngine();

protected:

	WallpaperService(handle_type h) : base_(h) {}

};

} // namespace android::service::wallpaper
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/wallpaper/WallpaperService_Engine.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::wallpaper {

inline ref<java::lang::String> WallpaperService::SERVICE_INTERFACE_() { return get_static_field<SCAPIX_META_STRING("SERVICE_INTERFACE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> WallpaperService::SERVICE_META_DATA_() { return get_static_field<SCAPIX_META_STRING("SERVICE_META_DATA"), ref<java::lang::String>>(); }
inline ref<WallpaperService> WallpaperService::new_object() { return base_::new_object(); }
inline void WallpaperService::onCreate() { return call_method<SCAPIX_META_STRING("onCreate"), void>(); }
inline void WallpaperService::onDestroy() { return call_method<SCAPIX_META_STRING("onDestroy"), void>(); }
inline ref<android::os::IBinder> WallpaperService::onBind(ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("onBind"), ref<android::os::IBinder>>(intent); }
inline ref<android::service::wallpaper::WallpaperService_Engine> WallpaperService::onCreateEngine() { return call_method<SCAPIX_META_STRING("onCreateEngine"), ref<android::service::wallpaper::WallpaperService_Engine>>(); }

} // namespace android::service::wallpaper
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_H