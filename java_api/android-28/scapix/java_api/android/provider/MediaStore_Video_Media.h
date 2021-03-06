// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/MediaStore_Video_VideoColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_MEDIASTORE_VIDEO_MEDIA_H
#define SCAPIX_ANDROID_PROVIDER_MEDIASTORE_VIDEO_MEDIA_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class MediaStore_Video_Media : public object_base<SCAPIX_META_STRING("android/provider/MediaStore$Video$Media"),
	java::lang::Object,
	android::provider::MediaStore_Video_VideoColumns>
{
public:

	static ref<java::lang::String> CONTENT_TYPE_();
	static ref<java::lang::String> DEFAULT_SORT_ORDER_();
	static ref<android::net::Uri> EXTERNAL_CONTENT_URI_();
	static ref<android::net::Uri> INTERNAL_CONTENT_URI_();

	static ref<MediaStore_Video_Media> new_object();
	static ref<android::net::Uri> getContentUri(ref<java::lang::String> volumeName);

protected:

	MediaStore_Video_Media(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> MediaStore_Video_Media::CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaStore_Video_Media::DEFAULT_SORT_ORDER_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_SORT_ORDER"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> MediaStore_Video_Media::EXTERNAL_CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("EXTERNAL_CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> MediaStore_Video_Media::INTERNAL_CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("INTERNAL_CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<MediaStore_Video_Media> MediaStore_Video_Media::new_object() { return base_::new_object(); }
inline ref<android::net::Uri> MediaStore_Video_Media::getContentUri(ref<java::lang::String> volumeName) { return call_static_method<SCAPIX_META_STRING("getContentUri"), ref<android::net::Uri>>(volumeName); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_MEDIASTORE_VIDEO_MEDIA_H
