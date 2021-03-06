// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Sink.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_NODE_BUILDER_H
#define SCAPIX_JAVA_UTIL_STREAM_NODE_BUILDER_H

namespace scapix::java_api {

namespace java::util::stream { class Node; }
namespace java::util::stream { class Node_Builder_OfDouble; }
namespace java::util::stream { class Node_Builder_OfLong; }
namespace java::util::stream { class Node_Builder_OfInt; }

namespace java::util::stream {

class Node_Builder : public object_base<SCAPIX_META_STRING("java/util/stream/Node$Builder"),
	java::lang::Object,
	java::util::stream::Sink>
{
public:

	using OfDouble = Node_Builder_OfDouble;
	using OfLong = Node_Builder_OfLong;
	using OfInt = Node_Builder_OfInt;

	ref<java::util::stream::Node> build();

protected:

	Node_Builder(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/stream/Node.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::Node> Node_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<java::util::stream::Node>>(); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_NODE_BUILDER_H
