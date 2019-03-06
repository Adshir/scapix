// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_ANDROIDCHARACTER_H
#define SCAPIX_ANDROID_TEXT_ANDROIDCHARACTER_H

namespace scapix::java_api {
namespace android::text {

class AndroidCharacter : public object_base<SCAPIX_META_STRING("android/text/AndroidCharacter"),
	java::lang::Object>
{
public:

	static jint EAST_ASIAN_WIDTH_AMBIGUOUS_();
	static jint EAST_ASIAN_WIDTH_FULL_WIDTH_();
	static jint EAST_ASIAN_WIDTH_HALF_WIDTH_();
	static jint EAST_ASIAN_WIDTH_NARROW_();
	static jint EAST_ASIAN_WIDTH_NEUTRAL_();
	static jint EAST_ASIAN_WIDTH_WIDE_();

	static ref<AndroidCharacter> new_object();
	static void getDirectionalities(ref<link::java::array<jchar>> p1, ref<link::java::array<jbyte>> p2, jint p3);
	static jint getEastAsianWidth(jchar p1);
	static void getEastAsianWidths(ref<link::java::array<jchar>> p1, jint p2, jint p3, ref<link::java::array<jbyte>> p4);
	static jboolean mirror(ref<link::java::array<jchar>> p1, jint p2, jint p3);
	static jchar getMirror(jchar p1);

protected:

	AndroidCharacter(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::text {

inline jint AndroidCharacter::EAST_ASIAN_WIDTH_AMBIGUOUS_() { return get_static_field<SCAPIX_META_STRING("EAST_ASIAN_WIDTH_AMBIGUOUS"), jint>(); }
inline jint AndroidCharacter::EAST_ASIAN_WIDTH_FULL_WIDTH_() { return get_static_field<SCAPIX_META_STRING("EAST_ASIAN_WIDTH_FULL_WIDTH"), jint>(); }
inline jint AndroidCharacter::EAST_ASIAN_WIDTH_HALF_WIDTH_() { return get_static_field<SCAPIX_META_STRING("EAST_ASIAN_WIDTH_HALF_WIDTH"), jint>(); }
inline jint AndroidCharacter::EAST_ASIAN_WIDTH_NARROW_() { return get_static_field<SCAPIX_META_STRING("EAST_ASIAN_WIDTH_NARROW"), jint>(); }
inline jint AndroidCharacter::EAST_ASIAN_WIDTH_NEUTRAL_() { return get_static_field<SCAPIX_META_STRING("EAST_ASIAN_WIDTH_NEUTRAL"), jint>(); }
inline jint AndroidCharacter::EAST_ASIAN_WIDTH_WIDE_() { return get_static_field<SCAPIX_META_STRING("EAST_ASIAN_WIDTH_WIDE"), jint>(); }
inline ref<AndroidCharacter> AndroidCharacter::new_object() { return base_::new_object(); }
inline void AndroidCharacter::getDirectionalities(ref<link::java::array<jchar>> p1, ref<link::java::array<jbyte>> p2, jint p3) { return call_static_method<SCAPIX_META_STRING("getDirectionalities"), void>(p1, p2, p3); }
inline jint AndroidCharacter::getEastAsianWidth(jchar p1) { return call_static_method<SCAPIX_META_STRING("getEastAsianWidth"), jint>(p1); }
inline void AndroidCharacter::getEastAsianWidths(ref<link::java::array<jchar>> p1, jint p2, jint p3, ref<link::java::array<jbyte>> p4) { return call_static_method<SCAPIX_META_STRING("getEastAsianWidths"), void>(p1, p2, p3, p4); }
inline jboolean AndroidCharacter::mirror(ref<link::java::array<jchar>> p1, jint p2, jint p3) { return call_static_method<SCAPIX_META_STRING("mirror"), jboolean>(p1, p2, p3); }
inline jchar AndroidCharacter::getMirror(jchar p1) { return call_static_method<SCAPIX_META_STRING("getMirror"), jchar>(p1); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_ANDROIDCHARACTER_H