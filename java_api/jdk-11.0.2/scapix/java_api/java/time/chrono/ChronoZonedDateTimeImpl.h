// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/ChronoZonedDateTime.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_CHRONO_CHRONOZONEDDATETIMEIMPL_H
#define SCAPIX_JAVA_TIME_CHRONO_CHRONOZONEDDATETIMEIMPL_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time { class ZoneId; }
namespace java::time { class ZoneOffset; }
namespace java::time::chrono { class ChronoLocalDateTime; }
namespace java::time::temporal { class Temporal; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalUnit; }

namespace java::time::chrono {

// private
class ChronoZonedDateTimeImpl : public object_base<SCAPIX_META_STRING("java/time/chrono/ChronoZonedDateTimeImpl"),
	java::lang::Object,
	java::time::chrono::ChronoZonedDateTime,
	java::io::Serializable>
{
public:

	ref<java::time::ZoneOffset> getOffset();
	ref<java::time::chrono::ChronoZonedDateTime> withEarlierOffsetAtOverlap();
	ref<java::time::chrono::ChronoZonedDateTime> withLaterOffsetAtOverlap();
	ref<java::time::chrono::ChronoLocalDateTime> toLocalDateTime();
	ref<java::time::ZoneId> getZone();
	ref<java::time::chrono::ChronoZonedDateTime> withZoneSameLocal(ref<java::time::ZoneId> zone);
	ref<java::time::chrono::ChronoZonedDateTime> withZoneSameInstant(ref<java::time::ZoneId> zone);
	jboolean isSupported(ref<java::time::temporal::TemporalField> field);
	ref<java::time::chrono::ChronoZonedDateTime> with(ref<java::time::temporal::TemporalField> field, jlong newValue);
	ref<java::time::chrono::ChronoZonedDateTime> plus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2);
	jlong until(ref<java::time::temporal::Temporal> endExclusive, ref<java::time::temporal::TemporalUnit> unit);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	ChronoZonedDateTimeImpl(handle_type h) : base_(h) {}

};

} // namespace java::time::chrono
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>

namespace scapix::java_api {
namespace java::time::chrono {

inline ref<java::time::ZoneOffset> ChronoZonedDateTimeImpl::getOffset() { return call_method<SCAPIX_META_STRING("getOffset"), ref<java::time::ZoneOffset>>(); }
inline ref<java::time::chrono::ChronoZonedDateTime> ChronoZonedDateTimeImpl::withEarlierOffsetAtOverlap() { return call_method<SCAPIX_META_STRING("withEarlierOffsetAtOverlap"), ref<java::time::chrono::ChronoZonedDateTime>>(); }
inline ref<java::time::chrono::ChronoZonedDateTime> ChronoZonedDateTimeImpl::withLaterOffsetAtOverlap() { return call_method<SCAPIX_META_STRING("withLaterOffsetAtOverlap"), ref<java::time::chrono::ChronoZonedDateTime>>(); }
inline ref<java::time::chrono::ChronoLocalDateTime> ChronoZonedDateTimeImpl::toLocalDateTime() { return call_method<SCAPIX_META_STRING("toLocalDateTime"), ref<java::time::chrono::ChronoLocalDateTime>>(); }
inline ref<java::time::ZoneId> ChronoZonedDateTimeImpl::getZone() { return call_method<SCAPIX_META_STRING("getZone"), ref<java::time::ZoneId>>(); }
inline ref<java::time::chrono::ChronoZonedDateTime> ChronoZonedDateTimeImpl::withZoneSameLocal(ref<java::time::ZoneId> zone) { return call_method<SCAPIX_META_STRING("withZoneSameLocal"), ref<java::time::chrono::ChronoZonedDateTime>>(zone); }
inline ref<java::time::chrono::ChronoZonedDateTime> ChronoZonedDateTimeImpl::withZoneSameInstant(ref<java::time::ZoneId> zone) { return call_method<SCAPIX_META_STRING("withZoneSameInstant"), ref<java::time::chrono::ChronoZonedDateTime>>(zone); }
inline jboolean ChronoZonedDateTimeImpl::isSupported(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("isSupported"), jboolean>(field); }
inline ref<java::time::chrono::ChronoZonedDateTime> ChronoZonedDateTimeImpl::with(ref<java::time::temporal::TemporalField> field, jlong newValue) { return call_method<SCAPIX_META_STRING("with"), ref<java::time::chrono::ChronoZonedDateTime>>(field, newValue); }
inline ref<java::time::chrono::ChronoZonedDateTime> ChronoZonedDateTimeImpl::plus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::chrono::ChronoZonedDateTime>>(amountToAdd, p2); }
inline jlong ChronoZonedDateTimeImpl::until(ref<java::time::temporal::Temporal> endExclusive, ref<java::time::temporal::TemporalUnit> unit) { return call_method<SCAPIX_META_STRING("until"), jlong>(endExclusive, unit); }
inline jboolean ChronoZonedDateTimeImpl::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint ChronoZonedDateTimeImpl::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> ChronoZonedDateTimeImpl::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::chrono
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_CHRONO_CHRONOZONEDDATETIMEIMPL_H