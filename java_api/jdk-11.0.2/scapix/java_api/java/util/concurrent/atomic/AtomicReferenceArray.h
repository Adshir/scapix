// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util::function { class BinaryOperator; }
namespace java::util::function { class UnaryOperator; }

namespace java::util::concurrent::atomic {

class AtomicReferenceArray : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicReferenceArray"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<AtomicReferenceArray> new_object(jint length);
	static ref<AtomicReferenceArray> new_object(ref<link::java::array<java::lang::Object>> array);
	jint length();
	ref<java::lang::Object> get(jint i);
	void set(jint i, ref<java::lang::Object> newValue);
	void lazySet(jint i, ref<java::lang::Object> newValue);
	ref<java::lang::Object> getAndSet(jint i, ref<java::lang::Object> newValue);
	jboolean compareAndSet(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	jboolean weakCompareAndSet(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	jboolean weakCompareAndSetPlain(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	ref<java::lang::Object> getAndUpdate(jint i, ref<java::util::function::UnaryOperator> updateFunction);
	ref<java::lang::Object> updateAndGet(jint i, ref<java::util::function::UnaryOperator> updateFunction);
	ref<java::lang::Object> getAndAccumulate(jint i, ref<java::lang::Object> x, ref<java::util::function::BinaryOperator> accumulatorFunction);
	ref<java::lang::Object> accumulateAndGet(jint i, ref<java::lang::Object> x, ref<java::util::function::BinaryOperator> accumulatorFunction);
	ref<java::lang::String> toString();
	ref<java::lang::Object> getPlain(jint i);
	void setPlain(jint i, ref<java::lang::Object> newValue);
	ref<java::lang::Object> getOpaque(jint i);
	void setOpaque(jint i, ref<java::lang::Object> newValue);
	ref<java::lang::Object> getAcquire(jint i);
	void setRelease(jint i, ref<java::lang::Object> newValue);
	ref<java::lang::Object> compareAndExchange(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	ref<java::lang::Object> compareAndExchangeAcquire(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	ref<java::lang::Object> compareAndExchangeRelease(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	jboolean weakCompareAndSetVolatile(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	jboolean weakCompareAndSetAcquire(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);
	jboolean weakCompareAndSetRelease(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue);

protected:

	AtomicReferenceArray(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/BinaryOperator.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>

namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<AtomicReferenceArray> AtomicReferenceArray::new_object(jint length) { return base_::new_object(length); }
inline ref<AtomicReferenceArray> AtomicReferenceArray::new_object(ref<link::java::array<java::lang::Object>> array) { return base_::new_object(array); }
inline jint AtomicReferenceArray::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline ref<java::lang::Object> AtomicReferenceArray::get(jint i) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(i); }
inline void AtomicReferenceArray::set(jint i, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("set"), void>(i, newValue); }
inline void AtomicReferenceArray::lazySet(jint i, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("lazySet"), void>(i, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::getAndSet(jint i, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("getAndSet"), ref<java::lang::Object>>(i, newValue); }
inline jboolean AtomicReferenceArray::compareAndSet(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(i, expectedValue, newValue); }
inline jboolean AtomicReferenceArray::weakCompareAndSet(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(i, expectedValue, newValue); }
inline jboolean AtomicReferenceArray::weakCompareAndSetPlain(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("weakCompareAndSetPlain"), jboolean>(i, expectedValue, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::getAndUpdate(jint i, ref<java::util::function::UnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("getAndUpdate"), ref<java::lang::Object>>(i, updateFunction); }
inline ref<java::lang::Object> AtomicReferenceArray::updateAndGet(jint i, ref<java::util::function::UnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("updateAndGet"), ref<java::lang::Object>>(i, updateFunction); }
inline ref<java::lang::Object> AtomicReferenceArray::getAndAccumulate(jint i, ref<java::lang::Object> x, ref<java::util::function::BinaryOperator> accumulatorFunction) { return call_method<SCAPIX_META_STRING("getAndAccumulate"), ref<java::lang::Object>>(i, x, accumulatorFunction); }
inline ref<java::lang::Object> AtomicReferenceArray::accumulateAndGet(jint i, ref<java::lang::Object> x, ref<java::util::function::BinaryOperator> accumulatorFunction) { return call_method<SCAPIX_META_STRING("accumulateAndGet"), ref<java::lang::Object>>(i, x, accumulatorFunction); }
inline ref<java::lang::String> AtomicReferenceArray::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::lang::Object> AtomicReferenceArray::getPlain(jint i) { return call_method<SCAPIX_META_STRING("getPlain"), ref<java::lang::Object>>(i); }
inline void AtomicReferenceArray::setPlain(jint i, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("setPlain"), void>(i, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::getOpaque(jint i) { return call_method<SCAPIX_META_STRING("getOpaque"), ref<java::lang::Object>>(i); }
inline void AtomicReferenceArray::setOpaque(jint i, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("setOpaque"), void>(i, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::getAcquire(jint i) { return call_method<SCAPIX_META_STRING("getAcquire"), ref<java::lang::Object>>(i); }
inline void AtomicReferenceArray::setRelease(jint i, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("setRelease"), void>(i, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::compareAndExchange(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("compareAndExchange"), ref<java::lang::Object>>(i, expectedValue, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::compareAndExchangeAcquire(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("compareAndExchangeAcquire"), ref<java::lang::Object>>(i, expectedValue, newValue); }
inline ref<java::lang::Object> AtomicReferenceArray::compareAndExchangeRelease(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("compareAndExchangeRelease"), ref<java::lang::Object>>(i, expectedValue, newValue); }
inline jboolean AtomicReferenceArray::weakCompareAndSetVolatile(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("weakCompareAndSetVolatile"), jboolean>(i, expectedValue, newValue); }
inline jboolean AtomicReferenceArray::weakCompareAndSetAcquire(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("weakCompareAndSetAcquire"), jboolean>(i, expectedValue, newValue); }
inline jboolean AtomicReferenceArray::weakCompareAndSetRelease(jint i, ref<java::lang::Object> expectedValue, ref<java::lang::Object> newValue) { return call_method<SCAPIX_META_STRING("weakCompareAndSetRelease"), jboolean>(i, expectedValue, newValue); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_H