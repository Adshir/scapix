// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::concurrent { class TimeUnit; }

namespace java::util::concurrent {

class CountDownLatch : public object_base<SCAPIX_META_STRING("java/util/concurrent/CountDownLatch"),
	java::lang::Object>
{
public:

	static ref<CountDownLatch> new_object(jint count);
	void await();
	jboolean await(jlong timeout, ref<java::util::concurrent::TimeUnit> p2);
	void countDown();
	jlong getCount();
	ref<java::lang::String> toString();

protected:

	CountDownLatch(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<CountDownLatch> CountDownLatch::new_object(jint count) { return base_::new_object(count); }
inline void CountDownLatch::await() { return call_method<SCAPIX_META_STRING("await"), void>(); }
inline jboolean CountDownLatch::await(jlong timeout, ref<java::util::concurrent::TimeUnit> p2) { return call_method<SCAPIX_META_STRING("await"), jboolean>(timeout, p2); }
inline void CountDownLatch::countDown() { return call_method<SCAPIX_META_STRING("countDown"), void>(); }
inline jlong CountDownLatch::getCount() { return call_method<SCAPIX_META_STRING("getCount"), jlong>(); }
inline ref<java::lang::String> CountDownLatch::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_H