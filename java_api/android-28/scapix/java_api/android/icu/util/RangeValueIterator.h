// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_H
#define SCAPIX_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_H

namespace scapix::java_api {

namespace android::icu::util { class RangeValueIterator_Element; }

namespace android::icu::util {

class RangeValueIterator : public object_base<SCAPIX_META_STRING("android/icu/util/RangeValueIterator"),
	java::lang::Object>
{
public:

	using Element = RangeValueIterator_Element;

	jboolean next(ref<android::icu::util::RangeValueIterator_Element> p1);
	void reset();

protected:

	RangeValueIterator(handle_type h) : base_(h) {}

};

} // namespace android::icu::util
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/util/RangeValueIterator_Element.h>

namespace scapix::java_api {
namespace android::icu::util {

inline jboolean RangeValueIterator::next(ref<android::icu::util::RangeValueIterator_Element> p1) { return call_method<SCAPIX_META_STRING("next"), jboolean>(p1); }
inline void RangeValueIterator::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }

} // namespace android::icu::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_UTIL_RANGEVALUEITERATOR_H