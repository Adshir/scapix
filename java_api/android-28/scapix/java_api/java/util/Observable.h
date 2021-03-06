// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_OBSERVABLE_H
#define SCAPIX_JAVA_UTIL_OBSERVABLE_H

namespace scapix::java_api {

namespace java::util { class Observer; }

namespace java::util {

class Observable : public object_base<SCAPIX_META_STRING("java/util/Observable"),
	java::lang::Object>
{
public:

	static ref<Observable> new_object();
	void addObserver(ref<java::util::Observer> o);
	void deleteObserver(ref<java::util::Observer> o);
	void notifyObservers();
	void notifyObservers(ref<java::lang::Object> arg);
	void deleteObservers();
	jboolean hasChanged();
	jint countObservers();

protected:

	Observable(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Observer.h>

namespace scapix::java_api {
namespace java::util {

inline ref<Observable> Observable::new_object() { return base_::new_object(); }
inline void Observable::addObserver(ref<java::util::Observer> o) { return call_method<SCAPIX_META_STRING("addObserver"), void>(o); }
inline void Observable::deleteObserver(ref<java::util::Observer> o) { return call_method<SCAPIX_META_STRING("deleteObserver"), void>(o); }
inline void Observable::notifyObservers() { return call_method<SCAPIX_META_STRING("notifyObservers"), void>(); }
inline void Observable::notifyObservers(ref<java::lang::Object> arg) { return call_method<SCAPIX_META_STRING("notifyObservers"), void>(arg); }
inline void Observable::deleteObservers() { return call_method<SCAPIX_META_STRING("deleteObservers"), void>(); }
inline jboolean Observable::hasChanged() { return call_method<SCAPIX_META_STRING("hasChanged"), jboolean>(); }
inline jint Observable::countObservers() { return call_method<SCAPIX_META_STRING("countObservers"), jint>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_OBSERVABLE_H
