// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/Era.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_CHRONO_JAPANESEERA_H
#define SCAPIX_JAVA_TIME_CHRONO_JAPANESEERA_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time::format { class TextStyle; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class ValueRange; }
namespace java::util { class Locale; }

namespace java::time::chrono {

class JapaneseEra : public object_base<SCAPIX_META_STRING("java/time/chrono/JapaneseEra"),
	java::lang::Object,
	java::time::chrono::Era,
	java::io::Serializable>
{
public:

	static ref<java::time::chrono::JapaneseEra> MEIJI_();
	static ref<java::time::chrono::JapaneseEra> TAISHO_();
	static ref<java::time::chrono::JapaneseEra> SHOWA_();
	static ref<java::time::chrono::JapaneseEra> HEISEI_();

	static ref<java::time::chrono::JapaneseEra> of(jint japaneseEra);
	static ref<java::time::chrono::JapaneseEra> valueOf(ref<java::lang::String> japaneseEra);
	static ref<link::java::array<java::time::chrono::JapaneseEra>> values();
	ref<java::lang::String> getDisplayName(ref<java::time::format::TextStyle> style, ref<java::util::Locale> locale);
	jint getValue();
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);
	ref<java::lang::String> toString();

protected:

	JapaneseEra(handle_type h) : base_(h) {}

};

} // namespace java::time::chrono
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace java::time::chrono {

inline ref<java::time::chrono::JapaneseEra> JapaneseEra::MEIJI_() { return get_static_field<SCAPIX_META_STRING("MEIJI"), ref<java::time::chrono::JapaneseEra>>(); }
inline ref<java::time::chrono::JapaneseEra> JapaneseEra::TAISHO_() { return get_static_field<SCAPIX_META_STRING("TAISHO"), ref<java::time::chrono::JapaneseEra>>(); }
inline ref<java::time::chrono::JapaneseEra> JapaneseEra::SHOWA_() { return get_static_field<SCAPIX_META_STRING("SHOWA"), ref<java::time::chrono::JapaneseEra>>(); }
inline ref<java::time::chrono::JapaneseEra> JapaneseEra::HEISEI_() { return get_static_field<SCAPIX_META_STRING("HEISEI"), ref<java::time::chrono::JapaneseEra>>(); }
inline ref<java::time::chrono::JapaneseEra> JapaneseEra::of(jint japaneseEra) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::chrono::JapaneseEra>>(japaneseEra); }
inline ref<java::time::chrono::JapaneseEra> JapaneseEra::valueOf(ref<java::lang::String> japaneseEra) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::time::chrono::JapaneseEra>>(japaneseEra); }
inline ref<link::java::array<java::time::chrono::JapaneseEra>> JapaneseEra::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::time::chrono::JapaneseEra>>>(); }
inline ref<java::lang::String> JapaneseEra::getDisplayName(ref<java::time::format::TextStyle> style, ref<java::util::Locale> locale) { return call_method<SCAPIX_META_STRING("getDisplayName"), ref<java::lang::String>>(style, locale); }
inline jint JapaneseEra::getValue() { return call_method<SCAPIX_META_STRING("getValue"), jint>(); }
inline ref<java::time::temporal::ValueRange> JapaneseEra::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline ref<java::lang::String> JapaneseEra::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::chrono
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_CHRONO_JAPANESEERA_H