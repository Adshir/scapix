// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::util::concurrent {

class CompletionException : public object_base<SCAPIX_META_STRING("java/util/concurrent/CompletionException"),
	java::lang::RuntimeException>
{
public:

	static ref<CompletionException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<CompletionException> new_object(ref<java::lang::Throwable> cause);

protected:

	CompletionException(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<CompletionException> CompletionException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<CompletionException> CompletionException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION_H