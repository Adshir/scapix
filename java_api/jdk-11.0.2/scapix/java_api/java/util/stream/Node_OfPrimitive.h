// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_NODE_OFPRIMITIVE_H
#define SCAPIX_JAVA_UTIL_STREAM_NODE_OFPRIMITIVE_H

namespace scapix::java_api {

namespace java::util { class Spliterator_OfPrimitive; }
namespace java::util::function { class IntFunction; }

namespace java::util::stream {

class Node_OfPrimitive : public object_base<SCAPIX_META_STRING("java/util/stream/Node$OfPrimitive"),
	java::lang::Object,
	java::util::stream::Node>
{
public:

	ref<java::util::Spliterator_OfPrimitive> spliterator();
	void forEach(ref<java::lang::Object> p1);
	ref<java::util::stream::Node_OfPrimitive> getChild(jint i);
	ref<java::util::stream::Node_OfPrimitive> truncate(jlong p1, jlong p2, ref<java::util::function::IntFunction> p3);
	ref<link::java::array<java::lang::Object>> asArray(ref<java::util::function::IntFunction> generator);
	ref<java::lang::Object> asPrimitiveArray();
	ref<java::lang::Object> newArray(jint p1);
	void copyInto(ref<java::lang::Object> p1, jint p2);

protected:

	Node_OfPrimitive(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Spliterator_OfPrimitive.h>
#include <scapix/java_api/java/util/function/IntFunction.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::Spliterator_OfPrimitive> Node_OfPrimitive::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfPrimitive>>(); }
inline void Node_OfPrimitive::forEach(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("forEach"), void>(p1); }
inline ref<java::util::stream::Node_OfPrimitive> Node_OfPrimitive::getChild(jint i) { return call_method<SCAPIX_META_STRING("getChild"), ref<java::util::stream::Node_OfPrimitive>>(i); }
inline ref<java::util::stream::Node_OfPrimitive> Node_OfPrimitive::truncate(jlong p1, jlong p2, ref<java::util::function::IntFunction> p3) { return call_method<SCAPIX_META_STRING("truncate"), ref<java::util::stream::Node_OfPrimitive>>(p1, p2, p3); }
inline ref<link::java::array<java::lang::Object>> Node_OfPrimitive::asArray(ref<java::util::function::IntFunction> generator) { return call_method<SCAPIX_META_STRING("asArray"), ref<link::java::array<java::lang::Object>>>(generator); }
inline ref<java::lang::Object> Node_OfPrimitive::asPrimitiveArray() { return call_method<SCAPIX_META_STRING("asPrimitiveArray"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Node_OfPrimitive::newArray(jint p1) { return call_method<SCAPIX_META_STRING("newArray"), ref<java::lang::Object>>(p1); }
inline void Node_OfPrimitive::copyInto(ref<java::lang::Object> p1, jint p2) { return call_method<SCAPIX_META_STRING("copyInto"), void>(p1, p2); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_NODE_OFPRIMITIVE_H