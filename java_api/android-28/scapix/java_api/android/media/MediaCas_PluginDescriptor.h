// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR_H
#define SCAPIX_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::media {

class MediaCas_PluginDescriptor : public object_base<SCAPIX_META_STRING("android/media/MediaCas$PluginDescriptor"),
	java::lang::Object>
{
public:

	jint getSystemId();
	ref<java::lang::String> getName();
	ref<java::lang::String> toString();

protected:

	MediaCas_PluginDescriptor(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline jint MediaCas_PluginDescriptor::getSystemId() { return call_method<SCAPIX_META_STRING("getSystemId"), jint>(); }
inline ref<java::lang::String> MediaCas_PluginDescriptor::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> MediaCas_PluginDescriptor::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR_H