// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS_H
#define SCAPIX_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::print {

class PrintAttributes_Margins : public object_base<SCAPIX_META_STRING("android/print/PrintAttributes$Margins"),
	java::lang::Object>
{
public:

	static ref<android::print::PrintAttributes_Margins> NO_MARGINS_();

	static ref<PrintAttributes_Margins> new_object(jint leftMils, jint topMils, jint rightMils, jint bottomMils);
	jint getLeftMils();
	jint getTopMils();
	jint getRightMils();
	jint getBottomMils();
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::String> toString();

protected:

	PrintAttributes_Margins(handle_type h) : base_(h) {}

};

} // namespace android::print
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::print {

inline ref<android::print::PrintAttributes_Margins> PrintAttributes_Margins::NO_MARGINS_() { return get_static_field<SCAPIX_META_STRING("NO_MARGINS"), ref<android::print::PrintAttributes_Margins>>(); }
inline ref<PrintAttributes_Margins> PrintAttributes_Margins::new_object(jint leftMils, jint topMils, jint rightMils, jint bottomMils) { return base_::new_object(leftMils, topMils, rightMils, bottomMils); }
inline jint PrintAttributes_Margins::getLeftMils() { return call_method<SCAPIX_META_STRING("getLeftMils"), jint>(); }
inline jint PrintAttributes_Margins::getTopMils() { return call_method<SCAPIX_META_STRING("getTopMils"), jint>(); }
inline jint PrintAttributes_Margins::getRightMils() { return call_method<SCAPIX_META_STRING("getRightMils"), jint>(); }
inline jint PrintAttributes_Margins::getBottomMils() { return call_method<SCAPIX_META_STRING("getBottomMils"), jint>(); }
inline jint PrintAttributes_Margins::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean PrintAttributes_Margins::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::String> PrintAttributes_Margins::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::print
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS_H