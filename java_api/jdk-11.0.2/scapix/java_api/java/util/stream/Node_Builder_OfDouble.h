// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node_Builder.h>
#include <scapix/java_api/java/util/stream/Sink_OfDouble.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_NODE_BUILDER_OFDOUBLE_H
#define SCAPIX_JAVA_UTIL_STREAM_NODE_BUILDER_OFDOUBLE_H

namespace scapix::java_api {

namespace java::util::stream { class Node_OfDouble; }

namespace java::util::stream {

class Node_Builder_OfDouble : public object_base<SCAPIX_META_STRING("java/util/stream/Node$Builder$OfDouble"),
	java::lang::Object,
	java::util::stream::Node_Builder,
	java::util::stream::Sink_OfDouble>
{
public:

	ref<java::util::stream::Node_OfDouble> build();

protected:

	Node_Builder_OfDouble(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/stream/Node_OfDouble.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::Node_OfDouble> Node_Builder_OfDouble::build() { return call_method<SCAPIX_META_STRING("build"), ref<java::util::stream::Node_OfDouble>>(); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_NODE_BUILDER_OFDOUBLE_H