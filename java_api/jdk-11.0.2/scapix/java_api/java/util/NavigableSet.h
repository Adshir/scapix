// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/SortedSet.h>

#ifndef SCAPIX_JAVA_UTIL_NAVIGABLESET_H
#define SCAPIX_JAVA_UTIL_NAVIGABLESET_H

namespace scapix::java_api {

namespace java::util { class Iterator; }

namespace java::util {

class NavigableSet : public object_base<SCAPIX_META_STRING("java/util/NavigableSet"),
	java::lang::Object,
	java::util::SortedSet>
{
public:

	ref<java::lang::Object> lower(ref<java::lang::Object> p1);
	ref<java::lang::Object> floor(ref<java::lang::Object> p1);
	ref<java::lang::Object> ceiling(ref<java::lang::Object> p1);
	ref<java::lang::Object> higher(ref<java::lang::Object> p1);
	ref<java::lang::Object> pollFirst();
	ref<java::lang::Object> pollLast();
	ref<java::util::Iterator> iterator();
	ref<java::util::NavigableSet> descendingSet();
	ref<java::util::Iterator> descendingIterator();
	ref<java::util::NavigableSet> subSet(ref<java::lang::Object> p1, jboolean p2, ref<java::lang::Object> p3, jboolean p4);
	ref<java::util::NavigableSet> headSet(ref<java::lang::Object> p1, jboolean p2);
	ref<java::util::NavigableSet> tailSet(ref<java::lang::Object> p1, jboolean p2);
	ref<java::util::SortedSet> subSet(ref<java::lang::Object> p1, ref<java::lang::Object> p2);
	ref<java::util::SortedSet> headSet(ref<java::lang::Object> p1);
	ref<java::util::SortedSet> tailSet(ref<java::lang::Object> p1);

protected:

	NavigableSet(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Iterator.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::lang::Object> NavigableSet::lower(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("lower"), ref<java::lang::Object>>(p1); }
inline ref<java::lang::Object> NavigableSet::floor(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("floor"), ref<java::lang::Object>>(p1); }
inline ref<java::lang::Object> NavigableSet::ceiling(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("ceiling"), ref<java::lang::Object>>(p1); }
inline ref<java::lang::Object> NavigableSet::higher(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("higher"), ref<java::lang::Object>>(p1); }
inline ref<java::lang::Object> NavigableSet::pollFirst() { return call_method<SCAPIX_META_STRING("pollFirst"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> NavigableSet::pollLast() { return call_method<SCAPIX_META_STRING("pollLast"), ref<java::lang::Object>>(); }
inline ref<java::util::Iterator> NavigableSet::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::NavigableSet> NavigableSet::descendingSet() { return call_method<SCAPIX_META_STRING("descendingSet"), ref<java::util::NavigableSet>>(); }
inline ref<java::util::Iterator> NavigableSet::descendingIterator() { return call_method<SCAPIX_META_STRING("descendingIterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::NavigableSet> NavigableSet::subSet(ref<java::lang::Object> p1, jboolean p2, ref<java::lang::Object> p3, jboolean p4) { return call_method<SCAPIX_META_STRING("subSet"), ref<java::util::NavigableSet>>(p1, p2, p3, p4); }
inline ref<java::util::NavigableSet> NavigableSet::headSet(ref<java::lang::Object> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("headSet"), ref<java::util::NavigableSet>>(p1, p2); }
inline ref<java::util::NavigableSet> NavigableSet::tailSet(ref<java::lang::Object> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("tailSet"), ref<java::util::NavigableSet>>(p1, p2); }
inline ref<java::util::SortedSet> NavigableSet::subSet(ref<java::lang::Object> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("subSet"), ref<java::util::SortedSet>>(p1, p2); }
inline ref<java::util::SortedSet> NavigableSet::headSet(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("headSet"), ref<java::util::SortedSet>>(p1); }
inline ref<java::util::SortedSet> NavigableSet::tailSet(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("tailSet"), ref<java::util::SortedSet>>(p1); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_NAVIGABLESET_H