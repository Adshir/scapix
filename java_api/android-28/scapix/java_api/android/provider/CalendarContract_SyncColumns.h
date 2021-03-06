// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/CalendarContract_CalendarSyncColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class CalendarContract_SyncColumns : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$SyncColumns"),
	java::lang::Object,
	android::provider::CalendarContract_CalendarSyncColumns>
{
public:

	static ref<java::lang::String> ACCOUNT_NAME_();
	static ref<java::lang::String> ACCOUNT_TYPE_();
	static ref<java::lang::String> CAN_PARTIALLY_UPDATE_();
	static ref<java::lang::String> DELETED_();
	static ref<java::lang::String> DIRTY_();
	static ref<java::lang::String> MUTATORS_();
	static ref<java::lang::String> _SYNC_ID_();


protected:

	CalendarContract_SyncColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> CalendarContract_SyncColumns::ACCOUNT_NAME_() { return get_static_field<SCAPIX_META_STRING("ACCOUNT_NAME"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_SyncColumns::ACCOUNT_TYPE_() { return get_static_field<SCAPIX_META_STRING("ACCOUNT_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_SyncColumns::CAN_PARTIALLY_UPDATE_() { return get_static_field<SCAPIX_META_STRING("CAN_PARTIALLY_UPDATE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_SyncColumns::DELETED_() { return get_static_field<SCAPIX_META_STRING("DELETED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_SyncColumns::DIRTY_() { return get_static_field<SCAPIX_META_STRING("DIRTY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_SyncColumns::MUTATORS_() { return get_static_field<SCAPIX_META_STRING("MUTATORS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> CalendarContract_SyncColumns::_SYNC_ID_() { return get_static_field<SCAPIX_META_STRING("_SYNC_ID"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_SYNCCOLUMNS_H
