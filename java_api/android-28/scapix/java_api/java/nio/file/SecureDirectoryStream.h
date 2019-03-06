// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/DirectoryStream.h>

#ifndef SCAPIX_JAVA_NIO_FILE_SECUREDIRECTORYSTREAM_H
#define SCAPIX_JAVA_NIO_FILE_SECUREDIRECTORYSTREAM_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::nio::channels { class SeekableByteChannel; }
namespace java::nio::file { class LinkOption; }
namespace java::nio::file::attribute { class FileAttribute; }
namespace java::nio::file::attribute { class FileAttributeView; }
namespace java::util { class Set; }

namespace java::nio::file {

class SecureDirectoryStream : public object_base<SCAPIX_META_STRING("java/nio/file/SecureDirectoryStream"),
	java::lang::Object,
	java::nio::file::DirectoryStream>
{
public:

	ref<java::nio::file::SecureDirectoryStream> newDirectoryStream(ref<java::lang::Object> p1, ref<link::java::array<java::nio::file::LinkOption>> p2);
	ref<java::nio::channels::SeekableByteChannel> newByteChannel(ref<java::lang::Object> p1, ref<java::util::Set> p2, ref<link::java::array<java::nio::file::attribute::FileAttribute>> p3);
	void deleteFile(ref<java::lang::Object> p1);
	void deleteDirectory(ref<java::lang::Object> p1);
	void move(ref<java::lang::Object> p1, ref<java::nio::file::SecureDirectoryStream> p2, ref<java::lang::Object> p3);
	ref<java::nio::file::attribute::FileAttributeView> getFileAttributeView(ref<java::lang::Class> p1);
	ref<java::nio::file::attribute::FileAttributeView> getFileAttributeView(ref<java::lang::Object> p1, ref<java::lang::Class> p2, ref<link::java::array<java::nio::file::LinkOption>> p3);

protected:

	SecureDirectoryStream(handle_type h) : base_(h) {}

};

} // namespace java::nio::file
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/nio/channels/SeekableByteChannel.h>
#include <scapix/java_api/java/nio/file/LinkOption.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttributeView.h>
#include <scapix/java_api/java/util/Set.h>

namespace scapix::java_api {
namespace java::nio::file {

inline ref<java::nio::file::SecureDirectoryStream> SecureDirectoryStream::newDirectoryStream(ref<java::lang::Object> p1, ref<link::java::array<java::nio::file::LinkOption>> p2) { return call_method<SCAPIX_META_STRING("newDirectoryStream"), ref<java::nio::file::SecureDirectoryStream>>(p1, p2); }
inline ref<java::nio::channels::SeekableByteChannel> SecureDirectoryStream::newByteChannel(ref<java::lang::Object> p1, ref<java::util::Set> p2, ref<link::java::array<java::nio::file::attribute::FileAttribute>> p3) { return call_method<SCAPIX_META_STRING("newByteChannel"), ref<java::nio::channels::SeekableByteChannel>>(p1, p2, p3); }
inline void SecureDirectoryStream::deleteFile(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("deleteFile"), void>(p1); }
inline void SecureDirectoryStream::deleteDirectory(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("deleteDirectory"), void>(p1); }
inline void SecureDirectoryStream::move(ref<java::lang::Object> p1, ref<java::nio::file::SecureDirectoryStream> p2, ref<java::lang::Object> p3) { return call_method<SCAPIX_META_STRING("move"), void>(p1, p2, p3); }
inline ref<java::nio::file::attribute::FileAttributeView> SecureDirectoryStream::getFileAttributeView(ref<java::lang::Class> p1) { return call_method<SCAPIX_META_STRING("getFileAttributeView"), ref<java::nio::file::attribute::FileAttributeView>>(p1); }
inline ref<java::nio::file::attribute::FileAttributeView> SecureDirectoryStream::getFileAttributeView(ref<java::lang::Object> p1, ref<java::lang::Class> p2, ref<link::java::array<java::nio::file::LinkOption>> p3) { return call_method<SCAPIX_META_STRING("getFileAttributeView"), ref<java::nio::file::attribute::FileAttributeView>>(p1, p2, p3); }

} // namespace java::nio::file
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_SECUREDIRECTORYSTREAM_H