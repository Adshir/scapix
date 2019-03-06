// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONG_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONG_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::function { class LongBinaryOperator; }
namespace java::util::function { class LongUnaryOperator; }

namespace java::util::concurrent::atomic {

class AtomicLong : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicLong"),
	java::lang::Number,
	java::io::Serializable>
{
public:

	static ref<AtomicLong> new_object(jlong initialValue);
	static ref<AtomicLong> new_object();
	jlong get();
	void set(jlong newValue);
	void lazySet(jlong newValue);
	jlong getAndSet(jlong newValue);
	jboolean compareAndSet(jlong expect, jlong p2);
	jboolean weakCompareAndSet(jlong expect, jlong p2);
	jlong getAndIncrement();
	jlong getAndDecrement();
	jlong getAndAdd(jlong delta);
	jlong incrementAndGet();
	jlong decrementAndGet();
	jlong addAndGet(jlong delta);
	jlong getAndUpdate(ref<java::util::function::LongUnaryOperator> updateFunction);
	jlong updateAndGet(ref<java::util::function::LongUnaryOperator> updateFunction);
	jlong getAndAccumulate(jlong x, ref<java::util::function::LongBinaryOperator> p2);
	jlong accumulateAndGet(jlong x, ref<java::util::function::LongBinaryOperator> p2);
	ref<java::lang::String> toString();
	jint intValue();
	jlong longValue();
	jfloat floatValue();
	jdouble doubleValue();

protected:

	AtomicLong(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#include <scapix/java_api/java/util/function/LongUnaryOperator.h>

namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<AtomicLong> AtomicLong::new_object(jlong initialValue) { return base_::new_object(initialValue); }
inline ref<AtomicLong> AtomicLong::new_object() { return base_::new_object(); }
inline jlong AtomicLong::get() { return call_method<SCAPIX_META_STRING("get"), jlong>(); }
inline void AtomicLong::set(jlong newValue) { return call_method<SCAPIX_META_STRING("set"), void>(newValue); }
inline void AtomicLong::lazySet(jlong newValue) { return call_method<SCAPIX_META_STRING("lazySet"), void>(newValue); }
inline jlong AtomicLong::getAndSet(jlong newValue) { return call_method<SCAPIX_META_STRING("getAndSet"), jlong>(newValue); }
inline jboolean AtomicLong::compareAndSet(jlong expect, jlong p2) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(expect, p2); }
inline jboolean AtomicLong::weakCompareAndSet(jlong expect, jlong p2) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(expect, p2); }
inline jlong AtomicLong::getAndIncrement() { return call_method<SCAPIX_META_STRING("getAndIncrement"), jlong>(); }
inline jlong AtomicLong::getAndDecrement() { return call_method<SCAPIX_META_STRING("getAndDecrement"), jlong>(); }
inline jlong AtomicLong::getAndAdd(jlong delta) { return call_method<SCAPIX_META_STRING("getAndAdd"), jlong>(delta); }
inline jlong AtomicLong::incrementAndGet() { return call_method<SCAPIX_META_STRING("incrementAndGet"), jlong>(); }
inline jlong AtomicLong::decrementAndGet() { return call_method<SCAPIX_META_STRING("decrementAndGet"), jlong>(); }
inline jlong AtomicLong::addAndGet(jlong delta) { return call_method<SCAPIX_META_STRING("addAndGet"), jlong>(delta); }
inline jlong AtomicLong::getAndUpdate(ref<java::util::function::LongUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("getAndUpdate"), jlong>(updateFunction); }
inline jlong AtomicLong::updateAndGet(ref<java::util::function::LongUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("updateAndGet"), jlong>(updateFunction); }
inline jlong AtomicLong::getAndAccumulate(jlong x, ref<java::util::function::LongBinaryOperator> p2) { return call_method<SCAPIX_META_STRING("getAndAccumulate"), jlong>(x, p2); }
inline jlong AtomicLong::accumulateAndGet(jlong x, ref<java::util::function::LongBinaryOperator> p2) { return call_method<SCAPIX_META_STRING("accumulateAndGet"), jlong>(x, p2); }
inline ref<java::lang::String> AtomicLong::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint AtomicLong::intValue() { return call_method<SCAPIX_META_STRING("intValue"), jint>(); }
inline jlong AtomicLong::longValue() { return call_method<SCAPIX_META_STRING("longValue"), jlong>(); }
inline jfloat AtomicLong::floatValue() { return call_method<SCAPIX_META_STRING("floatValue"), jfloat>(); }
inline jdouble AtomicLong::doubleValue() { return call_method<SCAPIX_META_STRING("doubleValue"), jdouble>(); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONG_H