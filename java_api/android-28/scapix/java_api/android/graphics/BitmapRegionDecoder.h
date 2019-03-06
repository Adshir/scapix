// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_BITMAPREGIONDECODER_H
#define SCAPIX_ANDROID_GRAPHICS_BITMAPREGIONDECODER_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::graphics { class BitmapFactory_Options; }
namespace android::graphics { class Rect; }
namespace java::io { class FileDescriptor; }
namespace java::io { class InputStream; }
namespace java::lang { class String; }

namespace android::graphics {

class BitmapRegionDecoder : public object_base<SCAPIX_META_STRING("android/graphics/BitmapRegionDecoder"),
	java::lang::Object>
{
public:

	static ref<android::graphics::BitmapRegionDecoder> newInstance(ref<link::java::array<jbyte>> data, jint offset, jint length, jboolean isShareable);
	static ref<android::graphics::BitmapRegionDecoder> newInstance(ref<java::io::FileDescriptor> fd, jboolean isShareable);
	static ref<android::graphics::BitmapRegionDecoder> newInstance(ref<java::io::InputStream> is, jboolean isShareable);
	static ref<android::graphics::BitmapRegionDecoder> newInstance(ref<java::lang::String> pathName, jboolean isShareable);
	ref<android::graphics::Bitmap> decodeRegion(ref<android::graphics::Rect> rect, ref<android::graphics::BitmapFactory_Options> options);
	jint getWidth();
	jint getHeight();
	void recycle();
	jboolean isRecycled();

protected:

	BitmapRegionDecoder(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/BitmapFactory_Options.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::BitmapRegionDecoder> BitmapRegionDecoder::newInstance(ref<link::java::array<jbyte>> data, jint offset, jint length, jboolean isShareable) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::graphics::BitmapRegionDecoder>>(data, offset, length, isShareable); }
inline ref<android::graphics::BitmapRegionDecoder> BitmapRegionDecoder::newInstance(ref<java::io::FileDescriptor> fd, jboolean isShareable) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::graphics::BitmapRegionDecoder>>(fd, isShareable); }
inline ref<android::graphics::BitmapRegionDecoder> BitmapRegionDecoder::newInstance(ref<java::io::InputStream> is, jboolean isShareable) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::graphics::BitmapRegionDecoder>>(is, isShareable); }
inline ref<android::graphics::BitmapRegionDecoder> BitmapRegionDecoder::newInstance(ref<java::lang::String> pathName, jboolean isShareable) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::graphics::BitmapRegionDecoder>>(pathName, isShareable); }
inline ref<android::graphics::Bitmap> BitmapRegionDecoder::decodeRegion(ref<android::graphics::Rect> rect, ref<android::graphics::BitmapFactory_Options> options) { return call_method<SCAPIX_META_STRING("decodeRegion"), ref<android::graphics::Bitmap>>(rect, options); }
inline jint BitmapRegionDecoder::getWidth() { return call_method<SCAPIX_META_STRING("getWidth"), jint>(); }
inline jint BitmapRegionDecoder::getHeight() { return call_method<SCAPIX_META_STRING("getHeight"), jint>(); }
inline void BitmapRegionDecoder::recycle() { return call_method<SCAPIX_META_STRING("recycle"), void>(); }
inline jboolean BitmapRegionDecoder::isRecycled() { return call_method<SCAPIX_META_STRING("isRecycled"), jboolean>(); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_BITMAPREGIONDECODER_H