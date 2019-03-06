// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/time/chrono/Era.h>

#ifndef SCAPIX_JAVA_TIME_CHRONO_HIJRAHERA_H
#define SCAPIX_JAVA_TIME_CHRONO_HIJRAHERA_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class ValueRange; }

namespace java::time::chrono {

class HijrahEra : public object_base<SCAPIX_META_STRING("java/time/chrono/HijrahEra"),
	java::lang::Enum,
	java::time::chrono::Era>
{
public:

	static ref<java::time::chrono::HijrahEra> AH_();

	static ref<link::java::array<java::time::chrono::HijrahEra>> values();
	static ref<java::time::chrono::HijrahEra> valueOf(ref<java::lang::String> name);
	static ref<java::time::chrono::HijrahEra> of(jint hijrahEra);
	jint getValue();
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);

protected:

	HijrahEra(handle_type h) : base_(h) {}

};

} // namespace java::time::chrono
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>

namespace scapix::java_api {
namespace java::time::chrono {

inline ref<java::time::chrono::HijrahEra> HijrahEra::AH_() { return get_static_field<SCAPIX_META_STRING("AH"), ref<java::time::chrono::HijrahEra>>(); }
inline ref<link::java::array<java::time::chrono::HijrahEra>> HijrahEra::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::time::chrono::HijrahEra>>>(); }
inline ref<java::time::chrono::HijrahEra> HijrahEra::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::time::chrono::HijrahEra>>(name); }
inline ref<java::time::chrono::HijrahEra> HijrahEra::of(jint hijrahEra) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::chrono::HijrahEra>>(hijrahEra); }
inline jint HijrahEra::getValue() { return call_method<SCAPIX_META_STRING("getValue"), jint>(); }
inline ref<java::time::temporal::ValueRange> HijrahEra::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }

} // namespace java::time::chrono
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_CHRONO_HIJRAHERA_H