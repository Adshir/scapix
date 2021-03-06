// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAEXTRACTOR_H
#define SCAPIX_ANDROID_MEDIA_MEDIAEXTRACTOR_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content::res { class AssetFileDescriptor; }
namespace android::media { class DrmInitData; }
namespace android::media { class MediaCas; }
namespace android::media { class MediaCodec_CryptoInfo; }
namespace android::media { class MediaDataSource; }
namespace android::media { class MediaExtractor_CasInfo; }
namespace android::media { class MediaFormat; }
namespace android::net { class Uri; }
namespace android::os { class PersistableBundle; }
namespace java::io { class FileDescriptor; }
namespace java::lang { class String; }
namespace java::nio { class ByteBuffer; }
namespace java::util { class List; }
namespace java::util { class Map; }
namespace android::media { class MediaExtractor_MetricsConstants; }

namespace android::media {

class MediaExtractor : public object_base<SCAPIX_META_STRING("android/media/MediaExtractor"),
	java::lang::Object>
{
public:

	using MetricsConstants = MediaExtractor_MetricsConstants;
	using CasInfo = MediaExtractor_CasInfo;

	static jint SAMPLE_FLAG_ENCRYPTED_();
	static jint SAMPLE_FLAG_PARTIAL_FRAME_();
	static jint SAMPLE_FLAG_SYNC_();
	static jint SEEK_TO_CLOSEST_SYNC_();
	static jint SEEK_TO_NEXT_SYNC_();
	static jint SEEK_TO_PREVIOUS_SYNC_();

	static ref<MediaExtractor> new_object();
	void setDataSource(ref<android::media::MediaDataSource> p1);
	void setDataSource(ref<android::content::Context> context, ref<android::net::Uri> uri, ref<java::util::Map> headers);
	void setDataSource(ref<java::lang::String> path, ref<java::util::Map> headers);
	void setDataSource(ref<java::lang::String> path);
	void setDataSource(ref<android::content::res::AssetFileDescriptor> afd);
	void setDataSource(ref<java::io::FileDescriptor> fd);
	void setDataSource(ref<java::io::FileDescriptor> p1, jlong p2, jlong p3);
	void setMediaCas(ref<android::media::MediaCas> mediaCas);
	ref<android::media::MediaExtractor_CasInfo> getCasInfo(jint index);
	void release();
	jint getTrackCount();
	ref<android::media::DrmInitData> getDrmInitData();
	ref<java::util::List> getAudioPresentations(jint trackIndex);
	ref<java::util::Map> getPsshInfo();
	ref<android::media::MediaFormat> getTrackFormat(jint index);
	void selectTrack(jint p1);
	void unselectTrack(jint p1);
	void seekTo(jlong p1, jint p2);
	jboolean advance();
	jint readSampleData(ref<java::nio::ByteBuffer> p1, jint p2);
	jint getSampleTrackIndex();
	jlong getSampleTime();
	jlong getSampleSize();
	jint getSampleFlags();
	jboolean getSampleCryptoInfo(ref<android::media::MediaCodec_CryptoInfo> p1);
	jlong getCachedDuration();
	jboolean hasCacheReachedEndOfStream();
	ref<android::os::PersistableBundle> getMetrics();

protected:

	MediaExtractor(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/media/DrmInitData.h>
#include <scapix/java_api/android/media/MediaCas.h>
#include <scapix/java_api/android/media/MediaCodec_CryptoInfo.h>
#include <scapix/java_api/android/media/MediaDataSource.h>
#include <scapix/java_api/android/media/MediaExtractor_CasInfo.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace android::media {

inline jint MediaExtractor::SAMPLE_FLAG_ENCRYPTED_() { return get_static_field<SCAPIX_META_STRING("SAMPLE_FLAG_ENCRYPTED"), jint>(); }
inline jint MediaExtractor::SAMPLE_FLAG_PARTIAL_FRAME_() { return get_static_field<SCAPIX_META_STRING("SAMPLE_FLAG_PARTIAL_FRAME"), jint>(); }
inline jint MediaExtractor::SAMPLE_FLAG_SYNC_() { return get_static_field<SCAPIX_META_STRING("SAMPLE_FLAG_SYNC"), jint>(); }
inline jint MediaExtractor::SEEK_TO_CLOSEST_SYNC_() { return get_static_field<SCAPIX_META_STRING("SEEK_TO_CLOSEST_SYNC"), jint>(); }
inline jint MediaExtractor::SEEK_TO_NEXT_SYNC_() { return get_static_field<SCAPIX_META_STRING("SEEK_TO_NEXT_SYNC"), jint>(); }
inline jint MediaExtractor::SEEK_TO_PREVIOUS_SYNC_() { return get_static_field<SCAPIX_META_STRING("SEEK_TO_PREVIOUS_SYNC"), jint>(); }
inline ref<MediaExtractor> MediaExtractor::new_object() { return base_::new_object(); }
inline void MediaExtractor::setDataSource(ref<android::media::MediaDataSource> p1) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(p1); }
inline void MediaExtractor::setDataSource(ref<android::content::Context> context, ref<android::net::Uri> uri, ref<java::util::Map> headers) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(context, uri, headers); }
inline void MediaExtractor::setDataSource(ref<java::lang::String> path, ref<java::util::Map> headers) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(path, headers); }
inline void MediaExtractor::setDataSource(ref<java::lang::String> path) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(path); }
inline void MediaExtractor::setDataSource(ref<android::content::res::AssetFileDescriptor> afd) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(afd); }
inline void MediaExtractor::setDataSource(ref<java::io::FileDescriptor> fd) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(fd); }
inline void MediaExtractor::setDataSource(ref<java::io::FileDescriptor> p1, jlong p2, jlong p3) { return call_method<SCAPIX_META_STRING("setDataSource"), void>(p1, p2, p3); }
inline void MediaExtractor::setMediaCas(ref<android::media::MediaCas> mediaCas) { return call_method<SCAPIX_META_STRING("setMediaCas"), void>(mediaCas); }
inline ref<android::media::MediaExtractor_CasInfo> MediaExtractor::getCasInfo(jint index) { return call_method<SCAPIX_META_STRING("getCasInfo"), ref<android::media::MediaExtractor_CasInfo>>(index); }
inline void MediaExtractor::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline jint MediaExtractor::getTrackCount() { return call_method<SCAPIX_META_STRING("getTrackCount"), jint>(); }
inline ref<android::media::DrmInitData> MediaExtractor::getDrmInitData() { return call_method<SCAPIX_META_STRING("getDrmInitData"), ref<android::media::DrmInitData>>(); }
inline ref<java::util::List> MediaExtractor::getAudioPresentations(jint trackIndex) { return call_method<SCAPIX_META_STRING("getAudioPresentations"), ref<java::util::List>>(trackIndex); }
inline ref<java::util::Map> MediaExtractor::getPsshInfo() { return call_method<SCAPIX_META_STRING("getPsshInfo"), ref<java::util::Map>>(); }
inline ref<android::media::MediaFormat> MediaExtractor::getTrackFormat(jint index) { return call_method<SCAPIX_META_STRING("getTrackFormat"), ref<android::media::MediaFormat>>(index); }
inline void MediaExtractor::selectTrack(jint p1) { return call_method<SCAPIX_META_STRING("selectTrack"), void>(p1); }
inline void MediaExtractor::unselectTrack(jint p1) { return call_method<SCAPIX_META_STRING("unselectTrack"), void>(p1); }
inline void MediaExtractor::seekTo(jlong p1, jint p2) { return call_method<SCAPIX_META_STRING("seekTo"), void>(p1, p2); }
inline jboolean MediaExtractor::advance() { return call_method<SCAPIX_META_STRING("advance"), jboolean>(); }
inline jint MediaExtractor::readSampleData(ref<java::nio::ByteBuffer> p1, jint p2) { return call_method<SCAPIX_META_STRING("readSampleData"), jint>(p1, p2); }
inline jint MediaExtractor::getSampleTrackIndex() { return call_method<SCAPIX_META_STRING("getSampleTrackIndex"), jint>(); }
inline jlong MediaExtractor::getSampleTime() { return call_method<SCAPIX_META_STRING("getSampleTime"), jlong>(); }
inline jlong MediaExtractor::getSampleSize() { return call_method<SCAPIX_META_STRING("getSampleSize"), jlong>(); }
inline jint MediaExtractor::getSampleFlags() { return call_method<SCAPIX_META_STRING("getSampleFlags"), jint>(); }
inline jboolean MediaExtractor::getSampleCryptoInfo(ref<android::media::MediaCodec_CryptoInfo> p1) { return call_method<SCAPIX_META_STRING("getSampleCryptoInfo"), jboolean>(p1); }
inline jlong MediaExtractor::getCachedDuration() { return call_method<SCAPIX_META_STRING("getCachedDuration"), jlong>(); }
inline jboolean MediaExtractor::hasCacheReachedEndOfStream() { return call_method<SCAPIX_META_STRING("hasCacheReachedEndOfStream"), jboolean>(); }
inline ref<android::os::PersistableBundle> MediaExtractor::getMetrics() { return call_method<SCAPIX_META_STRING("getMetrics"), ref<android::os::PersistableBundle>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAEXTRACTOR_H
