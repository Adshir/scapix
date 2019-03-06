// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/content/ContentProvider.h>

#ifndef SCAPIX_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_H
#define SCAPIX_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_H

namespace scapix::java_api {

namespace android::content { class ContentValues; }
namespace android::database { class Cursor; }
namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::content {

class SearchRecentSuggestionsProvider : public object_base<SCAPIX_META_STRING("android/content/SearchRecentSuggestionsProvider"),
	android::content::ContentProvider>
{
public:

	static jint DATABASE_MODE_2LINES_();
	static jint DATABASE_MODE_QUERIES_();

	static ref<SearchRecentSuggestionsProvider> new_object();
	jint delete_(ref<android::net::Uri> uri, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs);
	ref<java::lang::String> getType(ref<android::net::Uri> uri);
	ref<android::net::Uri> insert(ref<android::net::Uri> uri, ref<android::content::ContentValues> values);
	jboolean onCreate();
	ref<android::database::Cursor> query(ref<android::net::Uri> uri, ref<link::java::array<java::lang::String>> projection, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> sortOrder);
	jint update(ref<android::net::Uri> uri, ref<android::content::ContentValues> values, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs);

protected:

	SearchRecentSuggestionsProvider(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline jint SearchRecentSuggestionsProvider::DATABASE_MODE_2LINES_() { return get_static_field<SCAPIX_META_STRING("DATABASE_MODE_2LINES"), jint>(); }
inline jint SearchRecentSuggestionsProvider::DATABASE_MODE_QUERIES_() { return get_static_field<SCAPIX_META_STRING("DATABASE_MODE_QUERIES"), jint>(); }
inline ref<SearchRecentSuggestionsProvider> SearchRecentSuggestionsProvider::new_object() { return base_::new_object(); }
inline jint SearchRecentSuggestionsProvider::delete_(ref<android::net::Uri> uri, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs) { return call_method<SCAPIX_META_STRING("delete"), jint>(uri, selection, selectionArgs); }
inline ref<java::lang::String> SearchRecentSuggestionsProvider::getType(ref<android::net::Uri> uri) { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::String>>(uri); }
inline ref<android::net::Uri> SearchRecentSuggestionsProvider::insert(ref<android::net::Uri> uri, ref<android::content::ContentValues> values) { return call_method<SCAPIX_META_STRING("insert"), ref<android::net::Uri>>(uri, values); }
inline jboolean SearchRecentSuggestionsProvider::onCreate() { return call_method<SCAPIX_META_STRING("onCreate"), jboolean>(); }
inline ref<android::database::Cursor> SearchRecentSuggestionsProvider::query(ref<android::net::Uri> uri, ref<link::java::array<java::lang::String>> projection, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs, ref<java::lang::String> sortOrder) { return call_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder); }
inline jint SearchRecentSuggestionsProvider::update(ref<android::net::Uri> uri, ref<android::content::ContentValues> values, ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs) { return call_method<SCAPIX_META_STRING("update"), jint>(uri, values, selection, selectionArgs); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_H