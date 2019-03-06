// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTS_INTENTS_UI_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTS_INTENTS_UI_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class Contacts_Intents_UI : public object_base<SCAPIX_META_STRING("android/provider/Contacts$Intents$UI"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> FILTER_CONTACTS_ACTION_();
	static ref<java::lang::String> FILTER_TEXT_EXTRA_KEY_();
	static ref<java::lang::String> GROUP_NAME_EXTRA_KEY_();
	static ref<java::lang::String> LIST_ALL_CONTACTS_ACTION_();
	static ref<java::lang::String> LIST_CONTACTS_WITH_PHONES_ACTION_();
	static ref<java::lang::String> LIST_DEFAULT_();
	static ref<java::lang::String> LIST_FREQUENT_ACTION_();
	static ref<java::lang::String> LIST_GROUP_ACTION_();
	static ref<java::lang::String> LIST_STARRED_ACTION_();
	static ref<java::lang::String> LIST_STREQUENT_ACTION_();
	static ref<java::lang::String> TITLE_EXTRA_KEY_();

	static ref<Contacts_Intents_UI> new_object();

protected:

	Contacts_Intents_UI(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> Contacts_Intents_UI::FILTER_CONTACTS_ACTION_() { return get_static_field<SCAPIX_META_STRING("FILTER_CONTACTS_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::FILTER_TEXT_EXTRA_KEY_() { return get_static_field<SCAPIX_META_STRING("FILTER_TEXT_EXTRA_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::GROUP_NAME_EXTRA_KEY_() { return get_static_field<SCAPIX_META_STRING("GROUP_NAME_EXTRA_KEY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_ALL_CONTACTS_ACTION_() { return get_static_field<SCAPIX_META_STRING("LIST_ALL_CONTACTS_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_CONTACTS_WITH_PHONES_ACTION_() { return get_static_field<SCAPIX_META_STRING("LIST_CONTACTS_WITH_PHONES_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("LIST_DEFAULT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_FREQUENT_ACTION_() { return get_static_field<SCAPIX_META_STRING("LIST_FREQUENT_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_GROUP_ACTION_() { return get_static_field<SCAPIX_META_STRING("LIST_GROUP_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_STARRED_ACTION_() { return get_static_field<SCAPIX_META_STRING("LIST_STARRED_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::LIST_STREQUENT_ACTION_() { return get_static_field<SCAPIX_META_STRING("LIST_STREQUENT_ACTION"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_Intents_UI::TITLE_EXTRA_KEY_() { return get_static_field<SCAPIX_META_STRING("TITLE_EXTRA_KEY"), ref<java::lang::String>>(); }
inline ref<Contacts_Intents_UI> Contacts_Intents_UI::new_object() { return base_::new_object(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTS_INTENTS_UI_H