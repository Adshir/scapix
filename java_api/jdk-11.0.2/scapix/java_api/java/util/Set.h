// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>

#ifndef SCAPIX_JAVA_UTIL_SET_H
#define SCAPIX_JAVA_UTIL_SET_H

namespace scapix::java_api {

namespace java::util { class Iterator; }
namespace java::util { class Spliterator; }

namespace java::util {

class Set : public object_base<SCAPIX_META_STRING("java/util/Set"),
	java::lang::Object,
	java::util::Collection>
{
public:

	jint size();
	jboolean isEmpty();
	jboolean contains(ref<java::lang::Object> p1);
	ref<java::util::Iterator> iterator();
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> p1);
	jboolean add(ref<java::lang::Object> p1);
	jboolean remove(ref<java::lang::Object> p1);
	jboolean containsAll(ref<java::util::Collection> p1);
	jboolean addAll(ref<java::util::Collection> p1);
	jboolean retainAll(ref<java::util::Collection> p1);
	jboolean removeAll(ref<java::util::Collection> p1);
	void clear();
	jboolean equals(ref<java::lang::Object> p1);
	jint hashCode();
	ref<java::util::Spliterator> spliterator();
	static ref<java::util::Set> of();
	static ref<java::util::Set> of(ref<java::lang::Object> e1);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7, ref<java::lang::Object> e8);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7, ref<java::lang::Object> e8, ref<java::lang::Object> e9);
	static ref<java::util::Set> of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7, ref<java::lang::Object> e8, ref<java::lang::Object> e9, ref<java::lang::Object> e10);
	static ref<java::util::Set> of(ref<link::java::array<java::lang::Object>> elements);
	static ref<java::util::Set> copyOf(ref<java::util::Collection> coll);

protected:

	Set(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>

namespace scapix::java_api {
namespace java::util {

inline jint Set::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean Set::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jboolean Set::contains(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(p1); }
inline ref<java::util::Iterator> Set::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<link::java::array<java::lang::Object>> Set::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> Set::toArray(ref<link::java::array<java::lang::Object>> p1) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(p1); }
inline jboolean Set::add(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("add"), jboolean>(p1); }
inline jboolean Set::remove(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(p1); }
inline jboolean Set::containsAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("containsAll"), jboolean>(p1); }
inline jboolean Set::addAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(p1); }
inline jboolean Set::retainAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("retainAll"), jboolean>(p1); }
inline jboolean Set::removeAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(p1); }
inline void Set::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean Set::equals(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(p1); }
inline jint Set::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::util::Spliterator> Set::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }
inline ref<java::util::Set> Set::of() { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4, e5); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4, e5, e6); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4, e5, e6, e7); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7, ref<java::lang::Object> e8) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4, e5, e6, e7, e8); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7, ref<java::lang::Object> e8, ref<java::lang::Object> e9) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4, e5, e6, e7, e8, e9); }
inline ref<java::util::Set> Set::of(ref<java::lang::Object> e1, ref<java::lang::Object> e2, ref<java::lang::Object> e3, ref<java::lang::Object> e4, ref<java::lang::Object> e5, ref<java::lang::Object> e6, ref<java::lang::Object> e7, ref<java::lang::Object> e8, ref<java::lang::Object> e9, ref<java::lang::Object> e10) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(e1, e2, e3, e4, e5, e6, e7, e8, e9, e10); }
inline ref<java::util::Set> Set::of(ref<link::java::array<java::lang::Object>> elements) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::util::Set>>(elements); }
inline ref<java::util::Set> Set::copyOf(ref<java::util::Collection> coll) { return call_static_method<SCAPIX_META_STRING("copyOf"), ref<java::util::Set>>(coll); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SET_H
