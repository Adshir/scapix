// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_ENTITY_NAMEDCONTENTVALUES_H
#define SCAPIX_ANDROID_CONTENT_ENTITY_NAMEDCONTENTVALUES_H

namespace scapix::java_api {

namespace android::content { class ContentValues; }
namespace android::net { class Uri; }

namespace android::content {

class Entity_NamedContentValues : public object_base<SCAPIX_META_STRING("android/content/Entity$NamedContentValues"),
	java::lang::Object>
{
public:

	ref<android::net::Uri> uri();
	ref<android::content::ContentValues> values();

	static ref<Entity_NamedContentValues> new_object(ref<android::net::Uri> uri, ref<android::content::ContentValues> values);

protected:

	Entity_NamedContentValues(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/net/Uri.h>

namespace scapix::java_api {
namespace android::content {

inline ref<android::net::Uri> Entity_NamedContentValues::uri() { return get_field<SCAPIX_META_STRING("uri"), ref<android::net::Uri>>(); }
inline ref<android::content::ContentValues> Entity_NamedContentValues::values() { return get_field<SCAPIX_META_STRING("values"), ref<android::content::ContentValues>>(); }
inline ref<Entity_NamedContentValues> Entity_NamedContentValues::new_object(ref<android::net::Uri> uri, ref<android::content::ContentValues> values) { return base_::new_object(uri, values); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_ENTITY_NAMEDCONTENTVALUES_H
