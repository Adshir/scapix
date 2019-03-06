// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_FILE_FILEVISITOR_H
#define SCAPIX_JAVA_NIO_FILE_FILEVISITOR_H

namespace scapix::java_api {

namespace java::io { class IOException; }
namespace java::nio::file { class FileVisitResult; }
namespace java::nio::file::attribute { class BasicFileAttributes; }

namespace java::nio::file {

class FileVisitor : public object_base<SCAPIX_META_STRING("java/nio/file/FileVisitor"),
	java::lang::Object>
{
public:

	ref<java::nio::file::FileVisitResult> preVisitDirectory(ref<java::lang::Object> p1, ref<java::nio::file::attribute::BasicFileAttributes> p2);
	ref<java::nio::file::FileVisitResult> visitFile(ref<java::lang::Object> p1, ref<java::nio::file::attribute::BasicFileAttributes> p2);
	ref<java::nio::file::FileVisitResult> visitFileFailed(ref<java::lang::Object> p1, ref<java::io::IOException> p2);
	ref<java::nio::file::FileVisitResult> postVisitDirectory(ref<java::lang::Object> p1, ref<java::io::IOException> p2);

protected:

	FileVisitor(handle_type h) : base_(h) {}

};

} // namespace java::nio::file
} // namespace scapix::java_api

#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/nio/file/FileVisitResult.h>
#include <scapix/java_api/java/nio/file/attribute/BasicFileAttributes.h>

namespace scapix::java_api {
namespace java::nio::file {

inline ref<java::nio::file::FileVisitResult> FileVisitor::preVisitDirectory(ref<java::lang::Object> p1, ref<java::nio::file::attribute::BasicFileAttributes> p2) { return call_method<SCAPIX_META_STRING("preVisitDirectory"), ref<java::nio::file::FileVisitResult>>(p1, p2); }
inline ref<java::nio::file::FileVisitResult> FileVisitor::visitFile(ref<java::lang::Object> p1, ref<java::nio::file::attribute::BasicFileAttributes> p2) { return call_method<SCAPIX_META_STRING("visitFile"), ref<java::nio::file::FileVisitResult>>(p1, p2); }
inline ref<java::nio::file::FileVisitResult> FileVisitor::visitFileFailed(ref<java::lang::Object> p1, ref<java::io::IOException> p2) { return call_method<SCAPIX_META_STRING("visitFileFailed"), ref<java::nio::file::FileVisitResult>>(p1, p2); }
inline ref<java::nio::file::FileVisitResult> FileVisitor::postVisitDirectory(ref<java::lang::Object> p1, ref<java::io::IOException> p2) { return call_method<SCAPIX_META_STRING("postVisitDirectory"), ref<java::nio::file::FileVisitResult>>(p1, p2); }

} // namespace java::nio::file
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_FILEVISITOR_H