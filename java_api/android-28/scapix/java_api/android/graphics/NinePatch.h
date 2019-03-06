// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_NINEPATCH_H
#define SCAPIX_ANDROID_GRAPHICS_NINEPATCH_H

namespace scapix::java_api {

namespace android::graphics { class Bitmap; }
namespace android::graphics { class Canvas; }
namespace android::graphics { class Paint; }
namespace android::graphics { class Rect; }
namespace android::graphics { class RectF; }
namespace android::graphics { class Region; }
namespace java::lang { class String; }

namespace android::graphics {

class NinePatch : public object_base<SCAPIX_META_STRING("android/graphics/NinePatch"),
	java::lang::Object>
{
public:

	static ref<NinePatch> new_object(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk);
	static ref<NinePatch> new_object(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk, ref<java::lang::String> srcName);
	ref<java::lang::String> getName();
	ref<android::graphics::Paint> getPaint();
	void setPaint(ref<android::graphics::Paint> p);
	ref<android::graphics::Bitmap> getBitmap();
	void draw(ref<android::graphics::Canvas> canvas, ref<android::graphics::RectF> location);
	void draw(ref<android::graphics::Canvas> canvas, ref<android::graphics::Rect> location);
	void draw(ref<android::graphics::Canvas> canvas, ref<android::graphics::Rect> location, ref<android::graphics::Paint> paint);
	jint getDensity();
	jint getWidth();
	jint getHeight();
	jboolean hasAlpha();
	ref<android::graphics::Region> getTransparentRegion(ref<android::graphics::Rect> bounds);
	static jboolean isNinePatchChunk(ref<link::java::array<jbyte>> p1);

protected:

	NinePatch(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<NinePatch> NinePatch::new_object(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk) { return base_::new_object(bitmap, chunk); }
inline ref<NinePatch> NinePatch::new_object(ref<android::graphics::Bitmap> bitmap, ref<link::java::array<jbyte>> chunk, ref<java::lang::String> srcName) { return base_::new_object(bitmap, chunk, srcName); }
inline ref<java::lang::String> NinePatch::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline ref<android::graphics::Paint> NinePatch::getPaint() { return call_method<SCAPIX_META_STRING("getPaint"), ref<android::graphics::Paint>>(); }
inline void NinePatch::setPaint(ref<android::graphics::Paint> p) { return call_method<SCAPIX_META_STRING("setPaint"), void>(p); }
inline ref<android::graphics::Bitmap> NinePatch::getBitmap() { return call_method<SCAPIX_META_STRING("getBitmap"), ref<android::graphics::Bitmap>>(); }
inline void NinePatch::draw(ref<android::graphics::Canvas> canvas, ref<android::graphics::RectF> location) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas, location); }
inline void NinePatch::draw(ref<android::graphics::Canvas> canvas, ref<android::graphics::Rect> location) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas, location); }
inline void NinePatch::draw(ref<android::graphics::Canvas> canvas, ref<android::graphics::Rect> location, ref<android::graphics::Paint> paint) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas, location, paint); }
inline jint NinePatch::getDensity() { return call_method<SCAPIX_META_STRING("getDensity"), jint>(); }
inline jint NinePatch::getWidth() { return call_method<SCAPIX_META_STRING("getWidth"), jint>(); }
inline jint NinePatch::getHeight() { return call_method<SCAPIX_META_STRING("getHeight"), jint>(); }
inline jboolean NinePatch::hasAlpha() { return call_method<SCAPIX_META_STRING("hasAlpha"), jboolean>(); }
inline ref<android::graphics::Region> NinePatch::getTransparentRegion(ref<android::graphics::Rect> bounds) { return call_method<SCAPIX_META_STRING("getTransparentRegion"), ref<android::graphics::Region>>(bounds); }
inline jboolean NinePatch::isNinePatchChunk(ref<link::java::array<jbyte>> p1) { return call_static_method<SCAPIX_META_STRING("isNinePatchChunk"), jboolean>(p1); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_NINEPATCH_H