// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>

#ifndef SCAPIX_JAVA_UTIL_QUEUE_H
#define SCAPIX_JAVA_UTIL_QUEUE_H

namespace scapix::java_api {
namespace java::util {

class Queue : public object_base<SCAPIX_META_STRING("java/util/Queue"),
	java::lang::Object,
	java::util::Collection>
{
public:

	jboolean add(ref<java::lang::Object> p1);
	jboolean offer(ref<java::lang::Object> p1);
	ref<java::lang::Object> remove();
	ref<java::lang::Object> poll();
	ref<java::lang::Object> element();
	ref<java::lang::Object> peek();

protected:

	Queue(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util {

inline jboolean Queue::add(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("add"), jboolean>(p1); }
inline jboolean Queue::offer(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("offer"), jboolean>(p1); }
inline ref<java::lang::Object> Queue::remove() { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Queue::poll() { return call_method<SCAPIX_META_STRING("poll"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Queue::element() { return call_method<SCAPIX_META_STRING("element"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Queue::peek() { return call_method<SCAPIX_META_STRING("peek"), ref<java::lang::Object>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_QUEUE_H
