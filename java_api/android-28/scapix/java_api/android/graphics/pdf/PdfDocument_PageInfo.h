// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_H
#define SCAPIX_ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_H

namespace scapix::java_api {

namespace android::graphics { class Rect; }
namespace android::graphics::pdf { class PdfDocument_PageInfo_Builder; }

namespace android::graphics::pdf {

class PdfDocument_PageInfo : public object_base<SCAPIX_META_STRING("android/graphics/pdf/PdfDocument$PageInfo"),
	java::lang::Object>
{
public:

	using Builder = PdfDocument_PageInfo_Builder;

	jint getPageWidth();
	jint getPageHeight();
	ref<android::graphics::Rect> getContentRect();
	jint getPageNumber();

protected:

	PdfDocument_PageInfo(handle_type h) : base_(h) {}

};

} // namespace android::graphics::pdf
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Rect.h>

namespace scapix::java_api {
namespace android::graphics::pdf {

inline jint PdfDocument_PageInfo::getPageWidth() { return call_method<SCAPIX_META_STRING("getPageWidth"), jint>(); }
inline jint PdfDocument_PageInfo::getPageHeight() { return call_method<SCAPIX_META_STRING("getPageHeight"), jint>(); }
inline ref<android::graphics::Rect> PdfDocument_PageInfo::getContentRect() { return call_method<SCAPIX_META_STRING("getContentRect"), ref<android::graphics::Rect>>(); }
inline jint PdfDocument_PageInfo::getPageNumber() { return call_method<SCAPIX_META_STRING("getPageNumber"), jint>(); }

} // namespace android::graphics::pdf
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PDF_PDFDOCUMENT_PAGEINFO_H