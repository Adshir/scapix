// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace java::lang { class String; }
namespace java::util { class Map; }
namespace java::util { class Set; }

namespace android::service::autofill {

class FillEventHistory_Event : public object_base<SCAPIX_META_STRING("android/service/autofill/FillEventHistory$Event"),
	java::lang::Object>
{
public:

	static jint TYPE_AUTHENTICATION_SELECTED_();
	static jint TYPE_CONTEXT_COMMITTED_();
	static jint TYPE_DATASET_AUTHENTICATION_SELECTED_();
	static jint TYPE_DATASET_SELECTED_();
	static jint TYPE_SAVE_SHOWN_();

	jint getType();
	ref<java::lang::String> getDatasetId();
	ref<android::os::Bundle> getClientState();
	ref<java::util::Set> getSelectedDatasetIds();
	ref<java::util::Set> getIgnoredDatasetIds();
	ref<java::util::Map> getChangedFields();
	ref<java::util::Map> getFieldsClassification();
	ref<java::util::Map> getManuallyEnteredField();
	ref<java::lang::String> toString();

protected:

	FillEventHistory_Event(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline jint FillEventHistory_Event::TYPE_AUTHENTICATION_SELECTED_() { return get_static_field<SCAPIX_META_STRING("TYPE_AUTHENTICATION_SELECTED"), jint>(); }
inline jint FillEventHistory_Event::TYPE_CONTEXT_COMMITTED_() { return get_static_field<SCAPIX_META_STRING("TYPE_CONTEXT_COMMITTED"), jint>(); }
inline jint FillEventHistory_Event::TYPE_DATASET_AUTHENTICATION_SELECTED_() { return get_static_field<SCAPIX_META_STRING("TYPE_DATASET_AUTHENTICATION_SELECTED"), jint>(); }
inline jint FillEventHistory_Event::TYPE_DATASET_SELECTED_() { return get_static_field<SCAPIX_META_STRING("TYPE_DATASET_SELECTED"), jint>(); }
inline jint FillEventHistory_Event::TYPE_SAVE_SHOWN_() { return get_static_field<SCAPIX_META_STRING("TYPE_SAVE_SHOWN"), jint>(); }
inline jint FillEventHistory_Event::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline ref<java::lang::String> FillEventHistory_Event::getDatasetId() { return call_method<SCAPIX_META_STRING("getDatasetId"), ref<java::lang::String>>(); }
inline ref<android::os::Bundle> FillEventHistory_Event::getClientState() { return call_method<SCAPIX_META_STRING("getClientState"), ref<android::os::Bundle>>(); }
inline ref<java::util::Set> FillEventHistory_Event::getSelectedDatasetIds() { return call_method<SCAPIX_META_STRING("getSelectedDatasetIds"), ref<java::util::Set>>(); }
inline ref<java::util::Set> FillEventHistory_Event::getIgnoredDatasetIds() { return call_method<SCAPIX_META_STRING("getIgnoredDatasetIds"), ref<java::util::Set>>(); }
inline ref<java::util::Map> FillEventHistory_Event::getChangedFields() { return call_method<SCAPIX_META_STRING("getChangedFields"), ref<java::util::Map>>(); }
inline ref<java::util::Map> FillEventHistory_Event::getFieldsClassification() { return call_method<SCAPIX_META_STRING("getFieldsClassification"), ref<java::util::Map>>(); }
inline ref<java::util::Map> FillEventHistory_Event::getManuallyEnteredField() { return call_method<SCAPIX_META_STRING("getManuallyEnteredField"), ref<java::util::Map>>(); }
inline ref<java::lang::String> FillEventHistory_Event::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT_H
