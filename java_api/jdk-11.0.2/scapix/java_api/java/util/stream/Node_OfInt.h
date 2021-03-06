// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node_OfPrimitive.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_NODE_OFINT_H
#define SCAPIX_JAVA_UTIL_STREAM_NODE_OFINT_H

namespace scapix::java_api {

namespace java::lang { class Integer; }
namespace java::util::function { class Consumer; }
namespace java::util::function { class IntFunction; }
namespace java::util::stream { class StreamShape; }

namespace java::util::stream {

class Node_OfInt : public object_base<SCAPIX_META_STRING("java/util/stream/Node$OfInt"),
	java::lang::Object,
	java::util::stream::Node_OfPrimitive>
{
public:

	void forEach(ref<java::util::function::Consumer> consumer);
	void copyInto(ref<link::java::array<java::lang::Integer>> boxed, jint offset);
	ref<java::util::stream::Node_OfInt> truncate(jlong from, jlong p2, ref<java::util::function::IntFunction> to);
	ref<link::java::array<jint>> newArray(jint count);
	ref<java::util::stream::StreamShape> getShape();

protected:

	Node_OfInt(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#include <scapix/java_api/java/util/stream/StreamShape.h>

namespace scapix::java_api {
namespace java::util::stream {

inline void Node_OfInt::forEach(ref<java::util::function::Consumer> consumer) { return call_method<SCAPIX_META_STRING("forEach"), void>(consumer); }
inline void Node_OfInt::copyInto(ref<link::java::array<java::lang::Integer>> boxed, jint offset) { return call_method<SCAPIX_META_STRING("copyInto"), void>(boxed, offset); }
inline ref<java::util::stream::Node_OfInt> Node_OfInt::truncate(jlong from, jlong p2, ref<java::util::function::IntFunction> to) { return call_method<SCAPIX_META_STRING("truncate"), ref<java::util::stream::Node_OfInt>>(from, p2, to); }
inline ref<link::java::array<jint>> Node_OfInt::newArray(jint count) { return call_method<SCAPIX_META_STRING("newArray"), ref<link::java::array<jint>>>(count); }
inline ref<java::util::stream::StreamShape> Node_OfInt::getShape() { return call_method<SCAPIX_META_STRING("getShape"), ref<java::util::stream::StreamShape>>(); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_NODE_OFINT_H
