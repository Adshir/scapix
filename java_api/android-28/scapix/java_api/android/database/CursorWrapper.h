// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/database/Cursor.h>

#ifndef SCAPIX_ANDROID_DATABASE_CURSORWRAPPER_H
#define SCAPIX_ANDROID_DATABASE_CURSORWRAPPER_H

namespace scapix::java_api {

namespace android::content { class ContentResolver; }
namespace android::database { class CharArrayBuffer; }
namespace android::database { class ContentObserver; }
namespace android::database { class DataSetObserver; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace java::lang { class String; }

namespace android::database {

class CursorWrapper : public object_base<SCAPIX_META_STRING("android/database/CursorWrapper"),
	java::lang::Object,
	android::database::Cursor>
{
public:

	static ref<CursorWrapper> new_object(ref<android::database::Cursor> cursor);
	ref<android::database::Cursor> getWrappedCursor();
	void close();
	jboolean isClosed();
	jint getCount();
	void deactivate();
	jboolean moveToFirst();
	jint getColumnCount();
	jint getColumnIndex(ref<java::lang::String> columnName);
	jint getColumnIndexOrThrow(ref<java::lang::String> columnName);
	ref<java::lang::String> getColumnName(jint columnIndex);
	ref<link::java::array<java::lang::String>> getColumnNames();
	jdouble getDouble(jint columnIndex);
	void setExtras(ref<android::os::Bundle> extras);
	ref<android::os::Bundle> getExtras();
	jfloat getFloat(jint columnIndex);
	jint getInt(jint columnIndex);
	jlong getLong(jint columnIndex);
	jshort getShort(jint columnIndex);
	ref<java::lang::String> getString(jint columnIndex);
	void copyStringToBuffer(jint columnIndex, ref<android::database::CharArrayBuffer> buffer);
	ref<link::java::array<jbyte>> getBlob(jint columnIndex);
	jboolean getWantsAllOnMoveCalls();
	jboolean isAfterLast();
	jboolean isBeforeFirst();
	jboolean isFirst();
	jboolean isLast();
	jint getType(jint columnIndex);
	jboolean isNull(jint columnIndex);
	jboolean moveToLast();
	jboolean move(jint offset);
	jboolean moveToPosition(jint position);
	jboolean moveToNext();
	jint getPosition();
	jboolean moveToPrevious();
	void registerContentObserver(ref<android::database::ContentObserver> observer);
	void registerDataSetObserver(ref<android::database::DataSetObserver> observer);
	jboolean requery();
	ref<android::os::Bundle> respond(ref<android::os::Bundle> extras);
	void setNotificationUri(ref<android::content::ContentResolver> cr, ref<android::net::Uri> uri);
	ref<android::net::Uri> getNotificationUri();
	void unregisterContentObserver(ref<android::database::ContentObserver> observer);
	void unregisterDataSetObserver(ref<android::database::DataSetObserver> observer);

protected:

	CursorWrapper(handle_type h) : base_(h) {}

};

} // namespace android::database
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/database/CharArrayBuffer.h>
#include <scapix/java_api/android/database/ContentObserver.h>
#include <scapix/java_api/android/database/DataSetObserver.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::database {

inline ref<CursorWrapper> CursorWrapper::new_object(ref<android::database::Cursor> cursor) { return base_::new_object(cursor); }
inline ref<android::database::Cursor> CursorWrapper::getWrappedCursor() { return call_method<SCAPIX_META_STRING("getWrappedCursor"), ref<android::database::Cursor>>(); }
inline void CursorWrapper::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline jboolean CursorWrapper::isClosed() { return call_method<SCAPIX_META_STRING("isClosed"), jboolean>(); }
inline jint CursorWrapper::getCount() { return call_method<SCAPIX_META_STRING("getCount"), jint>(); }
inline void CursorWrapper::deactivate() { return call_method<SCAPIX_META_STRING("deactivate"), void>(); }
inline jboolean CursorWrapper::moveToFirst() { return call_method<SCAPIX_META_STRING("moveToFirst"), jboolean>(); }
inline jint CursorWrapper::getColumnCount() { return call_method<SCAPIX_META_STRING("getColumnCount"), jint>(); }
inline jint CursorWrapper::getColumnIndex(ref<java::lang::String> columnName) { return call_method<SCAPIX_META_STRING("getColumnIndex"), jint>(columnName); }
inline jint CursorWrapper::getColumnIndexOrThrow(ref<java::lang::String> columnName) { return call_method<SCAPIX_META_STRING("getColumnIndexOrThrow"), jint>(columnName); }
inline ref<java::lang::String> CursorWrapper::getColumnName(jint columnIndex) { return call_method<SCAPIX_META_STRING("getColumnName"), ref<java::lang::String>>(columnIndex); }
inline ref<link::java::array<java::lang::String>> CursorWrapper::getColumnNames() { return call_method<SCAPIX_META_STRING("getColumnNames"), ref<link::java::array<java::lang::String>>>(); }
inline jdouble CursorWrapper::getDouble(jint columnIndex) { return call_method<SCAPIX_META_STRING("getDouble"), jdouble>(columnIndex); }
inline void CursorWrapper::setExtras(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("setExtras"), void>(extras); }
inline ref<android::os::Bundle> CursorWrapper::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline jfloat CursorWrapper::getFloat(jint columnIndex) { return call_method<SCAPIX_META_STRING("getFloat"), jfloat>(columnIndex); }
inline jint CursorWrapper::getInt(jint columnIndex) { return call_method<SCAPIX_META_STRING("getInt"), jint>(columnIndex); }
inline jlong CursorWrapper::getLong(jint columnIndex) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(columnIndex); }
inline jshort CursorWrapper::getShort(jint columnIndex) { return call_method<SCAPIX_META_STRING("getShort"), jshort>(columnIndex); }
inline ref<java::lang::String> CursorWrapper::getString(jint columnIndex) { return call_method<SCAPIX_META_STRING("getString"), ref<java::lang::String>>(columnIndex); }
inline void CursorWrapper::copyStringToBuffer(jint columnIndex, ref<android::database::CharArrayBuffer> buffer) { return call_method<SCAPIX_META_STRING("copyStringToBuffer"), void>(columnIndex, buffer); }
inline ref<link::java::array<jbyte>> CursorWrapper::getBlob(jint columnIndex) { return call_method<SCAPIX_META_STRING("getBlob"), ref<link::java::array<jbyte>>>(columnIndex); }
inline jboolean CursorWrapper::getWantsAllOnMoveCalls() { return call_method<SCAPIX_META_STRING("getWantsAllOnMoveCalls"), jboolean>(); }
inline jboolean CursorWrapper::isAfterLast() { return call_method<SCAPIX_META_STRING("isAfterLast"), jboolean>(); }
inline jboolean CursorWrapper::isBeforeFirst() { return call_method<SCAPIX_META_STRING("isBeforeFirst"), jboolean>(); }
inline jboolean CursorWrapper::isFirst() { return call_method<SCAPIX_META_STRING("isFirst"), jboolean>(); }
inline jboolean CursorWrapper::isLast() { return call_method<SCAPIX_META_STRING("isLast"), jboolean>(); }
inline jint CursorWrapper::getType(jint columnIndex) { return call_method<SCAPIX_META_STRING("getType"), jint>(columnIndex); }
inline jboolean CursorWrapper::isNull(jint columnIndex) { return call_method<SCAPIX_META_STRING("isNull"), jboolean>(columnIndex); }
inline jboolean CursorWrapper::moveToLast() { return call_method<SCAPIX_META_STRING("moveToLast"), jboolean>(); }
inline jboolean CursorWrapper::move(jint offset) { return call_method<SCAPIX_META_STRING("move"), jboolean>(offset); }
inline jboolean CursorWrapper::moveToPosition(jint position) { return call_method<SCAPIX_META_STRING("moveToPosition"), jboolean>(position); }
inline jboolean CursorWrapper::moveToNext() { return call_method<SCAPIX_META_STRING("moveToNext"), jboolean>(); }
inline jint CursorWrapper::getPosition() { return call_method<SCAPIX_META_STRING("getPosition"), jint>(); }
inline jboolean CursorWrapper::moveToPrevious() { return call_method<SCAPIX_META_STRING("moveToPrevious"), jboolean>(); }
inline void CursorWrapper::registerContentObserver(ref<android::database::ContentObserver> observer) { return call_method<SCAPIX_META_STRING("registerContentObserver"), void>(observer); }
inline void CursorWrapper::registerDataSetObserver(ref<android::database::DataSetObserver> observer) { return call_method<SCAPIX_META_STRING("registerDataSetObserver"), void>(observer); }
inline jboolean CursorWrapper::requery() { return call_method<SCAPIX_META_STRING("requery"), jboolean>(); }
inline ref<android::os::Bundle> CursorWrapper::respond(ref<android::os::Bundle> extras) { return call_method<SCAPIX_META_STRING("respond"), ref<android::os::Bundle>>(extras); }
inline void CursorWrapper::setNotificationUri(ref<android::content::ContentResolver> cr, ref<android::net::Uri> uri) { return call_method<SCAPIX_META_STRING("setNotificationUri"), void>(cr, uri); }
inline ref<android::net::Uri> CursorWrapper::getNotificationUri() { return call_method<SCAPIX_META_STRING("getNotificationUri"), ref<android::net::Uri>>(); }
inline void CursorWrapper::unregisterContentObserver(ref<android::database::ContentObserver> observer) { return call_method<SCAPIX_META_STRING("unregisterContentObserver"), void>(observer); }
inline void CursorWrapper::unregisterDataSetObserver(ref<android::database::DataSetObserver> observer) { return call_method<SCAPIX_META_STRING("unregisterDataSetObserver"), void>(observer); }

} // namespace android::database
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_DATABASE_CURSORWRAPPER_H