// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER_H
#define SCAPIX_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER_H

namespace scapix::java_api {

namespace java::util::prefs { class PreferenceChangeEvent; }

namespace java::util::prefs {

class PreferenceChangeListener : public object_base<SCAPIX_META_STRING("java/util/prefs/PreferenceChangeListener"),
	java::lang::Object,
	java::util::EventListener>
{
public:

	void preferenceChange(ref<java::util::prefs::PreferenceChangeEvent> p1);

protected:

	PreferenceChangeListener(handle_type h) : base_(h) {}

};

} // namespace java::util::prefs
} // namespace scapix::java_api

#include <scapix/java_api/java/util/prefs/PreferenceChangeEvent.h>

namespace scapix::java_api {
namespace java::util::prefs {

inline void PreferenceChangeListener::preferenceChange(ref<java::util::prefs::PreferenceChangeEvent> p1) { return call_method<SCAPIX_META_STRING("preferenceChange"), void>(p1); }

} // namespace java::util::prefs
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER_H