// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_SPLITERATORS_H
#define SCAPIX_JAVA_UTIL_SPLITERATORS_H

namespace scapix::java_api {

namespace java::util { class Collection; }
namespace java::util { class Iterator; }
namespace java::util { class PrimitiveIterator_OfDouble; }
namespace java::util { class PrimitiveIterator_OfInt; }
namespace java::util { class PrimitiveIterator_OfLong; }
namespace java::util { class Spliterator; }
namespace java::util { class Spliterator_OfDouble; }
namespace java::util { class Spliterator_OfInt; }
namespace java::util { class Spliterator_OfLong; }
namespace java::util { class Spliterators_AbstractDoubleSpliterator; }
namespace java::util { class Spliterators_AbstractLongSpliterator; }
namespace java::util { class Spliterators_AbstractIntSpliterator; }
namespace java::util { class Spliterators_AbstractSpliterator; }

namespace java::util {

class Spliterators : public object_base<SCAPIX_META_STRING("java/util/Spliterators"),
	java::lang::Object>
{
public:

	using AbstractDoubleSpliterator = Spliterators_AbstractDoubleSpliterator;
	using AbstractLongSpliterator = Spliterators_AbstractLongSpliterator;
	using AbstractIntSpliterator = Spliterators_AbstractIntSpliterator;
	using AbstractSpliterator = Spliterators_AbstractSpliterator;

	static ref<java::util::Spliterator> emptySpliterator();
	static ref<java::util::Spliterator_OfInt> emptyIntSpliterator();
	static ref<java::util::Spliterator_OfLong> emptyLongSpliterator();
	static ref<java::util::Spliterator_OfDouble> emptyDoubleSpliterator();
	static ref<java::util::Spliterator> spliterator(ref<link::java::array<java::lang::Object>> array, jint additionalCharacteristics);
	static ref<java::util::Spliterator> spliterator(ref<link::java::array<java::lang::Object>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics);
	static ref<java::util::Spliterator_OfInt> spliterator(ref<link::java::array<jint>> array, jint additionalCharacteristics);
	static ref<java::util::Spliterator_OfInt> spliterator(ref<link::java::array<jint>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics);
	static ref<java::util::Spliterator_OfLong> spliterator(ref<link::java::array<jlong>> array, jint additionalCharacteristics);
	static ref<java::util::Spliterator_OfLong> spliterator(ref<link::java::array<jlong>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics);
	static ref<java::util::Spliterator_OfDouble> spliterator(ref<link::java::array<jdouble>> array, jint additionalCharacteristics);
	static ref<java::util::Spliterator_OfDouble> spliterator(ref<link::java::array<jdouble>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics);
	static ref<java::util::Spliterator> spliterator(ref<java::util::Collection> c, jint characteristics);
	static ref<java::util::Spliterator> spliterator(ref<java::util::Iterator> iterator, jlong size, jint p3);
	static ref<java::util::Spliterator> spliteratorUnknownSize(ref<java::util::Iterator> iterator, jint characteristics);
	static ref<java::util::Spliterator_OfInt> spliterator(ref<java::util::PrimitiveIterator_OfInt> iterator, jlong size, jint p3);
	static ref<java::util::Spliterator_OfInt> spliteratorUnknownSize(ref<java::util::PrimitiveIterator_OfInt> iterator, jint characteristics);
	static ref<java::util::Spliterator_OfLong> spliterator(ref<java::util::PrimitiveIterator_OfLong> iterator, jlong size, jint p3);
	static ref<java::util::Spliterator_OfLong> spliteratorUnknownSize(ref<java::util::PrimitiveIterator_OfLong> iterator, jint characteristics);
	static ref<java::util::Spliterator_OfDouble> spliterator(ref<java::util::PrimitiveIterator_OfDouble> iterator, jlong size, jint p3);
	static ref<java::util::Spliterator_OfDouble> spliteratorUnknownSize(ref<java::util::PrimitiveIterator_OfDouble> iterator, jint characteristics);
	static ref<java::util::Iterator> iterator(ref<java::util::Spliterator> spliterator);
	static ref<java::util::PrimitiveIterator_OfInt> iterator(ref<java::util::Spliterator_OfInt> spliterator);
	static ref<java::util::PrimitiveIterator_OfLong> iterator(ref<java::util::Spliterator_OfLong> spliterator);
	static ref<java::util::PrimitiveIterator_OfDouble> iterator(ref<java::util::Spliterator_OfDouble> spliterator);

protected:

	Spliterators(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfDouble.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfInt.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfLong.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::Spliterator> Spliterators::emptySpliterator() { return call_static_method<SCAPIX_META_STRING("emptySpliterator"), ref<java::util::Spliterator>>(); }
inline ref<java::util::Spliterator_OfInt> Spliterators::emptyIntSpliterator() { return call_static_method<SCAPIX_META_STRING("emptyIntSpliterator"), ref<java::util::Spliterator_OfInt>>(); }
inline ref<java::util::Spliterator_OfLong> Spliterators::emptyLongSpliterator() { return call_static_method<SCAPIX_META_STRING("emptyLongSpliterator"), ref<java::util::Spliterator_OfLong>>(); }
inline ref<java::util::Spliterator_OfDouble> Spliterators::emptyDoubleSpliterator() { return call_static_method<SCAPIX_META_STRING("emptyDoubleSpliterator"), ref<java::util::Spliterator_OfDouble>>(); }
inline ref<java::util::Spliterator> Spliterators::spliterator(ref<link::java::array<java::lang::Object>> array, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(array, additionalCharacteristics); }
inline ref<java::util::Spliterator> Spliterators::spliterator(ref<link::java::array<java::lang::Object>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(array, fromIndex, toIndex, additionalCharacteristics); }
inline ref<java::util::Spliterator_OfInt> Spliterators::spliterator(ref<link::java::array<jint>> array, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfInt>>(array, additionalCharacteristics); }
inline ref<java::util::Spliterator_OfInt> Spliterators::spliterator(ref<link::java::array<jint>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfInt>>(array, fromIndex, toIndex, additionalCharacteristics); }
inline ref<java::util::Spliterator_OfLong> Spliterators::spliterator(ref<link::java::array<jlong>> array, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfLong>>(array, additionalCharacteristics); }
inline ref<java::util::Spliterator_OfLong> Spliterators::spliterator(ref<link::java::array<jlong>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfLong>>(array, fromIndex, toIndex, additionalCharacteristics); }
inline ref<java::util::Spliterator_OfDouble> Spliterators::spliterator(ref<link::java::array<jdouble>> array, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfDouble>>(array, additionalCharacteristics); }
inline ref<java::util::Spliterator_OfDouble> Spliterators::spliterator(ref<link::java::array<jdouble>> array, jint fromIndex, jint toIndex, jint additionalCharacteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfDouble>>(array, fromIndex, toIndex, additionalCharacteristics); }
inline ref<java::util::Spliterator> Spliterators::spliterator(ref<java::util::Collection> c, jint characteristics) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(c, characteristics); }
inline ref<java::util::Spliterator> Spliterators::spliterator(ref<java::util::Iterator> iterator, jlong size, jint p3) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(iterator, size, p3); }
inline ref<java::util::Spliterator> Spliterators::spliteratorUnknownSize(ref<java::util::Iterator> iterator, jint characteristics) { return call_static_method<SCAPIX_META_STRING("spliteratorUnknownSize"), ref<java::util::Spliterator>>(iterator, characteristics); }
inline ref<java::util::Spliterator_OfInt> Spliterators::spliterator(ref<java::util::PrimitiveIterator_OfInt> iterator, jlong size, jint p3) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfInt>>(iterator, size, p3); }
inline ref<java::util::Spliterator_OfInt> Spliterators::spliteratorUnknownSize(ref<java::util::PrimitiveIterator_OfInt> iterator, jint characteristics) { return call_static_method<SCAPIX_META_STRING("spliteratorUnknownSize"), ref<java::util::Spliterator_OfInt>>(iterator, characteristics); }
inline ref<java::util::Spliterator_OfLong> Spliterators::spliterator(ref<java::util::PrimitiveIterator_OfLong> iterator, jlong size, jint p3) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfLong>>(iterator, size, p3); }
inline ref<java::util::Spliterator_OfLong> Spliterators::spliteratorUnknownSize(ref<java::util::PrimitiveIterator_OfLong> iterator, jint characteristics) { return call_static_method<SCAPIX_META_STRING("spliteratorUnknownSize"), ref<java::util::Spliterator_OfLong>>(iterator, characteristics); }
inline ref<java::util::Spliterator_OfDouble> Spliterators::spliterator(ref<java::util::PrimitiveIterator_OfDouble> iterator, jlong size, jint p3) { return call_static_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator_OfDouble>>(iterator, size, p3); }
inline ref<java::util::Spliterator_OfDouble> Spliterators::spliteratorUnknownSize(ref<java::util::PrimitiveIterator_OfDouble> iterator, jint characteristics) { return call_static_method<SCAPIX_META_STRING("spliteratorUnknownSize"), ref<java::util::Spliterator_OfDouble>>(iterator, characteristics); }
inline ref<java::util::Iterator> Spliterators::iterator(ref<java::util::Spliterator> spliterator) { return call_static_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(spliterator); }
inline ref<java::util::PrimitiveIterator_OfInt> Spliterators::iterator(ref<java::util::Spliterator_OfInt> spliterator) { return call_static_method<SCAPIX_META_STRING("iterator"), ref<java::util::PrimitiveIterator_OfInt>>(spliterator); }
inline ref<java::util::PrimitiveIterator_OfLong> Spliterators::iterator(ref<java::util::Spliterator_OfLong> spliterator) { return call_static_method<SCAPIX_META_STRING("iterator"), ref<java::util::PrimitiveIterator_OfLong>>(spliterator); }
inline ref<java::util::PrimitiveIterator_OfDouble> Spliterators::iterator(ref<java::util::Spliterator_OfDouble> spliterator) { return call_static_method<SCAPIX_META_STRING("iterator"), ref<java::util::PrimitiveIterator_OfDouble>>(spliterator); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SPLITERATORS_H
