// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_LANG_UCHARACTER_DECOMPOSITIONTYPE_H
#define SCAPIX_ANDROID_ICU_LANG_UCHARACTER_DECOMPOSITIONTYPE_H

namespace scapix::java_api {


namespace android::icu::lang {

class UCharacter_DecompositionType : public object_base<SCAPIX_META_STRING("android/icu/lang/UCharacter$DecompositionType"),
	java::lang::Object>
{
public:

	static jint CANONICAL_();
	static jint CIRCLE_();
	static jint COMPAT_();
	static jint FINAL_();
	static jint FONT_();
	static jint FRACTION_();
	static jint INITIAL_();
	static jint ISOLATED_();
	static jint MEDIAL_();
	static jint NARROW_();
	static jint NOBREAK_();
	static jint NONE_();
	static jint SMALL_();
	static jint SQUARE_();
	static jint SUB_();
	static jint SUPER_();
	static jint VERTICAL_();
	static jint WIDE_();


protected:

	UCharacter_DecompositionType(handle_type h) : base_(h) {}

};

} // namespace android::icu::lang
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::lang {

inline jint UCharacter_DecompositionType::CANONICAL_() { return get_static_field<SCAPIX_META_STRING("CANONICAL"), jint>(); }
inline jint UCharacter_DecompositionType::CIRCLE_() { return get_static_field<SCAPIX_META_STRING("CIRCLE"), jint>(); }
inline jint UCharacter_DecompositionType::COMPAT_() { return get_static_field<SCAPIX_META_STRING("COMPAT"), jint>(); }
inline jint UCharacter_DecompositionType::FINAL_() { return get_static_field<SCAPIX_META_STRING("FINAL"), jint>(); }
inline jint UCharacter_DecompositionType::FONT_() { return get_static_field<SCAPIX_META_STRING("FONT"), jint>(); }
inline jint UCharacter_DecompositionType::FRACTION_() { return get_static_field<SCAPIX_META_STRING("FRACTION"), jint>(); }
inline jint UCharacter_DecompositionType::INITIAL_() { return get_static_field<SCAPIX_META_STRING("INITIAL"), jint>(); }
inline jint UCharacter_DecompositionType::ISOLATED_() { return get_static_field<SCAPIX_META_STRING("ISOLATED"), jint>(); }
inline jint UCharacter_DecompositionType::MEDIAL_() { return get_static_field<SCAPIX_META_STRING("MEDIAL"), jint>(); }
inline jint UCharacter_DecompositionType::NARROW_() { return get_static_field<SCAPIX_META_STRING("NARROW"), jint>(); }
inline jint UCharacter_DecompositionType::NOBREAK_() { return get_static_field<SCAPIX_META_STRING("NOBREAK"), jint>(); }
inline jint UCharacter_DecompositionType::NONE_() { return get_static_field<SCAPIX_META_STRING("NONE"), jint>(); }
inline jint UCharacter_DecompositionType::SMALL_() { return get_static_field<SCAPIX_META_STRING("SMALL"), jint>(); }
inline jint UCharacter_DecompositionType::SQUARE_() { return get_static_field<SCAPIX_META_STRING("SQUARE"), jint>(); }
inline jint UCharacter_DecompositionType::SUB_() { return get_static_field<SCAPIX_META_STRING("SUB"), jint>(); }
inline jint UCharacter_DecompositionType::SUPER_() { return get_static_field<SCAPIX_META_STRING("SUPER"), jint>(); }
inline jint UCharacter_DecompositionType::VERTICAL_() { return get_static_field<SCAPIX_META_STRING("VERTICAL"), jint>(); }
inline jint UCharacter_DecompositionType::WIDE_() { return get_static_field<SCAPIX_META_STRING("WIDE"), jint>(); }

} // namespace android::icu::lang
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_LANG_UCHARACTER_DECOMPOSITIONTYPE_H