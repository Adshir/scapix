// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_STREAM_STREAMSUPPORT_H
#define SCAPIX_JAVA_UTIL_STREAM_STREAMSUPPORT_H

namespace scapix::java_api {

namespace java::util { class Spliterator; }
namespace java::util { class Spliterator_OfDouble; }
namespace java::util { class Spliterator_OfInt; }
namespace java::util { class Spliterator_OfLong; }
namespace java::util::function { class Supplier; }
namespace java::util::stream { class DoubleStream; }
namespace java::util::stream { class IntStream; }
namespace java::util::stream { class LongStream; }
namespace java::util::stream { class Stream; }

namespace java::util::stream {

class StreamSupport : public object_base<SCAPIX_META_STRING("java/util/stream/StreamSupport"),
	java::lang::Object>
{
public:

	static ref<java::util::stream::Stream> stream(ref<java::util::Spliterator> spliterator, jboolean parallel);
	static ref<java::util::stream::Stream> stream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel);
	static ref<java::util::stream::IntStream> intStream(ref<java::util::Spliterator_OfInt> spliterator, jboolean parallel);
	static ref<java::util::stream::IntStream> intStream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel);
	static ref<java::util::stream::LongStream> longStream(ref<java::util::Spliterator_OfLong> spliterator, jboolean parallel);
	static ref<java::util::stream::LongStream> longStream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel);
	static ref<java::util::stream::DoubleStream> doubleStream(ref<java::util::Spliterator_OfDouble> spliterator, jboolean parallel);
	static ref<java::util::stream::DoubleStream> doubleStream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel);

protected:

	StreamSupport(handle_type h) : base_(h) {}

};

} // namespace java::util::stream
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#include <scapix/java_api/java/util/stream/Stream.h>

namespace scapix::java_api {
namespace java::util::stream {

inline ref<java::util::stream::Stream> StreamSupport::stream(ref<java::util::Spliterator> spliterator, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("stream"), ref<java::util::stream::Stream>>(spliterator, parallel); }
inline ref<java::util::stream::Stream> StreamSupport::stream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("stream"), ref<java::util::stream::Stream>>(supplier, characteristics, parallel); }
inline ref<java::util::stream::IntStream> StreamSupport::intStream(ref<java::util::Spliterator_OfInt> spliterator, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("intStream"), ref<java::util::stream::IntStream>>(spliterator, parallel); }
inline ref<java::util::stream::IntStream> StreamSupport::intStream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("intStream"), ref<java::util::stream::IntStream>>(supplier, characteristics, parallel); }
inline ref<java::util::stream::LongStream> StreamSupport::longStream(ref<java::util::Spliterator_OfLong> spliterator, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("longStream"), ref<java::util::stream::LongStream>>(spliterator, parallel); }
inline ref<java::util::stream::LongStream> StreamSupport::longStream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("longStream"), ref<java::util::stream::LongStream>>(supplier, characteristics, parallel); }
inline ref<java::util::stream::DoubleStream> StreamSupport::doubleStream(ref<java::util::Spliterator_OfDouble> spliterator, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("doubleStream"), ref<java::util::stream::DoubleStream>>(spliterator, parallel); }
inline ref<java::util::stream::DoubleStream> StreamSupport::doubleStream(ref<java::util::function::Supplier> supplier, jint characteristics, jboolean parallel) { return call_static_method<SCAPIX_META_STRING("doubleStream"), ref<java::util::stream::DoubleStream>>(supplier, characteristics, parallel); }

} // namespace java::util::stream
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_STREAM_STREAMSUPPORT_H