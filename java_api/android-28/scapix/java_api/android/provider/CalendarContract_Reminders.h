// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_RemindersColumns.h>
#include <scapix/java_api/android/provider/CalendarContract_EventsColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERS_H

namespace scapix::java_api {

namespace android::content { class ContentResolver; }
namespace android::database { class Cursor; }
namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class CalendarContract_Reminders : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$Reminders"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::CalendarContract_RemindersColumns,
	android::provider::CalendarContract_EventsColumns>
{
public:

	static ref<android::net::Uri> CONTENT_URI_();

	static ref<android::database::Cursor> query(ref<android::content::ContentResolver> cr, jlong eventId, ref<link::java::array<java::lang::String>> p3);

protected:

	CalendarContract_Reminders(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> CalendarContract_Reminders::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::database::Cursor> CalendarContract_Reminders::query(ref<android::content::ContentResolver> cr, jlong eventId, ref<link::java::array<java::lang::String>> p3) { return call_static_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(cr, eventId, p3); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_REMINDERS_H
