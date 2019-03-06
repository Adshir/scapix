// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_DROPBOXMANAGER_H
#define SCAPIX_ANDROID_OS_DROPBOXMANAGER_H

namespace scapix::java_api {

namespace android::os { class DropBoxManager_Entry; }
namespace java::io { class File; }
namespace java::lang { class String; }

namespace android::os {

class DropBoxManager : public object_base<SCAPIX_META_STRING("android/os/DropBoxManager"),
	java::lang::Object>
{
public:

	using Entry = DropBoxManager_Entry;

	static ref<java::lang::String> ACTION_DROPBOX_ENTRY_ADDED_();
	static ref<java::lang::String> EXTRA_TAG_();
	static ref<java::lang::String> EXTRA_TIME_();
	static jint IS_EMPTY_();
	static jint IS_GZIPPED_();
	static jint IS_TEXT_();

	void addText(ref<java::lang::String> tag, ref<java::lang::String> data);
	void addData(ref<java::lang::String> tag, ref<link::java::array<jbyte>> data, jint flags);
	void addFile(ref<java::lang::String> tag, ref<java::io::File> file, jint flags);
	jboolean isTagEnabled(ref<java::lang::String> tag);
	ref<android::os::DropBoxManager_Entry> getNextEntry(ref<java::lang::String> tag, jlong msec);

protected:

	DropBoxManager(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/DropBoxManager_Entry.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::os {

inline ref<java::lang::String> DropBoxManager::ACTION_DROPBOX_ENTRY_ADDED_() { return get_static_field<SCAPIX_META_STRING("ACTION_DROPBOX_ENTRY_ADDED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DropBoxManager::EXTRA_TAG_() { return get_static_field<SCAPIX_META_STRING("EXTRA_TAG"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DropBoxManager::EXTRA_TIME_() { return get_static_field<SCAPIX_META_STRING("EXTRA_TIME"), ref<java::lang::String>>(); }
inline jint DropBoxManager::IS_EMPTY_() { return get_static_field<SCAPIX_META_STRING("IS_EMPTY"), jint>(); }
inline jint DropBoxManager::IS_GZIPPED_() { return get_static_field<SCAPIX_META_STRING("IS_GZIPPED"), jint>(); }
inline jint DropBoxManager::IS_TEXT_() { return get_static_field<SCAPIX_META_STRING("IS_TEXT"), jint>(); }
inline void DropBoxManager::addText(ref<java::lang::String> tag, ref<java::lang::String> data) { return call_method<SCAPIX_META_STRING("addText"), void>(tag, data); }
inline void DropBoxManager::addData(ref<java::lang::String> tag, ref<link::java::array<jbyte>> data, jint flags) { return call_method<SCAPIX_META_STRING("addData"), void>(tag, data, flags); }
inline void DropBoxManager::addFile(ref<java::lang::String> tag, ref<java::io::File> file, jint flags) { return call_method<SCAPIX_META_STRING("addFile"), void>(tag, file, flags); }
inline jboolean DropBoxManager::isTagEnabled(ref<java::lang::String> tag) { return call_method<SCAPIX_META_STRING("isTagEnabled"), jboolean>(tag); }
inline ref<android::os::DropBoxManager_Entry> DropBoxManager::getNextEntry(ref<java::lang::String> tag, jlong msec) { return call_method<SCAPIX_META_STRING("getNextEntry"), ref<android::os::DropBoxManager_Entry>>(tag, msec); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_DROPBOXMANAGER_H