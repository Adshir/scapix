// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SYSTEM_STRUCTSTATVFS_H
#define SCAPIX_ANDROID_SYSTEM_STRUCTSTATVFS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::system {

class StructStatVfs : public object_base<SCAPIX_META_STRING("android/system/StructStatVfs"),
	java::lang::Object>
{
public:

	jlong f_bavail();
	jlong f_bfree();
	jlong f_blocks();
	jlong f_bsize();
	jlong f_favail();
	jlong f_ffree();
	jlong f_files();
	jlong f_flag();
	jlong f_frsize();
	jlong f_fsid();
	jlong f_namemax();

	static ref<StructStatVfs> new_object(jlong f_bsize, jlong p2, jlong f_frsize, jlong p4, jlong f_blocks, jlong p6, jlong f_bfree, jlong p8, jlong f_bavail, jlong p10, jlong f_files);
	ref<java::lang::String> toString();

protected:

	StructStatVfs(handle_type h) : base_(h) {}

};

} // namespace android::system
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::system {

inline jlong StructStatVfs::f_bavail() { return get_field<SCAPIX_META_STRING("f_bavail"), jlong>(); }
inline jlong StructStatVfs::f_bfree() { return get_field<SCAPIX_META_STRING("f_bfree"), jlong>(); }
inline jlong StructStatVfs::f_blocks() { return get_field<SCAPIX_META_STRING("f_blocks"), jlong>(); }
inline jlong StructStatVfs::f_bsize() { return get_field<SCAPIX_META_STRING("f_bsize"), jlong>(); }
inline jlong StructStatVfs::f_favail() { return get_field<SCAPIX_META_STRING("f_favail"), jlong>(); }
inline jlong StructStatVfs::f_ffree() { return get_field<SCAPIX_META_STRING("f_ffree"), jlong>(); }
inline jlong StructStatVfs::f_files() { return get_field<SCAPIX_META_STRING("f_files"), jlong>(); }
inline jlong StructStatVfs::f_flag() { return get_field<SCAPIX_META_STRING("f_flag"), jlong>(); }
inline jlong StructStatVfs::f_frsize() { return get_field<SCAPIX_META_STRING("f_frsize"), jlong>(); }
inline jlong StructStatVfs::f_fsid() { return get_field<SCAPIX_META_STRING("f_fsid"), jlong>(); }
inline jlong StructStatVfs::f_namemax() { return get_field<SCAPIX_META_STRING("f_namemax"), jlong>(); }
inline ref<StructStatVfs> StructStatVfs::new_object(jlong f_bsize, jlong p2, jlong f_frsize, jlong p4, jlong f_blocks, jlong p6, jlong f_bfree, jlong p8, jlong f_bavail, jlong p10, jlong f_files) { return base_::new_object(f_bsize, p2, f_frsize, p4, f_blocks, p6, f_bfree, p8, f_bavail, p10, f_files); }
inline ref<java::lang::String> StructStatVfs::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::system
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SYSTEM_STRUCTSTATVFS_H