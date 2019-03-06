// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_DRM_DRMINFO_H
#define SCAPIX_ANDROID_DRM_DRMINFO_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Iterator; }

namespace android::drm {

class DrmInfo : public object_base<SCAPIX_META_STRING("android/drm/DrmInfo"),
	java::lang::Object>
{
public:

	static ref<DrmInfo> new_object(jint infoType, ref<link::java::array<jbyte>> data, ref<java::lang::String> mimeType);
	static ref<DrmInfo> new_object(jint infoType, ref<java::lang::String> path, ref<java::lang::String> mimeType);
	void put(ref<java::lang::String> key, ref<java::lang::Object> value);
	ref<java::lang::Object> get(ref<java::lang::String> key);
	ref<java::util::Iterator> keyIterator();
	ref<java::util::Iterator> iterator();
	ref<link::java::array<jbyte>> getData();
	ref<java::lang::String> getMimeType();
	jint getInfoType();

protected:

	DrmInfo(handle_type h) : base_(h) {}

};

} // namespace android::drm
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>

namespace scapix::java_api {
namespace android::drm {

inline ref<DrmInfo> DrmInfo::new_object(jint infoType, ref<link::java::array<jbyte>> data, ref<java::lang::String> mimeType) { return base_::new_object(infoType, data, mimeType); }
inline ref<DrmInfo> DrmInfo::new_object(jint infoType, ref<java::lang::String> path, ref<java::lang::String> mimeType) { return base_::new_object(infoType, path, mimeType); }
inline void DrmInfo::put(ref<java::lang::String> key, ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("put"), void>(key, value); }
inline ref<java::lang::Object> DrmInfo::get(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(key); }
inline ref<java::util::Iterator> DrmInfo::keyIterator() { return call_method<SCAPIX_META_STRING("keyIterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::Iterator> DrmInfo::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<link::java::array<jbyte>> DrmInfo::getData() { return call_method<SCAPIX_META_STRING("getData"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> DrmInfo::getMimeType() { return call_method<SCAPIX_META_STRING("getMimeType"), ref<java::lang::String>>(); }
inline jint DrmInfo::getInfoType() { return call_method<SCAPIX_META_STRING("getInfoType"), jint>(); }

} // namespace android::drm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DRM_DRMINFO_H