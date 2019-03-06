// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumnsWithJoins.h>
#include <scapix/java_api/android/provider/ContactsContract_CommonDataKinds_CommonColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_CALLABLE_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_CALLABLE_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_CommonDataKinds_Callable : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$CommonDataKinds$Callable"),
	java::lang::Object,
	android::provider::ContactsContract_DataColumnsWithJoins,
	android::provider::ContactsContract_CommonDataKinds_CommonColumns>
{
public:

	static ref<android::net::Uri> CONTENT_FILTER_URI_();
	static ref<android::net::Uri> CONTENT_URI_();
	static ref<android::net::Uri> ENTERPRISE_CONTENT_FILTER_URI_();
	static ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_();
	static ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_COUNTS_();
	static ref<java::lang::String> EXTRA_ADDRESS_BOOK_INDEX_TITLES_();

	static ref<ContactsContract_CommonDataKinds_Callable> new_object();

protected:

	ContactsContract_CommonDataKinds_Callable(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> ContactsContract_CommonDataKinds_Callable::CONTENT_FILTER_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_FILTER_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> ContactsContract_CommonDataKinds_Callable::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::net::Uri> ContactsContract_CommonDataKinds_Callable::ENTERPRISE_CONTENT_FILTER_URI_() { return get_static_field<SCAPIX_META_STRING("ENTERPRISE_CONTENT_FILTER_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Callable::EXTRA_ADDRESS_BOOK_INDEX_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADDRESS_BOOK_INDEX"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Callable::EXTRA_ADDRESS_BOOK_INDEX_COUNTS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADDRESS_BOOK_INDEX_COUNTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_CommonDataKinds_Callable::EXTRA_ADDRESS_BOOK_INDEX_TITLES_() { return get_static_field<SCAPIX_META_STRING("EXTRA_ADDRESS_BOOK_INDEX_TITLES"), ref<java::lang::String>>(); }
inline ref<ContactsContract_CommonDataKinds_Callable> ContactsContract_CommonDataKinds_Callable::new_object() { return base_::new_object(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_CALLABLE_H