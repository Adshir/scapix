// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/Contacts_ContactMethodsColumns.h>
#include <scapix/java_api/android/provider/Contacts_PeopleColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTS_PEOPLE_CONTACTMETHODS_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTS_PEOPLE_CONTACTMETHODS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class Contacts_People_ContactMethods : public object_base<SCAPIX_META_STRING("android/provider/Contacts$People$ContactMethods"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::Contacts_ContactMethodsColumns,
	android::provider::Contacts_PeopleColumns>
{
public:

	static ref<java::lang::String> CONTENT_DIRECTORY_();
	static ref<java::lang::String> DEFAULT_SORT_ORDER_();


protected:

	Contacts_People_ContactMethods(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> Contacts_People_ContactMethods::CONTENT_DIRECTORY_() { return get_static_field<SCAPIX_META_STRING("CONTENT_DIRECTORY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Contacts_People_ContactMethods::DEFAULT_SORT_ORDER_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_SORT_ORDER"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTS_PEOPLE_CONTACTMETHODS_H
