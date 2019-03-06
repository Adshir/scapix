// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/file/FileSystemException.h>

#ifndef SCAPIX_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION_H
#define SCAPIX_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::nio::file {

class FileAlreadyExistsException : public object_base<SCAPIX_META_STRING("java/nio/file/FileAlreadyExistsException"),
	java::nio::file::FileSystemException>
{
public:

	static ref<FileAlreadyExistsException> new_object(ref<java::lang::String> file);
	static ref<FileAlreadyExistsException> new_object(ref<java::lang::String> file, ref<java::lang::String> other, ref<java::lang::String> reason);

protected:

	FileAlreadyExistsException(handle_type h) : base_(h) {}

};

} // namespace java::nio::file
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::nio::file {

inline ref<FileAlreadyExistsException> FileAlreadyExistsException::new_object(ref<java::lang::String> file) { return base_::new_object(file); }
inline ref<FileAlreadyExistsException> FileAlreadyExistsException::new_object(ref<java::lang::String> file, ref<java::lang::String> other, ref<java::lang::String> reason) { return base_::new_object(file, other, reason); }

} // namespace java::nio::file
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_FILEALREADYEXISTSEXCEPTION_H