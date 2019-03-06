// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/PrimitiveIterator.h>

#ifndef SCAPIX_JAVA_UTIL_PRIMITIVEITERATOR_OFINT_H
#define SCAPIX_JAVA_UTIL_PRIMITIVEITERATOR_OFINT_H

namespace scapix::java_api {

namespace java::lang { class Integer; }
namespace java::util::function { class Consumer; }
namespace java::util::function { class IntConsumer; }

namespace java::util {

class PrimitiveIterator_OfInt : public object_base<SCAPIX_META_STRING("java/util/PrimitiveIterator$OfInt"),
	java::lang::Object,
	java::util::PrimitiveIterator>
{
public:

	jint nextInt();
	void forEachRemaining(ref<java::util::function::IntConsumer> action);
	ref<java::lang::Integer> next();
	void forEachRemaining(ref<java::util::function::Consumer> action);

protected:

	PrimitiveIterator_OfInt(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>

namespace scapix::java_api {
namespace java::util {

inline jint PrimitiveIterator_OfInt::nextInt() { return call_method<SCAPIX_META_STRING("nextInt"), jint>(); }
inline void PrimitiveIterator_OfInt::forEachRemaining(ref<java::util::function::IntConsumer> action) { return call_method<SCAPIX_META_STRING("forEachRemaining"), void>(action); }
inline ref<java::lang::Integer> PrimitiveIterator_OfInt::next() { return call_method<SCAPIX_META_STRING("next"), ref<java::lang::Integer>>(); }
inline void PrimitiveIterator_OfInt::forEachRemaining(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEachRemaining"), void>(action); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_PRIMITIVEITERATOR_OFINT_H