// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERARRAY_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERARRAY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::function { class IntBinaryOperator; }
namespace java::util::function { class IntUnaryOperator; }

namespace java::util::concurrent::atomic {

class AtomicIntegerArray : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicIntegerArray"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<AtomicIntegerArray> new_object(jint length);
	static ref<AtomicIntegerArray> new_object(ref<link::java::array<jint>> array);
	jint length();
	jint get(jint i);
	void set(jint i, jint newValue);
	void lazySet(jint i, jint newValue);
	jint getAndSet(jint i, jint newValue);
	jboolean compareAndSet(jint i, jint expect, jint update);
	jboolean weakCompareAndSet(jint i, jint expect, jint update);
	jint getAndIncrement(jint i);
	jint getAndDecrement(jint i);
	jint getAndAdd(jint i, jint delta);
	jint incrementAndGet(jint i);
	jint decrementAndGet(jint i);
	jint addAndGet(jint i, jint delta);
	jint getAndUpdate(jint i, ref<java::util::function::IntUnaryOperator> updateFunction);
	jint updateAndGet(jint i, ref<java::util::function::IntUnaryOperator> updateFunction);
	jint getAndAccumulate(jint i, jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction);
	jint accumulateAndGet(jint i, jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction);
	ref<java::lang::String> toString();

protected:

	AtomicIntegerArray(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/IntBinaryOperator.h>
#include <scapix/java_api/java/util/function/IntUnaryOperator.h>

namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<AtomicIntegerArray> AtomicIntegerArray::new_object(jint length) { return base_::new_object(length); }
inline ref<AtomicIntegerArray> AtomicIntegerArray::new_object(ref<link::java::array<jint>> array) { return base_::new_object(array); }
inline jint AtomicIntegerArray::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline jint AtomicIntegerArray::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jint>(i); }
inline void AtomicIntegerArray::set(jint i, jint newValue) { return call_method<SCAPIX_META_STRING("set"), void>(i, newValue); }
inline void AtomicIntegerArray::lazySet(jint i, jint newValue) { return call_method<SCAPIX_META_STRING("lazySet"), void>(i, newValue); }
inline jint AtomicIntegerArray::getAndSet(jint i, jint newValue) { return call_method<SCAPIX_META_STRING("getAndSet"), jint>(i, newValue); }
inline jboolean AtomicIntegerArray::compareAndSet(jint i, jint expect, jint update) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(i, expect, update); }
inline jboolean AtomicIntegerArray::weakCompareAndSet(jint i, jint expect, jint update) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(i, expect, update); }
inline jint AtomicIntegerArray::getAndIncrement(jint i) { return call_method<SCAPIX_META_STRING("getAndIncrement"), jint>(i); }
inline jint AtomicIntegerArray::getAndDecrement(jint i) { return call_method<SCAPIX_META_STRING("getAndDecrement"), jint>(i); }
inline jint AtomicIntegerArray::getAndAdd(jint i, jint delta) { return call_method<SCAPIX_META_STRING("getAndAdd"), jint>(i, delta); }
inline jint AtomicIntegerArray::incrementAndGet(jint i) { return call_method<SCAPIX_META_STRING("incrementAndGet"), jint>(i); }
inline jint AtomicIntegerArray::decrementAndGet(jint i) { return call_method<SCAPIX_META_STRING("decrementAndGet"), jint>(i); }
inline jint AtomicIntegerArray::addAndGet(jint i, jint delta) { return call_method<SCAPIX_META_STRING("addAndGet"), jint>(i, delta); }
inline jint AtomicIntegerArray::getAndUpdate(jint i, ref<java::util::function::IntUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("getAndUpdate"), jint>(i, updateFunction); }
inline jint AtomicIntegerArray::updateAndGet(jint i, ref<java::util::function::IntUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("updateAndGet"), jint>(i, updateFunction); }
inline jint AtomicIntegerArray::getAndAccumulate(jint i, jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction) { return call_method<SCAPIX_META_STRING("getAndAccumulate"), jint>(i, x, accumulatorFunction); }
inline jint AtomicIntegerArray::accumulateAndGet(jint i, jint x, ref<java::util::function::IntBinaryOperator> accumulatorFunction) { return call_method<SCAPIX_META_STRING("accumulateAndGet"), jint>(i, x, accumulatorFunction); }
inline ref<java::lang::String> AtomicIntegerArray::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERARRAY_H