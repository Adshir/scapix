// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_MESSAGEPATTERN_PART_TYPE_H
#define SCAPIX_ANDROID_ICU_TEXT_MESSAGEPATTERN_PART_TYPE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class MessagePattern_Part_Type : public object_base<SCAPIX_META_STRING("android/icu/text/MessagePattern$Part$Type"),
	java::lang::Enum>
{
public:

	static ref<android::icu::text::MessagePattern_Part_Type> MSG_START_();
	static ref<android::icu::text::MessagePattern_Part_Type> MSG_LIMIT_();
	static ref<android::icu::text::MessagePattern_Part_Type> SKIP_SYNTAX_();
	static ref<android::icu::text::MessagePattern_Part_Type> INSERT_CHAR_();
	static ref<android::icu::text::MessagePattern_Part_Type> REPLACE_NUMBER_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_START_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_LIMIT_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_NUMBER_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_NAME_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_TYPE_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_STYLE_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_SELECTOR_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_INT_();
	static ref<android::icu::text::MessagePattern_Part_Type> ARG_DOUBLE_();

	static ref<link::java::array<android::icu::text::MessagePattern_Part_Type>> values();
	static ref<android::icu::text::MessagePattern_Part_Type> valueOf(ref<java::lang::String> name);
	jboolean hasNumericValue();

protected:

	MessagePattern_Part_Type(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::MSG_START_() { return get_static_field<SCAPIX_META_STRING("MSG_START"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::MSG_LIMIT_() { return get_static_field<SCAPIX_META_STRING("MSG_LIMIT"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::SKIP_SYNTAX_() { return get_static_field<SCAPIX_META_STRING("SKIP_SYNTAX"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::INSERT_CHAR_() { return get_static_field<SCAPIX_META_STRING("INSERT_CHAR"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::REPLACE_NUMBER_() { return get_static_field<SCAPIX_META_STRING("REPLACE_NUMBER"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_START_() { return get_static_field<SCAPIX_META_STRING("ARG_START"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_LIMIT_() { return get_static_field<SCAPIX_META_STRING("ARG_LIMIT"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_NUMBER_() { return get_static_field<SCAPIX_META_STRING("ARG_NUMBER"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_NAME_() { return get_static_field<SCAPIX_META_STRING("ARG_NAME"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_TYPE_() { return get_static_field<SCAPIX_META_STRING("ARG_TYPE"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_STYLE_() { return get_static_field<SCAPIX_META_STRING("ARG_STYLE"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_SELECTOR_() { return get_static_field<SCAPIX_META_STRING("ARG_SELECTOR"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_INT_() { return get_static_field<SCAPIX_META_STRING("ARG_INT"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::ARG_DOUBLE_() { return get_static_field<SCAPIX_META_STRING("ARG_DOUBLE"), ref<android::icu::text::MessagePattern_Part_Type>>(); }
inline ref<link::java::array<android::icu::text::MessagePattern_Part_Type>> MessagePattern_Part_Type::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::icu::text::MessagePattern_Part_Type>>>(); }
inline ref<android::icu::text::MessagePattern_Part_Type> MessagePattern_Part_Type::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::text::MessagePattern_Part_Type>>(name); }
inline jboolean MessagePattern_Part_Type::hasNumericValue() { return call_method<SCAPIX_META_STRING("hasNumericValue"), jboolean>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_MESSAGEPATTERN_PART_TYPE_H